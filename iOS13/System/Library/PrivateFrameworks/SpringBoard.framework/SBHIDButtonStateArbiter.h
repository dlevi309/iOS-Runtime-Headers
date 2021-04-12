/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBHIDButtonStateDelegate;
#import <SpringBoard/SpringBoard-Structs.h>
@class BSTimer;

@interface SBHIDButtonStateArbiter : NSObject {

	BSTimer* _longPressTimer;
	unsigned long long _downEventSenderID;
	unsigned long long _downTime;
	double _longPressTimeoutAtDownEvent;
	double _longPressTimeout;
	long long _pressSequence;
	id<SBHIDButtonStateDelegate> _delegate;

}

@property (getter=isLongPressDisabled,nonatomic,readonly) BOOL longPressDisabled; 
@property (assign,nonatomic) double longPressTimeout;                                          //@synthesize longPressTimeout=_longPressTimeout - In the implementation block
@property (nonatomic,readonly) long long pressSequence;                                        //@synthesize pressSequence=_pressSequence - In the implementation block
@property (assign,nonatomic,__weak) id<SBHIDButtonStateDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
-(id<SBHIDButtonStateDelegate>)delegate;
-(void)setDelegate:(id<SBHIDButtonStateDelegate>)arg1 ;
-(void)reset;
-(void)processEvent:(IOHIDEventRef)arg1 ;
-(double)longPressTimeout;
-(void)setLongPressTimeout:(double)arg1 ;
-(BOOL)isLongPressDisabled;
-(void)_invalidateLongPressTimer;
-(void)_longPressTimeoutDidOccur;
-(void)_startLongPressTimerWithTimeout:(double)arg1 ;
-(long long)pressSequence;
@end

