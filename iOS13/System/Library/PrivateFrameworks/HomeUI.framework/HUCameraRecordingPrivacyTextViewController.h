/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <UIKitCore/UIViewController.h>

@class UILabel, UITextView;

@interface HUCameraRecordingPrivacyTextViewController : UIViewController {

	UILabel* _headerLabel;
	UITextView* _consentTextView;

}

@property (nonatomic,retain) UILabel * headerLabel;                     //@synthesize headerLabel=_headerLabel - In the implementation block
@property (nonatomic,retain) UITextView * consentTextView;              //@synthesize consentTextView=_consentTextView - In the implementation block
-(void)viewDidLoad;
-(void)setHeaderLabel:(UILabel *)arg1 ;
-(UILabel *)headerLabel;
-(void)_addConstraints;
-(UITextView *)consentTextView;
-(void)setConsentTextView:(UITextView *)arg1 ;
@end

