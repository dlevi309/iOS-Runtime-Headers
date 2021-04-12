/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProxCardKit.framework/ProxCardKit
*/

#import <ProxCardKit/ProxCardKit-Structs.h>
#import <UIKitCore/UIView.h>

@protocol PRXTextContainer, PRXCardContentViewDelegate;
@class NSArray, NSLayoutConstraint, UIView, PRXLabel, UILayoutGuide, PRXButton, PRXTextView;

@interface PRXCardContentView : UIView {

	NSArray* _titleViewConstraints;
	NSArray* _subtitleLabelConstraints;
	NSArray* _actionButtonConstraints;
	NSArray* _mainContentConstraints;
	NSLayoutConstraint* _titleViewHeightConstraint;
	long long _cardStyle;
	UIView*<PRXTextContainer> _titleView;
	PRXLabel* _subtitleLabel;
	UIView* _activityIndicator;
	UILayoutGuide* _mainContentGuide;
	id<PRXCardContentViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PRXCardContentViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long cardStyle;                                       //@synthesize cardStyle=_cardStyle - In the implementation block
@property (nonatomic,retain) UIView*<PRXTextContainer> titleView;                         //@synthesize titleView=_titleView - In the implementation block
@property (nonatomic,retain) PRXLabel * subtitleLabel;                                    //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) PRXButton * dismissButton; 
@property (nonatomic,copy) NSArray * actionButtons; 
@property (nonatomic,retain) UIView * activityIndicator;                                  //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (nonatomic,readonly) UILayoutGuide * mainContentGuide;                          //@synthesize mainContentGuide=_mainContentGuide - In the implementation block
@property (nonatomic,readonly) PRXTextView * titleTextView; 
@property (nonatomic,readonly) PRXLabel * titleLabel; 
-(PRXLabel *)titleLabel;
-(UIView *)activityIndicator;
-(void)setSubtitleLabel:(PRXLabel *)arg1 ;
-(UIView*<PRXTextContainer>)titleView;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)init;
-(id<PRXCardContentViewDelegate>)delegate;
-(void)setActivityIndicator:(UIView *)arg1 ;
-(void)setTitleView:(UIView*<PRXTextContainer>)arg1 ;
-(void)setDelegate:(id<PRXCardContentViewDelegate>)arg1 ;
-(PRXLabel *)subtitleLabel;
-(PRXTextView *)titleTextView;
-(void)updateConstraints;
-(void)setActionButtons:(NSArray *)arg1 ;
-(NSArray *)actionButtons;
-(void)setDismissButton:(PRXButton *)arg1 ;
-(long long)cardStyle;
-(PRXButton *)dismissButton;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UILayoutGuide *)mainContentGuide;
-(id)initWithCardStyle:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 cardStyle:(long long)arg2 ;
-(void)_invalidateMainContentConstraints;
-(void)updateTitleTextViewExclusionPathsForCardWidth:(double)arg1 ;
@end

