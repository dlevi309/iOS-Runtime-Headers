/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
*/

typedef struct CLLocationManagerStateTrackerState {
	double distanceFilter;
	double desiredAccuracy;
	BOOL updatingLocation;
	BOOL requestingLocation;
	BOOL requestingRanging;
	BOOL updatingRanging;
	BOOL updatingHeading;
	double headingFilter;
	BOOL allowsLocationPrompts;
	BOOL allowsAlteredAccessoryLocations;
	BOOL dynamicAccuracyReductionEnabled;
	BOOL previousAuthorizationStatusValid;
	int previousAuthorizationStatus;
	long long activityType;
	int pausesLocationUpdatesAutomatically;
	BOOL paused;
	BOOL allowsBackgroundLocationUpdates;
	BOOL showsBackgroundLocationIndicator;
	BOOL allowsMapCorrection;
	BOOL batchingLocation;
	BOOL updatingVehicleSpeed;
	BOOL updatingVehicleHeading;
	BOOL matchInfoEnabled;
	BOOL groundAltitudeEnabled;
	BOOL courtesyPromptNeeded;
} CLLocationManagerStateTrackerState;

typedef struct __CLClient* CLClientRef;

typedef struct {
	double latitude;
	double longitude;
} SCD_Struct_CL2;

typedef struct {
	int suitability;
	SCD_Struct_CL2 coordinate;
	double horizontalAccuracy;
	double altitude;
	double verticalAccuracy;
	double speed;
	double speedAccuracy;
	double course;
	double courseAccuracy;
	double timestamp;
	int confidence;
	double lifespan;
	int type;
	SCD_Struct_CL2 rawCoordinate;
	double rawCourse;
	int floor;
	unsigned integrity;
	int referenceFrame;
	int rawReferenceFrame;
	int signalEnvironmentType;
} SCD_Struct_CL3;

typedef struct _NSZone* NSZoneRef;

typedef struct CLLocationCoordinate2D {
	double latitude;
	double longitude;
} CLLocationCoordinate2D;

typedef struct {
	double x;
	double y;
	double z;
	double magneticHeading;
	double trueHeading;
	double accuracy;
	double timestamp;
	double temperature;
	double magnitude;
	double inclination;
	int calibration;
} SCD_Struct_CL6;

typedef struct {
	char proximityUUID[512];
	unsigned short major;
	unsigned short minor;
	int definitionMask;
	BOOL notifyEntryStateOnDisplay;
} SCD_Struct_CL7;

typedef struct {
	SCD_Struct_CL2 center;
	double radius;
	double desiredAccuracy;
	int referenceFrame;
	BOOL allowMonitoringWhileNearby;
} SCD_Struct_CL8;

typedef struct {
	SCD_Struct_CL2 vertices[101];
	int verticesCount;
	int referenceFrame;
	BOOL allowMonitoringWhileNearby;
} SCD_Struct_CL9;

typedef struct {
	char identifier[512];
	char onBehalfOfIdentifier[512];
	int type;
	BOOL notifyOnEntry;
	BOOL notifyOnExit;
	BOOL conservativeEntry;
	BOOL emergency;
	/*function pointer*/void* ;
	SCD_Struct_CL7 beaconAttributes;
	SCD_Struct_CL8 circularAttributes;
	SCD_Struct_CL9) polygonalAttributes;
} SCD_Struct_CL10;

typedef struct {
	char field1[512];
	char field2[512];
	int field3;
	BOOL field4;
	BOOL field5;
	BOOL field6;
	BOOL( field7;
	/*function pointer*/void* field8;
	= field9;
	SCD_Struct_CL7 field10;
	SCD_Struct_CL8 field11;
	SCD_Struct_CL9) field12;
} SCD_Struct_CL11;

typedef struct {
	double speed;
	double timestamp;
	double machContinuousTime;
	double machAbsoluteTime;
} SCD_Struct_CL12;

typedef const struct __CFString* CFStringRef;

typedef const struct __CFDictionary* CFDictionaryRef;

typedef const struct __CFArray* CFArrayRef;

typedef struct {
	int field1;
	SCD_Struct_CL2 field2;
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
	SCD_Struct_CL2 field14;
	double field15;
	int field16;
	unsigned field17;
	int field18;
	int field19;
	int field20;
} SCD_Struct_CL16;

typedef struct {
	unsigned long long field1;
	double field2;
	double field3;
	double field4;
	double field5;
} SCD_Struct_CL17;

typedef struct {
	float field1;
	float field2;
	float field3;
} SCD_Struct_CL18;

typedef struct {
	BOOL field1;
	char field2[246];
} SCD_Struct_CL19;

typedef struct {
	SCD_Struct_CL18 field1;
	SCD_Struct_CL18 field2;
} SCD_Struct_CL20;

typedef struct {
	int field1;
	double( field2;
	/*function pointer*/void* field3;
	= field4;
	SCD_Struct_CL2 field5;
	0 field6;
	SCD_Struct_CL19) field7;
} SCD_Struct_CL21;

typedef struct {
	SCD_Struct_CL18 field1;
	int field2;
} SCD_Struct_CL22;

typedef struct {
	BOOL field1;
	BOOL field2;
	BOOL field3;
	BOOL field4;
	BOOL field5;
	BOOL field6;
	unsigned char field7;
	float field8;
	char field9;
	unsigned short field10;
} SCD_Struct_CL23;

typedef struct {
	double field1;
	double field2;
	BOOL field3;
	BOOL field4;
} SCD_Struct_CL24;

typedef struct {
	double field1;
	double field2;
	double field3;
	double field4;
	double field5;
	float field6;
	float field7;
	float field8;
	BOOL field9;
	int field10;
	SCD_Struct_CL2 field11;
	double field12;
	int field13;
	int field14;
	BOOL field15;
	SCD_Struct_CL2 field16;
	4 field17;
	SCD_Struct_CL2 field18;
	float field19;
	SCD_Struct_CL2 field20;
	double field21;
	double field22;
	int field23;
	BOOL field24;
	double field25;
	double field26;
	double field27;
	double field28;
} SCD_Struct_CL25;

typedef struct {
	[3 columns];
} SCD_Struct_CL26;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct {
	unsigned long long stateLengthInBytes;
	unsigned char stateLength;
	unsigned char orientationOffset;
	unsigned char orientationLength;
	unsigned char gyroBiasOffset;
	unsigned char gyroBiasLength;
	unsigned char velocityOffset;
	unsigned char velocityLength;
	unsigned char accelBiasOffset;
	unsigned char accelBiasLength;
	unsigned char positionOffset;
	unsigned char positionLength;
} SCD_Struct_CL28;

typedef struct {
	[4 columns];
} SCD_Struct_CL29;

