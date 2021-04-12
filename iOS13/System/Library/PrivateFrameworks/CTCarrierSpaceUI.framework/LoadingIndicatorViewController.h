/*
* Generated on Monday, March 1, 2021 at 2:34:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(UILabel *)titleLabel;
-(void)viewDidLoad;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setTitleText:(NSString *)arg1 ;
-(void)setMessageText:(NSString *)arg1 ;
-(NSString *)messageText;
-(NSString *)titleText;
-(id)initWithTitle:(id)arg1 message:(id)arg2 ;
-(UILabel *)messageLabel;
-(void)setMessageLabel:(UILabel *)arg1 ;
-(UIActivityIndicatorView *)spinnerView;
-(void)setSpinnerView:(UIActivityIndicatorView *)arg1 ;
@end

