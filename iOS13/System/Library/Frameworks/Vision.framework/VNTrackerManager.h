/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/


@protocol OS_dispatch_queue;
@class NSDictionary, NSMapTable, NSMutableDictionary, NSObject;

@interface VNTrackerManager : NSObject {

	NSDictionary* _trackerTypeToClassDictionary;
	NSMapTable* _trackerClassToNameMapTable;
	NSMutableDictionary* _liveTrackerCounter;
	NSObject*<OS_dispatch_queue> _trackingProcessingQueue;
	NSObject*<OS_dispatch_queue> _trackersCollectionManagementQueue;
	NSDictionary* _liveTrackerCounterLimit;
	NSMutableDictionary* _trackers;

}
+(id)manager;
+(void)releaseManager;
+(void)releaseAllTrackers;
-(id)init;
-(id)trackerWithOptions:(id)arg1 error:(id*)arg2 ;
-(long long)_maximumTrackersOfType:(id)arg1 ;
-(id)_getTracker:(id)arg1 ;
-(id)_createTracker:(id)arg1 type:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(void)releaseTracker:(id)arg1 ;
@end

