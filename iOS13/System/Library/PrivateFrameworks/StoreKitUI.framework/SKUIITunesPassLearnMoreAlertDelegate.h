/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(UIViewController *)presentingViewController;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)show;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(id)initWithRedeemConfiguration:(id)arg1 clientContext:(id)arg2 ;
@end

