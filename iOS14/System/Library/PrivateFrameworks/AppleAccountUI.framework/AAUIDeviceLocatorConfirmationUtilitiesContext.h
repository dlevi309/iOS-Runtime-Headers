/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
*/


@class ACAccount, NSString, NSDictionary, UIViewController;

@interface AAUIDeviceLocatorConfirmationUtilitiesContext : NSObject {

	ACAccount* _account;
	NSString* _message;
	NSString* _buttonTitle;
	NSDictionary* _customRequestHeaders;
	UIViewController* _presentingViewController;

}

@property (nonatomic,retain) ACAccount * account;                                      //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) NSString * message;                                       //@synthesize message=_message - In the implementation block
@property (nonatomic,retain) NSString * buttonTitle;                                   //@synthesize buttonTitle=_buttonTitle - In the implementation block
@property (nonatomic,retain) NSDictionary * customRequestHeaders;                      //@synthesize customRequestHeaders=_customRequestHeaders - In the implementation block
@property (nonatomic,retain) UIViewController * presentingViewController;              //@synthesize presentingViewController=_presentingViewController - In the implementation block
-(void)setMessage:(NSString *)arg1 ;
-(ACAccount *)account;
-(NSString *)buttonTitle;
-(NSString *)message;
-(void)setAccount:(ACAccount *)arg1 ;
-(UIViewController *)presentingViewController;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(void)setButtonTitle:(NSString *)arg1 ;
-(NSDictionary *)customRequestHeaders;
-(void)setCustomRequestHeaders:(NSDictionary *)arg1 ;
@end

