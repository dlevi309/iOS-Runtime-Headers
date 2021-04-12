/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@class CMMotionActivityManager, NSOperationQueue, _PASLock;

@interface _ATXMotionManagerWrapper : NSObject {

	CMMotionActivityManager* _motionActivityManager;
	NSOperationQueue* _motionActivityQueue;
	_PASLock* _currentMotion;

}
+(id)sharedInstance;
+(BOOL)hasMotionActivity;
-(id)init;
-(id)_fetchMotionActivities;
-(void)updateCurrentActivity:(id)arg1 ;
-(id)getCurrentActivity;
@end

