/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_addConstraints;
-(void)viewDidLoad;
-(UILabel *)headerLabel;
-(void)setHeaderLabel:(UILabel *)arg1 ;
-(UITextView *)consentTextView;
-(void)setConsentTextView:(UITextView *)arg1 ;
@end

