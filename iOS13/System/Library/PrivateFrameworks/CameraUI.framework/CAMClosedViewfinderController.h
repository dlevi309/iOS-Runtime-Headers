/*
* Generated on Monday, March 1, 2021 at 2:33:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


@protocol CAMClosedViewfinderControllerDelegate;
@class NSMutableSet;

@interface CAMClosedViewfinderController : NSObject {

	id<CAMClosedViewfinderControllerDelegate> _delegate;
	NSMutableSet* __reasonsForClosingViewfinder;
	double __referenceTime;
	long long __referenceTimeEvent;

}

@property (nonatomic,readonly) NSMutableSet * _reasonsForClosingViewfinder;                             //@synthesize _reasonsForClosingViewfinder=__reasonsForClosingViewfinder - In the implementation block
@property (assign,setter=_setReferenceTime:,nonatomic) double _referenceTime;                           //@synthesize _referenceTime=__referenceTime - In the implementation block
@property (assign,setter=_setReferenceTimeEvent:,nonatomic) long long _referenceTimeEvent;              //@synthesize _referenceTimeEvent=__referenceTimeEvent - In the implementation block
@property (assign,nonatomic,__weak) id<CAMClosedViewfinderControllerDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (getter=isViewfinderClosed,nonatomic,readonly) BOOL viewfinderClosed; 
-(id)init;
-(void)dealloc;
-(id<CAMClosedViewfinderControllerDelegate>)delegate;
-(void)setDelegate:(id<CAMClosedViewfinderControllerDelegate>)arg1 ;
-(void)_handleApplicationDidBecomeActive:(id)arg1 ;
-(void)_handleApplicationWillEnterForeground:(id)arg1 ;
-(void)_handleApplicationDidEnterBackground:(id)arg1 ;
-(void)removeClosedViewfinderReason:(long long)arg1 ;
-(void)addClosedViewfinderReason:(long long)arg1 ;
-(id)descriptionForTimeBetweenReferenceAndNow;
-(BOOL)isViewfinderClosed;
-(void)removeClosedViewfinderReason:(long long)arg1 afterDelay:(double)arg2 ;
-(void)cancelDelayedRemovalOfReason:(long long)arg1 ;
-(id)_descriptionStringForReason:(long long)arg1 ;
-(id)_descriptionForReasons:(id)arg1 ;
-(void)_setReferenceTime:(double)arg1 ;
-(void)_setReferenceTimeEvent:(long long)arg1 ;
-(NSMutableSet *)_reasonsForClosingViewfinder;
-(void)_updateReferenceTimeToNowForEvent:(long long)arg1 ;
-(void)_cancelDelayedLoggingForClosedViewfinder;
-(long long)_referenceTimeEvent;
-(void)_performDelayedRemovalOfReason:(id)arg1 ;
-(void)_scheduleLogWarningIfViewfinderStillClosedAfterDelay:(double)arg1 ;
-(void)_logWarningIfViewfinderStillClosed;
-(double)_referenceTime;
-(id)_descriptionStringForReferenceTimeEvent:(long long)arg1 ;
-(BOOL)hasClosedViewfinderReason:(long long)arg1 ;
@end

