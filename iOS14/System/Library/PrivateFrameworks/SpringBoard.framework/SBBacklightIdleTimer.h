/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBIdleTimerBase.h>
#import <libobjc.A.dylib/ITIdleTimerDelegate.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class ITAttentionAwareIdleTimer, SBIdleTimerDescriptor, NSString;

@interface SBBacklightIdleTimer : SBIdleTimerBase <ITIdleTimerDelegate, BSDescriptionProviding> {

	ITAttentionAwareIdleTimer* _attentionAwareTimer;
	BOOL _requiresManualReset;
	SBIdleTimerDescriptor* _descriptor;
	double _timeMultiplier;
	unsigned long long _expectation;

}

@property (assign,nonatomic) double timeMultiplier;                         //@synthesize timeMultiplier=_timeMultiplier - In the implementation block
@property (assign,nonatomic) unsigned long long expectation;                //@synthesize expectation=_expectation - In the implementation block
@property (assign,nonatomic) BOOL requiresManualReset;                      //@synthesize requiresManualReset=_requiresManualReset - In the implementation block
@property (nonatomic,copy) SBIdleTimerDescriptor * descriptor;              //@synthesize descriptor=_descriptor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)succinctDescription;
-(id)init;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)_reconfigureAttentionClientAndReset:(BOOL)arg1 ;
-(unsigned long long)expectation;
-(void)setActivated:(BOOL)arg1 ;
-(BOOL)isDisabled;
-(void)_stopIfManual;
-(id)initWithConfigurationIdentifier:(id)arg1 ;
-(id)_initWithAttentionAwareTimer:(id)arg1 ;
-(SBIdleTimerDescriptor *)descriptor;
-(double)_effectiveTimeoutForBaseTimeout:(double)arg1 ;
-(NSString *)description;
-(void)idleTimer:(id)arg1 attentionLostTimeoutDidExpire:(id)arg2 ;
-(BOOL)isActivated;
-(double)_effectiveWarnTimeoutDuration;
-(void)setExpectation:(unsigned long long)arg1 ;
-(void)setDescriptor:(SBIdleTimerDescriptor *)arg1 ;
-(void)reset;
-(void)_resetExpectation;
-(void)idleTimerDidReset:(id)arg1 forUserAttention:(unsigned long long)arg2 at:(double)arg3 ;
-(double)_effectiveQuickUnwarnTimeoutDurationForWarnTimeout:(double)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(BOOL)requiresManualReset;
-(void)setRequiresManualReset:(BOOL)arg1 ;
-(double)_effectiveExpireTimeoutDuration;
-(void)setTimeMultiplier:(double)arg1 ;
-(double)timeMultiplier;
@end

