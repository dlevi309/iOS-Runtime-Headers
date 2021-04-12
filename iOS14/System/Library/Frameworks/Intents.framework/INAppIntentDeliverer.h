/*
* Generated on Thursday, January 14, 2021 at 2:21:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <libobjc.A.dylib/RBSAssertionObserving.h>

@protocol OS_dispatch_queue, INIntentBackgroundHandlingAssertion;
@class INIntentForwardingAction, NSString, NSObject, RBSAssertion, RBSProcessMonitor, INWatchdogTimer;

@interface INAppIntentDeliverer : NSObject <RBSAssertionObserving> {

	INIntentForwardingAction* _intentForwardingAction;
	NSString* _bundleIdentifier;
	NSObject*<OS_dispatch_queue> _queue;
	RBSAssertion* _processAssertion;
	RBSProcessMonitor* _processMonitor;
	/*^block*/id _completionBlock;
	INWatchdogTimer* _requestTimer;
	id<INIntentBackgroundHandlingAssertion> _auxiliaryAssertion;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                                    //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) RBSAssertion * processAssertion;                                       //@synthesize processAssertion=_processAssertion - In the implementation block
@property (nonatomic,readonly) RBSProcessMonitor * processMonitor;                                    //@synthesize processMonitor=_processMonitor - In the implementation block
@property (nonatomic,copy) id completionBlock;                                                        //@synthesize completionBlock=_completionBlock - In the implementation block
@property (nonatomic,retain) INWatchdogTimer * requestTimer;                                          //@synthesize requestTimer=_requestTimer - In the implementation block
@property (nonatomic,retain) id<INIntentBackgroundHandlingAssertion> auxiliaryAssertion;              //@synthesize auxiliaryAssertion=_auxiliaryAssertion - In the implementation block
@property (nonatomic,readonly) INIntentForwardingAction * intentForwardingAction;                     //@synthesize intentForwardingAction=_intentForwardingAction - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleIdentifier;                                      //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)assertion:(id)arg1 didInvalidateWithError:(id)arg2 ;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(RBSProcessMonitor *)processMonitor;
-(void)deliverIntent:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)initWithBundleIdentifier:(id)arg1 intentForwardingAction:(id)arg2 ;
-(void)deliverIntentForwardingActionWithResponseHandler:(/*^block*/id)arg1 ;
-(void)_deliverIntentForwardingActionWithResponseHandler:(/*^block*/id)arg1 ;
-(void)invalidateIntentDelivery;
-(INWatchdogTimer *)requestTimer;
-(void)completeWithIntentForwardingActionResponse:(id)arg1 ;
-(void)setRequestTimer:(INWatchdogTimer *)arg1 ;
-(id<INIntentBackgroundHandlingAssertion>)auxiliaryAssertion;
-(void)setAuxiliaryAssertion:(id<INIntentBackgroundHandlingAssertion>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(INIntentForwardingAction *)intentForwardingAction;
-(RBSAssertion *)processAssertion;
-(void)dealloc;
@end

