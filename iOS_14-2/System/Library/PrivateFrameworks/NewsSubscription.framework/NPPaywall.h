/*
* Generated on Thursday, January 14, 2021 at 2:24:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsSubscription.framework/NewsSubscription
*/


@class NPSoftPaywallHeightProvider, NPDeferredHardPaywallHeightProvider, UIViewController;

@interface NPPaywall : NSObject {

	 paywallType;
	 softPaywallHeightProvider;
	 deferredHardPaywallHeightProvider;
	 paywallViewControllerWrapper;
	 delegate;
	 internalDelegate;

}

@property (readonly,nonatomic) long long paywallType; 
@property (readonly,nonatomic) NPSoftPaywallHeightProvider * softPaywallHeightProvider; 
@property (readonly,nonatomic) NPDeferredHardPaywallHeightProvider * deferredHardPaywallHeightProvider; 
@property (readonly,nonatomic) UIViewController * paywallViewController; 
@property (assign,__weak,nonatomic) id<NPPaywallDelegate> delegate; 
-(NPDeferredHardPaywallHeightProvider *)deferredHardPaywallHeightProvider;
-(id)init;
-(id<NPPaywallDelegate>)delegate;
-(void)setDelegate:(id<NPPaywallDelegate>)arg1 ;
-(long long)paywallType;
-(NPSoftPaywallHeightProvider *)softPaywallHeightProvider;
-(UIViewController *)paywallViewController;
@end

