/*
* Generated on Thursday, January 14, 2021 at 2:25:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)category;
-(void)_textFieldTextDidChange:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)loadView;
-(void)_cancelAction:(id)arg1 ;
-(void)dealloc;
-(id)initWithRedeemCategory:(long long)arg1 ;
-(void)_termsButtonAction:(id)arg1 ;
-(NSString *)initialCode;
-(void)setInitialCode:(NSString *)arg1 ;
-(void)_redeemConfigurationImagesDidLoad:(id)arg1 ;
-(id)_newTextFieldWithClientContext:(id)arg1 ;
-(void)_passbookLockupAction:(id)arg1 ;
-(void)_redeemAction:(id)arg1 ;
-(void)_toggleActivityIndicatorBarButtonItem:(BOOL)arg1 ;
@end

