/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBIdleTimerBase.h>
#import <libobjc.A.dylib/SBAttentionAwarenessClientDelegate.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString, SBIdleTimerDescriptor, SBAttentionAwarenessClient;

@interface SBAttentionAwareIdleTimer : SBIdleTimerBase <SBAttentionAwarenessClientDelegate, BSDescriptionProviding> {

	unsigned long long _configurationGeneration;
	NSString* _configurationIdentifier;
	BOOL _requiresManualReset;
	SBIdleTimerDescriptor* _descriptor;
	SBAttentionAwarenessClient* _attentionAwarenessClient;
	double _timeMultiplier;
	long long _expectation;

}

@property (nonatomic,retain) SBAttentionAwarenessClient * attentionAwarenessClient;                                     //@synthesize attentionAwarenessClient=_attentionAwarenessClient - In the implementation block
@property (assign,nonatomic) double timeMultiplier;                                                                     //@synthesize timeMultiplier=_timeMultiplier - In the implementation block
@property (assign,nonatomic) long long expectation;                                                                     //@synthesize expectation=_expectation - In the implementation block
@property (assign,nonatomic) BOOL requiresManualReset;                                                                  //@synthesize requiresManualReset=_requiresManualReset - In the implementation block
@property (getter=_configurationGeneration,nonatomic,readonly) unsigned long long configurationGeneration; 
@property (nonatomic,copy) SBIdleTimerDescriptor * descriptor;                                                          //@synthesize descriptor=_descriptor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)description;
-(void)reset;
-(SBIdleTimerDescriptor *)descriptor;
-(BOOL)isDisabled;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setDescriptor:(SBIdleTimerDescriptor *)arg1 ;
-(void)setActivated:(BOOL)arg1 ;
-(BOOL)isActivated;
-(long long)expectation;
-(SBAttentionAwarenessClient *)attentionAwarenessClient;
-(void)setAttentionAwarenessClient:(SBAttentionAwarenessClient *)arg1 ;
-(id)initWithConfigurationIdentifier:(id)arg1 ;
-(void)client:(id)arg1 attentionLostTimeoutDidExpire:(double)arg2 forConfigurationGeneration:(unsigned long long)arg3 withAssociatedObject:(id)arg4 ;
-(void)clientDidResetForUserAttention:(id)arg1 ;
-(id)initWithConfigurationIdentifier:(id)arg1 attentionAwarenessClient:(id)arg2 ;
-(void)_resetExpectation;
-(void)_reconfigureAttentionClientAndReset:(BOOL)arg1 ;
-(double)_effectiveWarnTimeout;
-(double)_effectiveQuickUnwarnTimeoutForWarnTimeout:(double)arg1 ;
-(double)_effectiveExpireTimeout;
-(void)_stopIfManual;
-(BOOL)requiresManualReset;
-(double)_effectiveTimeoutForBaseTimeout:(double)arg1 ;
-(id)_timeoutDictionaryForDescriptor:(id)arg1 ;
-(unsigned long long)_configurationGeneration;
-(double)timeMultiplier;
-(void)setTimeMultiplier:(double)arg1 ;
-(void)setExpectation:(long long)arg1 ;
-(void)setRequiresManualReset:(BOOL)arg1 ;
@end

