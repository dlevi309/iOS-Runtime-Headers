/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
*/

#import <UIKitCore/UIViewController.h>

@class UIScrollView, UIView, UILabel, UIButton;

@interface FAExplainAppleIDViewController : UIViewController {

	UIScrollView* _scrollView;
	UIView* _contentView;
	UILabel* _titleLabel;
	UILabel* _descriptionLabel;
	UIButton* _goToSettingsButton;
	BOOL _shouldShowInviteeInstructions;

}

@property (assign,nonatomic) BOOL shouldShowInviteeInstructions;              //@synthesize shouldShowInviteeInstructions=_shouldShowInviteeInstructions - In the implementation block
-(void)viewWillLayoutSubviews;
-(void)_updateFonts;
-(void)loadView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(double)_heightForText:(id)arg1 constrainedToWidth:(double)arg2 ;
-(BOOL)shouldShowInviteeInstructions;
-(void)setShouldShowInviteeInstructions:(BOOL)arg1 ;
@end

