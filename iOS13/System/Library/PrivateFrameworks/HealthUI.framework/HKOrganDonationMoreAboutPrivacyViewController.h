/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HKViewController.h>

@class UITextView;

@interface HKOrganDonationMoreAboutPrivacyViewController : HKViewController {

	UITextView* _textView;

}

@property (nonatomic,retain) UITextView * textView;              //@synthesize textView=_textView - In the implementation block
-(UITextView *)textView;
-(void)setTextView:(UITextView *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)_updateForCurrentSizeCategory;
-(void)doneButtonTapped:(id)arg1 ;
@end

