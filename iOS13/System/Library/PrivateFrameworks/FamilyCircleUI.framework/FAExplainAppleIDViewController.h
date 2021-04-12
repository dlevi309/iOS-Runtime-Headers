/*
* Generated on Monday, March 1, 2021 at 2:34:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)loadView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)_updateFonts;
-(double)_heightForText:(id)arg1 constrainedToWidth:(double)arg2 ;
-(BOOL)shouldShowInviteeInstructions;
-(void)setShouldShowInviteeInstructions:(BOOL)arg1 ;
@end

