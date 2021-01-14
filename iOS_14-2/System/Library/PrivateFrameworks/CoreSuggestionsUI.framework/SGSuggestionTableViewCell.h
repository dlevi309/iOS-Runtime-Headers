/*
* Generated on Thursday, January 14, 2021 at 2:27:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)defaultReuseIdentifier;
+(double)topMarginConstant;
+(double)interLabelBaselineDeltaConstant;
+(double)bottomMarginConstant;
+(id)descriptionFont;
+(id)buttonTitleFont;
+(double)interLabelAndButtonBaselineDeltaConstant;
-(id)init;
-(id<SGSuggestion>)suggestion;
-(void)setController:(SGSuggestionTableViewController *)arg1 ;
-(id)_subtitleColor;
-(void)updateConstraints;
-(void)setSuggestion:(id<SGSuggestion>)arg1 ;
-(id)_backgroundColor;
-(SGSuggestionTableViewController *)controller;
-(id)_titleColor;
-(void)_dismissButtonTapped:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)dealloc;
-(void)_activateConstraint:(id)arg1 ;
-(void)_setLabelAndButtonFonts;
-(id)_setButton:(id)arg1 action:(id)arg2 ;
-(void)_primaryButtonTapped:(id)arg1 ;
-(void)_updateCurrentAppearance;
@end

