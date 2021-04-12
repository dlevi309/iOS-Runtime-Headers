/*
* Generated on Monday, March 1, 2021 at 2:35:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBPressCollectorDelegate;
@class BSTimer, NSMutableArray, SBPressTuple;

@interface SBPressCollector : NSObject {

	BSTimer* _hardEndTimer;
	NSMutableArray* _currentSequence;
	SBPressTuple* _currentTuple;
	double _lastHandledDownEvent;
	double _lastHandledUpEvent;
	id<SBPressCollectorDelegate> _delegate;
	double _maxPressDownDuration;
	double _maxPressUpDuration;

}

@property (assign,nonatomic,__weak) id<SBPressCollectorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double maxPressDownDuration;                               //@synthesize maxPressDownDuration=_maxPressDownDuration - In the implementation block
@property (assign,nonatomic) double maxPressUpDuration;                                 //@synthesize maxPressUpDuration=_maxPressUpDuration - In the implementation block
+(double)currentTimeStamp;
-(id)init;
-(id<SBPressCollectorDelegate>)delegate;
-(void)setDelegate:(id<SBPressCollectorDelegate>)arg1 ;
-(void)_end;
-(void)_reset;
-(void)registerPressDownWithTimeStamp:(double)arg1 ;
-(void)registerPressUpWithTimeStamp:(double)arg1 ;
-(void)_resetTimersIfNecessary;
-(void)_handlePressUpWithTimeStamp:(double)arg1 ;
-(void)_handlePressDownWithTimeStamp:(double)arg1 ;
-(double)maxPressUpDuration;
-(double)maxPressDownDuration;
-(void)_fireEndTimerWithDelay:(double)arg1 isButtonDown:(BOOL)arg2 ;
-(void)endCurrentSequence;
-(void)setMaxPressDownDuration:(double)arg1 ;
-(void)setMaxPressUpDuration:(double)arg1 ;
@end

