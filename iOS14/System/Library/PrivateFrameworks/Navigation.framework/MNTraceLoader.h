/*
* Generated on Thursday, January 14, 2021 at 2:24:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/


@class MNTrace;

@interface MNTraceLoader : NSObject {

	MNTrace* _trace;

}
-(id)loadTraceWithPath:(id)arg1 outError:(id*)arg2 ;
-(BOOL)_loadTraceVersion;
-(BOOL)_updateTraceFromVersion:(unsigned long long)arg1 outError:(id*)arg2 ;
-(BOOL)_loadInfoTable;
-(BOOL)_loadLocationsTable;
-(BOOL)_loadDirectionsTable;
-(BOOL)_loadETAUpdatesTable;
-(BOOL)_loadCompassHeadingDataTable;
-(BOOL)_loadMotionDataTable;
-(BOOL)_loadVehicleDataTable;
-(BOOL)_loadRouteSelectionsTable;
-(BOOL)_loadAnnotatedUserBehaviorTable;
-(BOOL)_loadAnnotatedUserEnvironmentTable;
-(BOOL)_loadCommuteDestinationsTable;
-(BOOL)_loadCommuteDirectionsRequestsTable;
-(BOOL)_loadMiscInfo;
-(BOOL)_executeQuery:(id)arg1 rowHandler:(/*^block*/id)arg2 ;
-(BOOL)_tableExists:(id)arg1 ;
-(id)_handleUpdateError;
@end

