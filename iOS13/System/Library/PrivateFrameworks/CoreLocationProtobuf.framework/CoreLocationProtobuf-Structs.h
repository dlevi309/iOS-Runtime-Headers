/*
* Generated on Monday, March 1, 2021 at 2:33:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
*/

typedef struct _NSZone* NSZoneRef;

typedef struct {
	unsigned startTimestamp : 1;
	unsigned stopTimestamp : 1;
	unsigned collectionType : 1;
} SCD_Struct_CL1;

typedef struct {
	unsigned age : 1;
	unsigned loiType : 1;
	unsigned routineMode : 1;
	unsigned serverHash : 1;
} SCD_Struct_CL2;

typedef struct {
	unsigned timestamp : 1;
} SCD_Struct_CL3;

typedef struct {
	unsigned channel : 1;
	unsigned ecn0 : 1;
	unsigned pilotPhase : 1;
	unsigned pnoffset : 1;
	unsigned rscp : 1;
} SCD_Struct_CL4;

typedef struct {
	int list;
	unsigned long long count;
	unsigned long long size;
} SCD_Struct_CL5;

typedef struct {
	unsigned bsLatitude : 1;
	unsigned bsLongitude : 1;
	unsigned sectorLatitude : 1;
	unsigned sectorLongitude : 1;
	unsigned bandclass : 1;
	unsigned celltype : 1;
	unsigned channel : 1;
	unsigned dayLightSavings : 1;
	unsigned ecn0 : 1;
	unsigned ltmOffset : 1;
	unsigned pnoffset : 1;
	unsigned rat : 1;
	unsigned rscp : 1;
	unsigned serverHash : 1;
	unsigned zoneid : 1;
	unsigned isLimitedService : 1;
} SCD_Struct_CL6;

typedef struct {
	unsigned arfcn : 1;
	unsigned ecn0 : 1;
	unsigned psc : 1;
	unsigned rat : 1;
	unsigned rscp : 1;
	unsigned serverHash : 1;
	unsigned transmit : 1;
	unsigned isLimitedService : 1;
} SCD_Struct_CL7;

typedef struct {
	unsigned firstStepTime : 1;
	unsigned timestamp : 1;
	unsigned activeTime : 1;
	unsigned distance : 1;
	unsigned floorsAscended : 1;
	unsigned floorsDescended : 1;
	unsigned numberOfSteps : 1;
} SCD_Struct_CL8;

typedef struct {
	unsigned age : 1;
	unsigned hidden : 1;
} SCD_Struct_CL9;

typedef struct {
	unsigned altitude : 1;
	unsigned context : 1;
	unsigned course : 1;
	unsigned courseAccuracy : 1;
	unsigned floor : 1;
	unsigned horzUncSemiMaj : 1;
	unsigned horzUncSemiMajAz : 1;
	unsigned horzUncSemiMin : 1;
	unsigned modeIndicator : 1;
	unsigned motionActivityConfidence : 1;
	unsigned motionActivityType : 1;
	unsigned provider : 1;
	unsigned speed : 1;
	unsigned speedAccuracy : 1;
	unsigned verticalAccuracy : 1;
	unsigned isFromLocationController : 1;
	unsigned motionVehicleConnected : 1;
	unsigned motionVehicleConnectedStateChanged : 1;
} SCD_Struct_CL10;

typedef struct {
	unsigned cellLatitude : 1;
	unsigned cellLongitude : 1;
	unsigned bandInfo : 1;
	unsigned bandwidth : 1;
	unsigned ecn0 : 1;
	unsigned pid : 1;
	unsigned rscp : 1;
	unsigned rssi : 1;
	unsigned serverHash : 1;
	unsigned uarfcn : 1;
	unsigned isLimitedService : 1;
} SCD_Struct_CL11;

typedef struct {
	double list;
	unsigned long long count;
	unsigned long long size;
} SCD_Struct_CL12;

typedef struct {
	unsigned prbCoarseIndoorSaysIndoor : 1;
	unsigned prbGpsSaysIndoor : 1;
	unsigned prbInjectionGainRetryLimitOk : 1;
	unsigned prbInjectionOccupancyRetryLimitOk : 1;
	unsigned prbInlierEstimate : 1;
	unsigned prbLocalizerIoWrapperSaysWifiOk : 1;
	unsigned prbOnFloorsEstimate : 1;
	unsigned prbParticleFilterSaysYield : 1;
	unsigned prbPipelinedSaysYield : 1;
	unsigned prbWifiSaysIndoor : 1;
	unsigned pfYieldStatusBeforeCalculatePose : 1;
	unsigned yieldStatusBeforeCalculatePose : 1;
	unsigned yieldType : 1;
} SCD_Struct_CL13;

typedef struct {
	BOOL list;
	unsigned long long count;
	unsigned long long size;
} SCD_Struct_CL14;

