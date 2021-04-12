/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

