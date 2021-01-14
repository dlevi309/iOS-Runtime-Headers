/*
* Generated on Thursday, January 14, 2021 at 2:24:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)subscribe;
-(void)unsubscribe;
-(BOOL)isStationary;
-(id)init;
-(void)stopActivityUpdates;
-(unsigned)currentMotion;
-(void)transitionToState:(unsigned)arg1 ;
-(void)initializeEngine;
-(void)destroyEngine;
-(void)stopMotionMonitoring;
-(void)startMotionMonitoring;
-(void)startActivityUpdates;
-(BOOL)isMoving;
-(void)dealloc;
-(id)motionStateString:(unsigned)arg1 ;
@end

