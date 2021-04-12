/*
* Generated on Monday, March 1, 2021 at 2:33:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/


@protocol OS_dispatch_queue;
@class NSObject, CMMotionActivityManager, NSOperationQueue;

@interface MotionStateRelay : NSObject {

	NSObject*<OS_dispatch_queue> _alarmQueue;
	unsigned _currentMotion;
	BOOL _isStationary;
	BOOL _isMoving;
	CMMotionActivityManager* _activityManager;
	NSOperationQueue* _alarmOperationQueue;

}

@property (nonatomic,readonly) unsigned currentMotion;              //@synthesize currentMotion=_currentMotion - In the implementation block
@property (nonatomic,readonly) BOOL isStationary;                   //@synthesize isStationary=_isStationary - In the implementation block
+(id)sharedInstance;
+(BOOL)automaticallyNotifiesObserversOfCurrentMotion;
+(BOOL)automaticallyNotifiesObserversOfIsStationary;
-(id)init;
-(void)dealloc;
-(void)transitionToState:(unsigned)arg1 ;
-(BOOL)isMoving;
-(void)stopActivityUpdates;
-(BOOL)isStationary;
-(void)unsubscribe;
-(void)subscribe;
-(void)initializeEngine;
-(void)destroyEngine;
-(void)stopMotionMonitoring;
-(void)startMotionMonitoring;
-(void)startActivityUpdates;
-(id)motionStateString:(unsigned)arg1 ;
-(unsigned)currentMotion;
@end

