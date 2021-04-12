/*
* Generated on Thursday, January 14, 2021 at 2:25:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <UIKit/UIAlertViewDelegate.h>

@class SKUIClientContext, UIViewController, SKUIRedeemConfiguration, NSString;

@interface SKUIITunesPassLearnMoreAlertDelegate : NSObject <UIAlertViewDelegate> {

	SKUIClientContext* _clientContext;
	UIViewController* _presentingViewController;
	SKUIRedeemConfiguration* _redeemConfiguration;

}

@property (assign,nonatomic,__weak) UIViewController * presentingViewController;              //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)shouldShowAlertForRedeem:(id)arg1 configuration:(id)arg2 ;
+(void)beginThrottleInterval;
-(void)show;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(UIViewController *)presentingViewController;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(id)initWithRedeemConfiguration:(id)arg1 clientContext:(id)arg2 ;
@end

