/*
* Generated on Thursday, January 14, 2021 at 2:25:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/SBHIDButtonStateDelegate.h>

@protocol SBHIDValueModifyingButtonSetArbiterDelegate;
@class NSDictionary, BSTimer, SBHIDButtonStateArbiter;

@interface SBHIDValueModifyingButtonSetArbiter : NSObject <SBHIDButtonStateDelegate> {

	NSDictionary* _usageToButtonDictionary;
	NSDictionary* _buttonToUsageDictionary;
	BSTimer* _timer;
	SBHIDButtonStateArbiter* _currentDownButton;
	id<SBHIDValueModifyingButtonSetArbiterDelegate> _delegate;
	double _initialRepeatDelay;
	double _subsequentRepeatDelay;

}

@property (assign,nonatomic) double initialRepeatDelay;                                                    //@synthesize initialRepeatDelay=_initialRepeatDelay - In the implementation block
@property (assign,nonatomic) double subsequentRepeatDelay;                                                 //@synthesize subsequentRepeatDelay=_subsequentRepeatDelay - In the implementation block
@property (assign,nonatomic,__weak) id<SBHIDValueModifyingButtonSetArbiterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<SBHIDValueModifyingButtonSetArbiterDelegate>)delegate;
-(void)performActionsForButtonUp:(id)arg1 ;
-(void)setDelegate:(id<SBHIDValueModifyingButtonSetArbiterDelegate>)arg1 ;
-(void)performActionsForButtonDown:(id)arg1 ;
-(void)reset;
-(void)performActionsForButtonLongPress:(id)arg1 ;
-(void)dealloc;
-(id)initWithHIDKeyPressEventUsages:(id)arg1 initialRepeatDelay:(double)arg2 subsequentRepeatDelay:(double)arg3 ;
-(BOOL)processKeyboardEvent:(IOHIDEventRef)arg1 ;
-(void)_cancelRepeatingActionTimer;
-(void)_performActionForButton:(id)arg1 ;
-(void)_startRepeatingActionTimer;
-(void)_fireRepeatingActionTimer;
-(double)initialRepeatDelay;
-(void)setInitialRepeatDelay:(double)arg1 ;
-(double)subsequentRepeatDelay;
-(void)setSubsequentRepeatDelay:(double)arg1 ;
@end

