/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(void)releaseManager;
+(void)releaseAllTrackers;
+(id)manager;
-(void)releaseTracker:(id)arg1 ;
-(id)init;
-(long long)_maximumTrackersOfType:(id)arg1 ;
-(id)_createTracker:(id)arg1 type:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(id)trackerWithOptions:(id)arg1 error:(id*)arg2 ;
-(id)_getTracker:(id)arg1 ;
@end

