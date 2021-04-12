/*
* Generated on Monday, March 1, 2021 at 2:33:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsSubscription.framework/NewsSubscription
*/


@class NPSoftPaywallHeightProvider, NPDeferredHardPaywallHeightProvider, UIViewController;

@interface NPPaywall : NSObject {

	 paywallType;
	 softPaywallHeightProvider;
	 deferredHardPaywallHeightProvider;
	 softPaywallViewController;
	 hardPaywallViewController;
	 deferredHardPaywallViewController;
	 delegate;
	 internalDelegate;

}

@property (readonly,nonatomic) long long paywallType; 
@property (readonly,nonatomic) NPSoftPaywallHeightProvider * softPaywallHeightProvider; 
@property (readonly,nonatomic) NPDeferredHardPaywallHeightProvider * deferredHardPaywallHeightProvider; 
@property (readonly,nonatomic) UIViewController * paywallViewController; 
@property (assign,__weak,nonatomic) id<NPPaywallDelegate> delegate; 
-(id)init;
-(id<NPPaywallDelegate>)delegate;
-(void)setDelegate:(id<NPPaywallDelegate>)arg1 ;
-(long long)paywallType;
-(NPSoftPaywallHeightProvider *)softPaywallHeightProvider;
-(NPDeferredHardPaywallHeightProvider *)deferredHardPaywallHeightProvider;
-(UIViewController *)paywallViewController;
@end

