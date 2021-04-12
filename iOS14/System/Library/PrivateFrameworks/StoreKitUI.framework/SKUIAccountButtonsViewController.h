/*
* Generated on Thursday, January 14, 2021 at 2:25:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UINavigationControllerDelegate.h>

@protocol SKUIAccountButtonsDelegate;
@class SKUIAccountButtonsView, SKUIClientContext, SKUILink, NSString;

@interface SKUIAccountButtonsViewController : UIViewController <UINavigationControllerDelegate> {

	SKUIAccountButtonsView* _buttonsView;
	SKUIClientContext* _clientContext;
	id<SKUIAccountButtonsDelegate> _delegate;
	SKUILink* _ecommerceLink;

}

@property (nonatomic,retain) SKUIClientContext * clientContext;                                            //@synthesize clientContext=_clientContext - In the implementation block
@property (assign,nonatomic,__weak) id<SKUIAccountButtonsDelegate> delegate;                               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) SKUILink * ECommerceLink;                                                     //@synthesize ecommerceLink=_ecommerceLink - In the implementation block
@property (assign,getter=isGiftingHidden,nonatomic) BOOL giftingHidden; 
@property (assign,getter=isTermsAndConditionsHidden,nonatomic) BOOL termsAndConditionsHidden; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SKUIAccountButtonsDelegate>)delegate;
-(unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)arg1 ;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
-(void)setDelegate:(id<SKUIAccountButtonsDelegate>)arg1 ;
-(id)_buttonsView;
-(void)_accountStoreChangedNotification:(id)arg1 ;
-(void)loadView;
-(void)_signOut;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)_restrictionsChangedNotification:(id)arg1 ;
-(BOOL)isGiftingHidden;
-(BOOL)isTermsAndConditionsHidden;
-(void)setGiftingHidden:(BOOL)arg1 ;
-(void)setTermsAndConditionsHidden:(BOOL)arg1 ;
-(void)_reloadAccountsButton;
-(void)_reloadRestrictions;
-(void)_sendDidSignIn;
-(void)_viewAppleID;
-(void)_openIForgot;
-(void)_ecommerceLinkAction:(id)arg1 ;
-(void)_giftAction:(id)arg1 ;
-(void)_redeemButtonAction:(id)arg1 ;
-(void)_termsAndConditionsButtonAction:(id)arg1 ;
-(void)_usernameButtonAction:(id)arg1 ;
-(void)_signInButtonAction:(id)arg1 ;
-(void)setECommerceLink:(SKUILink *)arg1 ;
-(SKUILink *)ECommerceLink;
@end

