/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/SKUIRedeemStepViewController.h>
#import <UIKit/UITextFieldDelegate.h>

@class SKUIRedeemTextField, UIImageView, NSString, SKUIRedeemITunesPassLockup, UIBarButtonItem;

@interface SKUIRedeemInputViewController : SKUIRedeemStepViewController <UITextFieldDelegate> {

	long long _category;
	SKUIRedeemTextField* _field;
	UIImageView* _imageView;
	NSString* _initialCode;
	SKUIRedeemITunesPassLockup* _passbookLockup;
	UIBarButtonItem* _redeemButton;

}

@property (nonatomic,readonly) long long category;                  //@synthesize category=_category - In the implementation block
@property (nonatomic,copy) NSString * initialCode;                  //@synthesize initialCode=_initialCode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(long long)category;
-(void)loadView;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)_cancelAction:(id)arg1 ;
-(id)initWithRedeemCategory:(long long)arg1 ;
-(void)_termsButtonAction:(id)arg1 ;
-(NSString *)initialCode;
-(void)setInitialCode:(NSString *)arg1 ;
-(void)_redeemConfigurationImagesDidLoad:(id)arg1 ;
-(id)_newTextFieldWithClientContext:(id)arg1 ;
-(void)_textFieldTextDidChange:(id)arg1 ;
-(void)_passbookLockupAction:(id)arg1 ;
-(void)_redeemAction:(id)arg1 ;
-(void)_toggleActivityIndicatorBarButtonItem:(BOOL)arg1 ;
@end

