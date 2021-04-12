/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

typedef struct {
	id field1;
	char* field2;
	unsigned long long field3;
	unsigned long long field4;
	unsigned long long field5;
	unsigned long long field6;
	unsigned field7;
	unsigned long long field8;
	BOOL field9;
	unsigned long long field10;
	float field11;
	unsigned long long field12;
	id field13;
	int field14;
} SCD_Struct_MN0;

typedef struct {
	float field1;
	float field2;
} SCD_Struct_MN1;

typedef struct {
	float field1;
	float field2;
	float field3;
	float field4;
} SCD_Struct_MN2;

typedef struct {
	unsigned short field1[2];
	unsigned short field2[2];
} SCD_Struct_MN3;

typedef struct {
	SCD_Struct_MN1 field1;
	SCD_Struct_MN1 field2;
} SCD_Struct_MN4;

typedef struct {
	SCD_Struct_MN0 field1;
	unsigned long long field2;
	unsigned long long field3;
	int field4;
	int field5;
	int field6;
	unsigned long long field7;
	unsigned long long( field8;
	/*function pointer*/void* field9;
	= field10;
	SCD_Struct_MN2 field11;
	SCD_Struct_MN3) field12;
	/*function pointer*/void* field13;
	SCD_Struct_MN4 field14;
	unsigned char field15;
	BOOL field16;
	unsigned char field17;
	BOOL field18;
	BOOL field19;
	unsigned char field20;
	BOOL field21;
	unsigned short field22;
	_ field23;
	N field24;
	unsigned short field25;
	R field26;
	a field27;
	n field28;
	g field29;
	e field30;
	BOOL field31;
	unsigned field32;
} SCD_Struct_MN5;

typedef struct _NSZone* NSZoneRef;

typedef struct {
	unsigned alertTimestamp : 1;
	unsigned distanceToIncident : 1;
	unsigned etaTimestamp : 1;
	unsigned alertType : 1;
	unsigned isAutomaticReroute : 1;
} SCD_Struct_MN7;

typedef struct {
	double latitude;
	double longitude;
} SCD_Struct_MN8;

typedef struct {
	unsigned endDistance : 1;
	unsigned endTime : 1;
	unsigned maneuverTime : 1;
	unsigned startDistance : 1;
	unsigned startTime : 1;
	unsigned vehicleSpeed : 1;
	unsigned enrouteNoticeIndex : 1;
	unsigned eventIndex : 1;
	unsigned selectedPrimaryStringIndex : 1;
	unsigned selectedSecondaryStringIndex : 1;
	unsigned stepID : 1;
	unsigned trafficColor : 1;
	unsigned type : 1;
	unsigned shortPrompt : 1;
} SCD_Struct_MN9;

typedef struct sqlite3_stmt* sqlite3_stmtRef;

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct sqlite3* sqlite3Ref;

typedef struct Matrix<double, 2, 1> {
	double _e[2];
} Matrix<double, 2, 1>;

typedef struct LineSegment<double, 2> {
	Matrix<double, 2, 1> _origin;
	Matrix<double, 2, 1> _direction;
} LineSegment<double, 2>;

typedef struct PolylineCoordinate {
	unsigned index;
	float offset;
} PolylineCoordinate;

typedef struct {
	long long context;
	double distance;
	BOOL usePrimaryName;
	BOOL useSecondaryName;
	BOOL useDistanceForSecondary;
	BOOL useContinueForSecondary;
	int numPrimarySigns;
	int numSecondarySigns;
} SCD_Struct_MN16;

typedef struct {
	unsigned courseAccuracy : 1;
	unsigned distanceFromRoute : 1;
	unsigned horizontalAccuracy : 1;
	unsigned roadMatchCourse : 1;
	unsigned routeMatchCourse : 1;
	unsigned shieldType : 1;
	unsigned speedLimitShieldType : 1;
	unsigned timestamp : 1;
	unsigned transitID : 1;
	unsigned locationState : 1;
	unsigned rampType : 1;
	unsigned rawReferenceFrame : 1;
	unsigned roadLineType : 1;
	unsigned speedLimit : 1;
	unsigned stepIndex : 1;
	unsigned isGoodMatch : 1;
	unsigned isTunnelProjection : 1;
	unsigned speedLimitIsMPH : 1;
} SCD_Struct_MN17;

typedef struct {
	unsigned maxRouteCount : 1;
} SCD_Struct_MN18;

typedef struct CLLocationCoordinate2D {
	double latitude;
	double longitude;
} CLLocationCoordinate2D;

typedef struct {
	int field1;
	SCD_Struct_MN8 field2;
	double field3;
	double field4;
	double field5;
	double field6;
	double field7;
	double field8;
	double field9;
	double field10;
	int field11;
	double field12;
	int field13;
	SCD_Struct_MN8 field14;
	double field15;
	int field16;
	unsigned field17;
	int field18;
	int field19;
	int field20;
} SCD_Struct_MN20;

typedef struct {
	unsigned index : 1;
	unsigned offset : 1;
} SCD_Struct_MN21;

typedef struct {
	double field1;
	double field2;
	double field3;
} SCD_Struct_MN22;

