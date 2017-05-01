/* modified 7-16-2002 to support more parameters */
/* added FIXED_DATA3 2-1-2006 to support more data */
/* added #pragma 3-15-2007 to disable warnings about deprecated functions under VS 2005 */

#pragma warning ( disable : 4996 ) // functions like strcpy are now deprecated for security reasons; this disables the warning


typedef struct
	{
	double x, y, z;     /* the coordinates */
	double l, m, n;     /* the ray direction cosines */
	double ln, mn, nn;  /* the surface normals */
	double path;        /* the path change */
	double sag1, sag2;  /* the sag and alternate hyperhemispheric sag */
	double index, dndx, dndy, dndz; /* for GRIN surfaces only */
	double rel_surf_tran; /* for relative surface transmission data, if any */
	double udreserved1, udreserved2, udreserved3, udreserved4; /* for future expansion */
	char string[20];    /* for returning string data */
	}USER_DATA;

typedef struct
	{
	int type, numb;     /* the requested data type and number */
	int surf, wave;     /* the surface number and wavelength number */
	double wavelength, pwavelength;      /* the wavelength and primary wavelength */
	double n1, n2;      /* the index before and after */
	double cv, thic, sdia, k; /* the curvature, thickness, semi-diameter, and conic */
	double param[9];    /* the parameters 1-8 */
	double fdreserved1, fdreserved2, fdreserved3, fdreserved4; /* for future expansion */
	double xdata[201];  /* the extra data 1-200 */
	char glass[21];     /* the glass name on the surface */
	}FIXED_DATA;


typedef struct
	{
	int type, numb;     /* the requested data type and number */
	int surf, wave;     /* the surface number and wavelength number */
	int unit;           /* the unit flag */
	double wavelength, pwavelength;      /* the wavelength and primary wavelength */
	double n1, n2;      /* the index before and after */
	double cv, thic, sdia, k; /* the curvature, thickness, semi-diameter, and conic */
	int ireserved[20]; /* for future expansion */
	double dbreserved[20]; /* for future expansion */
	double param[51];    /* the parameters 0-50 */
	double xdata[201];  /* the extra data 1-200 */
	char glass[21];     /* the glass name on the surface */
	}FIXED_DATA2;

typedef struct
	{
	int type, numb;     /* the requested data type and number */
	int surf, wave;     /* the surface number and wavelength number */
	int unit, serial;   /* the unit flag and key serial number */
	int is_a_mirror, is_in_mirror_space, is_air;   /* flags that define the media */
	int ireserved[100]; /* for future expansion */
	int did_polar;  /* indicates DLL provided polarization data */
	int max_parameter, max_extradata; /* the number of parameters and extradata values */
	double Exr, Exi, Eyr, Eyi, Ezr, Ezi, Ewr, Ewi; /* polarization data */
	double dbreserved[100]; /* for future expansion */
	double wavelength, pwavelength;      /* the wavelength and primary wavelength */
	double n1, n2;      /* the index before and after */
	double cv, thic, sdia, k; /* the curvature, thickness, semi-diameter, and conic */
	double param[201];    /* the parameters 0-200 */
	double xdata[501];  /* the extra data 0-500 */
	char glass[200];     /* the glass name on the surface */
	char comment[200];     /* the surface comment */
	int *int_data; /* for future expansion */
	double *db_data; /* for future expansion */
	char *c_data; /* for future expansion */
	}FIXED_DATA3;

typedef struct
	{
	int type, numb;	  /* the requested data type and number */
	int surf, wave;	  /* the surface number and wavelength number */
	int unit, serial;	/* the unit flag and key serial number */
	int is_a_mirror, is_in_mirror_space, is_air;	/* flags that define the media */
	int ireserved[100]; /* for future expansion */
	int did_polar;  /* indicates DLL provided polarization data */
	int max_parameter, max_extradata; /* the number of parameters and extradata values */
	double Exr, Exi, Eyr, Eyi, Ezr, Ezi, Ewr, Ewi; /* polarization data */
	double dbreserved[100]; /* for future expansion */
	double wavelength, pwavelength;		/* the wavelength and primary wavelength */
	double n1, n2;		/* the index before and after */
	double cv, thic, sdia, k; /* the curvature, thickness, semi-diameter, and conic */
	double param[201];	 /* the parameters 0-200 */
	double xdata[501];  /* the extra data 0-500 */
	char glass[200];	  /* the glass name on the surface */
	char comment[200];	  /* the surface comment */
	int datasurf_numvalues; /* number of prior data surface values (max 4800) */
	double datasurf_values[4801]; /* data surface values */
	}FIXED_DATA4;
