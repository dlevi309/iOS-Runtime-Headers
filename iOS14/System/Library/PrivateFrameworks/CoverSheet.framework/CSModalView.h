/*
* Generated on Thursday, January 14, 2021 at 2:26:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <CoverSheet/CoverSheet-Structs.h>
#import <CoverSheet/CSCoverSheetViewBase.h>
#import <libobjc.A.dylib/SBLockScreenModalView.h>

@protocol CSModalViewDelegate;
@class _UILegibilitySettings, NSString, UIColor, UIImage, UILabel, UIImageView, UIView, CSModalButton, UIButton, UILayoutGuide, NSLayoutConstraint, CSStatusTextViewController;

@interface CSModalView : CSCoverSheetViewBase <SBLockScreenModalView> {

	id<CSModalViewDelegate> _delegate;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UILabel* _secondarySubtitleLabel;
	UIImageView* _imageView;
	UIView* _detailView;
	CSModalButton* _primaryActionButton;
	UIButton* _secondaryActionButton;
	UIView* _centralGroupView;
	UILayoutGuide* _dateViewLayoutGuide;
	NSLayoutConstraint* _dateViewVerticalConstraint;
	NSLayoutConstraint* _centralGroupTopConstraint;
	NSLayoutConstraint* _centralGroupBottomConstraint;
	NSLayoutConstraint* _titleLabelBaselineConstraint;
	NSString* _overrideFooterText;
	CSStatusTextViewController* _statusTextViewController;
	_UILegibilitySettings* _legibilitySettings;
	BOOL _showsStatusText;
	BOOL _needsTitleConstraints;
	BOOL _needsSubTitleConstraints;
	BOOL _needsSecondarySubTitleConstraints;
	BOOL _needsPrimaryActionConstraints;
	BOOL _needsSecondaryActionConstraints;
	BOOL _needsImageConstraints;
	BOOL _needsDetailViewConstraints;
	BOOL _wantsEnhancedSecondaryActionButton;
	BOOL _showsDateView;

}

@property (setter=_setTitleLabel:,getter=_titleLabel,nonatomic,retain) UILabel * titleLabel;                                                  //@synthesize titleLabel=_titleLabel - In the implementation block
@property (setter=_setSubtitleLabel:,getter=_subtitleLabel,nonatomic,retain) UILabel * subtitleLabel;                                         //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (setter=_setSecondarySubtitleLabel:,getter=_secondarySubtitleLabel,nonatomic,retain) UILabel * secondarySubtitleLabel;              //@synthesize secondarySubtitleLabel=_secondarySubtitleLabel - In the implementation block
@property (setter=_setSecondaryActionButton:,getter=_secondaryActionButton,nonatomic,retain) UIButton * secondaryActionButton;                //@synthesize secondaryActionButton=_secondaryActionButton - In the implementation block
@property (setter=_setPrimaryActionButton:,getter=_primaryActionButton,nonatomic,retain) CSModalButton * primaryActionButton;                 //@synthesize primaryActionButton=_primaryActionButton - In the implementation block
@property (setter=_setImageView:,getter=_imageView,nonatomic,retain) UIImageView * imageView;                                                 //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic,__weak) id<CSModalViewDelegate> delegate;                                                                         //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIView * detailView;                                                                                             //@synthesize detailView=_detailView - In the implementation block
@property (assign,nonatomic) BOOL wantsEnhancedSecondaryActionButton;                                                                         //@synthesize wantsEnhancedSecondaryActionButton=_wantsEnhancedSecondaryActionButton - In the implementation block
@property (assign,nonatomic) BOOL showsDateView;                                                                                              //@synthesize showsDateView=_showsDateView - In the implementation block
@property (assign,nonatomic) BOOL showsStatusText;                                                                                            //@synthesize showsStatusText=_showsStatusText - In the implementation block
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;                                                                      //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (nonatomic,copy) NSString * titleText; 
@property (nonatomic,copy) UIColor * titleTextColor; 
@property (nonatomic,copy) NSString * subtitleText; 
@property (nonatomic,copy) NSString * secondarySubtitleText; 
@property (nonatomic,copy) NSString * primaryActionButtonText; 
@property (nonatomic,retain) UIColor * primaryActionButtonBackgroundColor; 
@property (nonatomic,copy) NSString * secondaryActionButtonText; 
@property (nonatomic,copy) UIColor * secondaryActionButtonTextColor; 
@property (nonatomic,copy) NSString * footerText; 
@property (nonatomic,retain) UIImage * image; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_imageView;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFooterText:(NSString *)arg1 ;
-(id<CSModalViewDelegate>)delegate;
-(void)_buttonTapped:(id)arg1 ;
-(id)_titleFont;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(NSString *)titleText;
-(UIView *)detailView;
-(UIImage *)image;
-(void)setTitleText:(NSString *)arg1 ;
-(id)_subtitleLabel;
-(void)setSubtitleText:(NSString *)arg1 ;
-(NSString *)subtitleText;
-(void)setDelegate:(id<CSModalViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)updateConstraints;
-(void)_setSubtitleLabel:(id)arg1 ;
-(_UILegibilitySettings *)legibilitySettings;
-(void)_setImageView:(id)arg1 ;
-(NSString *)footerText;
-(id)_secondaryActionButton;
-(void)setSecondarySubtitleText:(NSString *)arg1 ;
-(NSString *)secondarySubtitleText;
-(id)_titleLabel;
-(UIColor *)titleTextColor;
-(void)_setTitleLabel:(id)arg1 ;
-(void)setDetailView:(UIView *)arg1 ;
-(void)setTitleTextColor:(UIColor *)arg1 ;
-(id)_subtitleFont;
-(BOOL)showsDateView;
-(void)setShowsDateView:(BOOL)arg1 ;
-(void)setShowsStatusText:(BOOL)arg1 ;
-(void)_setSecondaryActionButton:(id)arg1 ;
-(void)_createAppropriateSecondaryActionButtonIfNecessary;
-(id)_labelWithNumberOfLines:(unsigned long long)arg1 font:(id)arg2 ;
-(id)_secondarySubtitleLabel;
-(void)_setSecondarySubtitleLabel:(id)arg1 ;
-(void)_createPrimaryActionButtonIfNecessary;
-(void)_setPrimaryActionButton:(id)arg1 ;
-(BOOL)_replaceView:(id)arg1 withNewView:(id)arg2 inParentView:(id)arg3 ;
-(CGRect)_dateTimeFrame;
-(void)_positionBottomElementWithLayoutAnchor:(id)arg1 lessThanOrEqual:(BOOL)arg2 ;
-(double)_bottomBaselineOffset;
-(id)_preferredContentSizeCategoryCappedToSize:(id)arg1 ;
-(id)_fontWithTextStyle:(id)arg1 cappedToSize:(id)arg2 ;
-(id)_primaryActionFont;
-(void)_createEnhancedSecondaryActionButtonIfNecessary;
-(void)_createSecondaryActionButtonIfNecessary;
-(id)_secondaryActionFont;
-(double)_timeLabelBaselineY;
-(double)_timeToSubtitleLabelBaselineDifferenceY;
-(double)_modalViewBottomBaselineOffsetPortrait;
-(NSString *)primaryActionButtonText;
-(void)setPrimaryActionButtonText:(NSString *)arg1 ;
-(UIColor *)primaryActionButtonBackgroundColor;
-(void)setPrimaryActionButtonBackgroundColor:(UIColor *)arg1 ;
-(NSString *)secondaryActionButtonText;
-(void)setSecondaryActionButtonText:(NSString *)arg1 ;
-(UIColor *)secondaryActionButtonTextColor;
-(void)setSecondaryActionButtonTextColor:(UIColor *)arg1 ;
-(void)setWantsEnhancedSecondaryActionButton:(BOOL)arg1 ;
-(BOOL)showsStatusText;
-(id)_primaryActionButton;
-(BOOL)wantsEnhancedSecondaryActionButton;
@end

