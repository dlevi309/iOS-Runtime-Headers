/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBPressSequenceRecognizerDelegate;
@class BSTimer, SBPressTuple, NSMutableArray, SBPressSequenceValidator;

@interface SBPressSequenceRecognizer : NSObject {

	double _lastPressDownEvent;
	double _lastPressUpEvent;
	BSTimer* _watchdogTimer;
	SBPressTuple* _currentPressTuple;
	NSMutableArray* _currentSequence;
	id<SBPressSequenceRecognizerDelegate> _delegate;
	SBPressSequenceValidator* _validator;
	unsigned long long _numberOfPresses;

}

@property (assign,nonatomic,__weak) id<SBPressSequenceRecognizerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) SBPressSequenceValidator * validator;                             //@synthesize validator=_validator - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfPresses;                               //@synthesize numberOfPresses=_numberOfPresses - In the implementation block
-(id)init;
-(id<SBPressSequenceRecognizerDelegate>)delegate;
-(void)setDelegate:(id<SBPressSequenceRecognizerDelegate>)arg1 ;
-(void)_reset;
-(void)_complete;
-(SBPressSequenceValidator *)validator;
-(void)registerPressDownWithTimestamp:(double)arg1 ;
-(void)registerPressUpWithTimestamp:(double)arg1 ;
-(unsigned long long)numberOfPresses;
-(void)resetWithNewValidator:(id)arg1 numberOfPresses:(unsigned long long)arg2 ;
-(id)initWithValidator:(id)arg1 numberOfPresses:(unsigned long long)arg2 ;
-(void)_handlePressDownWithTimestamp:(double)arg1 ;
-(void)_handlePressUpWithTimestamp:(double)arg1 ;
-(void)_resetAndNotify;
-(void)_resetWatchdogIfNecessary;
-(void)_resetAfterDelay:(double)arg1 ;
-(double)_watchdogTimeIntervalFromDelay:(double)arg1 ;
@end

