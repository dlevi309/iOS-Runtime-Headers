/*
* Generated on Thursday, January 14, 2021 at 2:24:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HKViewController.h>

@class UITextView;

@interface HKOrganDonationMoreAboutPrivacyViewController : HKViewController {

	UITextView* _textView;

}

@property (nonatomic,retain) UITextView * textView;              //@synthesize textView=_textView - In the implementation block
-(UITextView *)textView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setTextView:(UITextView *)arg1 ;
-(void)viewDidLoad;
-(void)_updateForCurrentSizeCategory;
-(void)doneButtonTapped:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
@end

