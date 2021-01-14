/*
* Generated on Thursday, January 14, 2021 at 2:27:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CTCarrierSpaceUI.framework/CTCarrierSpaceUI
*/

#import <UIKitCore/UIViewController.h>

@class UILabel, UIActivityIndicatorView, NSString;

@interface LoadingIndicatorViewController : UIViewController {

	UILabel* _titleLabel;
	UILabel* _messageLabel;
	UIActivityIndicatorView* _spinnerView;
	NSString* _titleText;
	NSString* _messageText;

}

@property (assign,nonatomic,__weak) UILabel * titleLabel;                //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,nonatomic,__weak) UILabel * messageLabel;              //@synthesize messageLabel=_messageLabel - In the implementation block
@property (__weak) UIActivityIndicatorView * spinnerView;                //@synthesize spinnerView=_spinnerView - In the implementation block
@property (nonatomic,retain) NSString * titleText;                       //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,retain) NSString * messageText;                     //@synthesize messageText=_messageText - In the implementation block
-(void)viewDidAppear:(BOOL)arg1 ;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(id)init;
-(void)setMessageLabel:(UILabel *)arg1 ;
-(NSString *)titleText;
-(void)setSpinnerView:(UIActivityIndicatorView *)arg1 ;
-(UIActivityIndicatorView *)spinnerView;
-(void)setTitleText:(NSString *)arg1 ;
-(UILabel *)messageLabel;
-(void)viewDidLoad;
-(id)initWithTitle:(id)arg1 message:(id)arg2 ;
-(void)setMessageText:(NSString *)arg1 ;
-(NSString *)messageText;
-(void)dealloc;
@end

