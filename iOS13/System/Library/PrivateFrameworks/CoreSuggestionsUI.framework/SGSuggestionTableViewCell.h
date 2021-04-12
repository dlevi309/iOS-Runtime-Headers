/*
* Generated on Monday, March 1, 2021 at 2:31:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsUI.framework/CoreSuggestionsUI
*/

#import <UIKitCore/UITableViewCell.h>

@protocol NSObject, SGSuggestion;
@class UIImageView, UILabel, UIButton, SGSuggestionAction, NSLayoutConstraint, SGSuggestionTableViewController;

@interface SGSuggestionTableViewCell : UITableViewCell {

	UIImageView* _iconImageView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UIButton* _dismissButton;
	UIButton* _primaryButton;
	SGSuggestionAction* _primaryAction;
	SGSuggestionAction* _dismissAction;
	NSLayoutConstraint* _topMarginConstraint;
	NSLayoutConstraint* _interLabelBaselineDeltaConstraint;
	NSLayoutConstraint* _interTitleAndButtonBaselineConstraint;
	NSLayoutConstraint* _interSubtitleAndButtonBaselineConstraint;
	NSLayoutConstraint* _bottomMarginConstraint;
	id<NSObject> _observerToken;
	long long _currentStyle;
	id<SGSuggestion> _suggestion;
	SGSuggestionTableViewController* _controller;

}

@property (nonatomic,retain) id<SGSuggestion> suggestion;                                      //@synthesize suggestion=_suggestion - In the implementation block
@property (assign,nonatomic,__weak) SGSuggestionTableViewController * controller;              //@synthesize controller=_controller - In the implementation block
+(id)titleFont;
+(double)topMarginConstant;
+(double)interLabelBaselineDeltaConstant;
+(double)bottomMarginConstant;
+(id)buttonTitleFont;
+(id)descriptionFont;
+(double)interLabelAndButtonBaselineDeltaConstant;
+(id)defaultReuseIdentifier;
-(id)init;
-(void)dealloc;
-(void)updateConstraints;
-(id)_backgroundColor;
-(void)setController:(SGSuggestionTableViewController *)arg1 ;
-(SGSuggestionTableViewController *)controller;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id)_titleColor;
-(void)setSuggestion:(id<SGSuggestion>)arg1 ;
-(id<SGSuggestion>)suggestion;
-(void)_dismissButtonTapped:(id)arg1 ;
-(void)_activateConstraint:(id)arg1 ;
-(void)_setLabelAndButtonFonts;
-(id)_setButton:(id)arg1 action:(id)arg2 ;
-(void)_primaryButtonTapped:(id)arg1 ;
-(id)_subtitleColor;
-(void)_updateCurrentAppearance;
@end

