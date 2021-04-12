/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PairedSync.framework/PairedSync
*/


@class PSYSyncSession;

@interface PSYSyncSessionUpdate : NSObject {

	PSYSyncSession* _originalSession;
	PSYSyncSession* _updatedSession;

}

@property (nonatomic,readonly) PSYSyncSession * originalSession;              //@synthesize originalSession=_originalSession - In the implementation block
@property (nonatomic,readonly) PSYSyncSession * updatedSession;               //@synthesize updatedSession=_updatedSession - In the implementation block
-(void)enumerateChangedActivitiesWithBlock:(/*^block*/id)arg1 ;
-(id)initWithOriginalSession:(id)arg1 updatedSession:(id)arg2 ;
-(void)enumerateNewlyRunningActivitiesWithBlock:(/*^block*/id)arg1 ;
-(void)enumerateNewlyCompletedActivitiesWithBlock:(/*^block*/id)arg1 ;
-(BOOL)didUpdateCompleteSyncSession;
-(PSYSyncSession *)originalSession;
-(PSYSyncSession *)updatedSession;
@end

