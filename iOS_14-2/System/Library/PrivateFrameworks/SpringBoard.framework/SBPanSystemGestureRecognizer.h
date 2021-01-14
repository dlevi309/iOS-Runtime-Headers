/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <UIKitCore/UIPanGestureRecognizer.h>

@class BSMonotonicReferenceTime, NSTimer;

@interface SBPanSystemGestureRecognizer : UIPanGestureRecognizer {

	BOOL _initialTouchReceived;
	BSMonotonicReferenceTime* _initialTouchReceivedReferenceTime;
	BOOL _failsPastMaximumPressDurationWithoutHysteresis;
	double _maximumPressDuration;
	NSTimer* _noHysterisisCancellationTimer;

}

@property (nonatomic,retain) NSTimer * noHysterisisCancellationTimer;                               //@synthesize noHysterisisCancellationTimer=_noHysterisisCancellationTimer - In the implementation block
@property (assign,nonatomic,__weak) id<SBPanSystemGestureRecognizerDelegate> delegate; 
@property (assign,nonatomic) BOOL failsPastMaximumPressDurationWithoutHysteresis;                   //@synthesize failsPastMaximumPressDurationWithoutHysteresis=_failsPastMaximumPressDurationWithoutHysteresis - In the implementation block
@property (assign,nonatomic) double maximumPressDuration;                                           //@synthesize maximumPressDuration=_maximumPressDuration - In the implementation block
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setState:(long long)arg1 ;
-(void)reset;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(double)maximumPressDuration;
-(void)setMaximumPressDuration:(double)arg1 ;
-(void)dealloc;
-(void)setFailsPastMaximumPressDurationWithoutHysteresis:(BOOL)arg1 ;
-(void)invalidateNoHysterisisCancellationTimer;
-(BOOL)failsPastMaximumPressDurationWithoutHysteresis;
-(void)setupNoHysterisisCancellationTimerIfNeeded;
-(NSTimer *)noHysterisisCancellationTimer;
-(void)setNoHysterisisCancellationTimer:(NSTimer *)arg1 ;
@end

