/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/IntentsUI.framework/IntentsUI
*/


@protocol OS_dispatch_group, OS_dispatch_queue, INUIIntentBackgroundHandlingAssertion;
@class BKSApplicationStateMonitor, BKSProcessAssertion, INWatchdogTimer, NSObject, AFSafetyBlock, NSString;

@interface INUIAppIntentDeliverer : NSObject {

	BKSApplicationStateMonitor* _appStateMonitor;
	BKSProcessAssertion* _backgroundLaunchAssertion;
	INWatchdogTimer* _assertionTimer;
	NSObject*<OS_dispatch_group> _assertionSetupGroup;
	NSObject*<OS_dispatch_queue> _queue;
	INWatchdogTimer* _requestTimer;
	AFSafetyBlock* _requestCompletionBlock;
	id<INUIIntentBackgroundHandlingAssertion> _intentBackgroundHandlingAssertion;
	NSString* _bundleIdentifier;

}

@property (nonatomic,copy,readonly) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
+(id)alloc;
-(id)init;
-(NSString *)bundleIdentifier;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(void)_invalidateAssertionTimer;
-(void)_invalidateBackboardServices;
-(void)_processAssertionWasAcquired:(BOOL)arg1 ;
-(void)_processAssertionWasInvalidatedWithCompletion:(/*^block*/id)arg1 ;
-(void)processAssertionWasInvalidatedWithCompletion:(/*^block*/id)arg1 ;
-(void)deliverIntent:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)invalidateIntentDelivery;
-(void)_handleSuccessfulAppLaunchForBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_startRequestTimerWithCompletion:(/*^block*/id)arg1 ;
-(void)_invalidateRequestTimer;
-(void)_invalidateIntentBackgroundHandlingAssertion;
@end

