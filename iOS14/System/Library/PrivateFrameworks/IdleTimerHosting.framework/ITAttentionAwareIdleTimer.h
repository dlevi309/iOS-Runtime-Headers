/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IdleTimerHosting.framework/IdleTimerHosting
*/

#import <IdleTimerHosting/IdleTimerHosting-Structs.h>
#import <libobjc.A.dylib/ITAttentionAwarenessClientDelegate.h>

@protocol ITIdleTimerDelegate;
@class NSString, ITAttentionAwarenessClient, ITIdleTimerDescriptor, ITAttentionAwarenessContext;

@interface ITAttentionAwareIdleTimer : NSObject <ITAttentionAwarenessClientDelegate> {

	os_unfair_recursive_lock_s _accessLock;
	NSString* _configurationIdentifier;
	ITAttentionAwarenessClient* _access_client;
	ITIdleTimerDescriptor* _access_descriptor;
	ITAttentionAwarenessContext* _access_context;
	id<ITIdleTimerDelegate> _delegate;

}

@property (nonatomic,__weak,readonly) id<ITIdleTimerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) ITAttentionAwarenessContext * _context; 
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (nonatomic,copy,readonly) ITIdleTimerDescriptor * descriptor; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_timeoutDictionaryForTimeouts:(id)arg1 ;
+(id)_configurationWithIdentifier:(id)arg1 descriptor:(id)arg2 context:(id)arg3 ;
-(id)succinctDescription;
-(id)init;
-(id<ITIdleTimerDelegate>)delegate;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(ITIdleTimerDescriptor *)descriptor;
-(NSString *)description;
-(void)reset;
-(BOOL)isEnabled;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(ITAttentionAwarenessContext *)_context;
-(id)succinctDescriptionBuilder;
-(id)initWithConfigurationIdentifier:(id)arg1 delegate:(id)arg2 calloutQueue:(id)arg3 ;
-(void)setDescriptor:(id)arg1 resettingTimer:(BOOL)arg2 ;
-(void)client:(id)arg1 attentionLostTimeoutDidExpire:(id)arg2 forContext:(id)arg3 ;
-(void)clientDidReset:(id)arg1 forUserAttentionEvent:(id)arg2 withContext:(id)arg3 ;
-(id)_initWithConfigurationIdentifier:(id)arg1 delegate:(id)arg2 calloutQueue:(id)arg3 client:(id)arg4 ;
-(void)_access_reconfigureAttentionClientAndReset:(BOOL)arg1 ;
-(id)_access_generateConfiguration;
-(id)initWithConfigurationIdentifier:(id)arg1 delegate:(id)arg2 ;
@end

