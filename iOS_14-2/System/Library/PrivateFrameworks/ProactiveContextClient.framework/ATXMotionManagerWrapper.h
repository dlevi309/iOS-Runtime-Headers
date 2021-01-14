/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveContextClient.framework/ProactiveContextClient
*/


@class CMMotionActivityManager, NSOperationQueue, NSMutableDictionary, CMMotionActivity, _PASLock;

@interface ATXMotionManagerWrapper : NSObject {

	CMMotionActivityManager* _motionActivityManager;
	NSOperationQueue* _motionActivityQueue;
	NSMutableDictionary* _delegatesMonitoringForMotionType;
	CMMotionActivity* _mostRecentActivity;
	_PASLock* _currentMotion;

}
+(BOOL)hasMotionActivity;
+(id)sharedInstance;
-(/*^block*/id)_motionActivityHandler;
-(id)init;
-(void)updateCurrentActivity:(id)arg1 ;
-(id)_fetchMotionActivities;
-(void)startUpdatingMotionType:(long long)arg1 forDelegate:(id)arg2 ;
-(void)stopUpdatingMotionType:(long long)arg1 forDelegate:(id)arg2 ;
-(id)getCurrentActivity;
@end

