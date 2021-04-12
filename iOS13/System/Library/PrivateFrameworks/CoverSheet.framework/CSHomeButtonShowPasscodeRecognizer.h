/*
* Generated on Monday, March 1, 2021 at 2:33:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <libobjc.A.dylib/SBHomeButtonShowPasscodeRecognizer.h>

@protocol SBHomeButtonShowPasscodeRecognizerDelegate;
@class NSString, BSTimer;

@interface CSHomeButtonShowPasscodeRecognizer : NSObject <SBHomeButtonShowPasscodeRecognizer> {

	NSString* _simplePublicDescription;
	id<SBHomeButtonShowPasscodeRecognizerDelegate> _delegate;
	unsigned long long _state;
	BOOL _fingerWasOnInitially;
	BOOL _fingerHasLifted;
	BSTimer* _minimumTimer;
	NSString* _terminalStateReasoning;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SBHomeButtonShowPasscodeRecognizerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(NSString *)description;
-(id<SBHomeButtonShowPasscodeRecognizerDelegate>)delegate;
-(void)setDelegate:(id<SBHomeButtonShowPasscodeRecognizerDelegate>)arg1 ;
-(unsigned long long)_state;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)handleBiometricEvent:(unsigned long long)arg1 ;
-(void)noteAuthenticated:(BOOL)arg1 ;
-(id)initWithFingerOn:(BOOL)arg1 ;
-(void)_reallySetState:(unsigned long long)arg1 forReason:(id)arg2 ;
-(void)_invalidateMinimumTimer;
-(void)_switchedFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2 ;
-(void)_minimumTimerFired;
-(void)_simulateTimerFiring;
@end

