/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, UIButton, UIKBTutorialModalDisplayStyling, UIVisualEffectView, NSLayoutConstraint, NSArray, NSString, UIFont;

@interface UIKBTutorialModalDisplay : UIView {

	long long _appearance;
	UIView* _containerView;
	UIView* _mediaView;
	UIButton* _button;
	UIKBTutorialModalDisplayStyling* _styling;
	UIVisualEffectView* _backgroundBlurView;
	NSLayoutConstraint* _containerViewTopConstraits;
	NSArray* _adjustableConstraints;
	NSLayoutConstraint* _widthAdjustmentConstraint;

}

@property (nonatomic,retain) UIKBTutorialModalDisplayStyling * styling;                    //@synthesize styling=_styling - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * backgroundBlurView;                      //@synthesize backgroundBlurView=_backgroundBlurView - In the implementation block
@property (nonatomic,retain) UIView * containerView;                                       //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * containerViewTopConstraits;              //@synthesize containerViewTopConstraits=_containerViewTopConstraits - In the implementation block
@property (nonatomic,retain) NSArray * adjustableConstraints;                              //@synthesize adjustableConstraints=_adjustableConstraints - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * widthAdjustmentConstraint;               //@synthesize widthAdjustmentConstraint=_widthAdjustmentConstraint - In the implementation block
@property (nonatomic,retain) UIView * mediaView;                                           //@synthesize mediaView=_mediaView - In the implementation block
@property (nonatomic,retain) UIButton * button;                                            //@synthesize button=_button - In the implementation block
@property (assign,nonatomic) long long appearance;                                         //@synthesize appearance=_appearance - In the implementation block
@property (nonatomic,readonly) NSString * buttonTitle; 
@property (nonatomic,readonly) NSArray * textTitleDescriptions; 
@property (nonatomic,readonly) UIFont * textTitleFont; 
@property (nonatomic,readonly) NSArray * textBodyDescriptions; 
@property (nonatomic,readonly) UIFont * textBodyFont; 
@property (nonatomic,readonly) NSString * largeTitle; 
@property (nonatomic,readonly) UIFont * largeTitleFont; 
@property (nonatomic,readonly) NSArray * mediaContents; 
@property (nonatomic,readonly) double pagingInterval; 
@property (nonatomic,readonly) double mediaLayoutWidthAdjustment; 
@property (nonatomic,readonly) long long textBodyMaxLines; 
@property (nonatomic,readonly) BOOL presentsFullScreen; 
-(BOOL)isPortrait;
-(id)initWithKeyboardAppearance:(long long)arg1 ;
-(UIButton *)button;
-(UIEdgeInsets)safeAreaInsets;
-(long long)appearance;
-(UIFont *)textBodyFont;
-(NSString *)buttonTitle;
-(void)extraButtonTapAction;
-(void)setAppearance:(long long)arg1 ;
-(void)updateMediaViewTextAndPlacement;
-(NSArray *)mediaContents;
-(NSArray *)textTitleDescriptions;
-(NSArray *)textBodyDescriptions;
-(double)mediaLayoutWidthAdjustment;
-(long long)textBodyMaxLines;
-(UIView *)containerView;
-(void)setContainerView:(UIView *)arg1 ;
-(void)layoutSubviews;
-(double)pagingInterval;
-(BOOL)presentsFullScreen;
-(NSString *)largeTitle;
-(void)restartPagingAnimation;
-(id)constructMediaView;
-(void)tapInsideButton:(id)arg1 ;
-(void)configBackgroundBlur;
-(void)configContainerView;
-(UIVisualEffectView *)backgroundBlurView;
-(void)containerForFullScreenView;
-(void)containerForAlertPresentation;
-(void)containerForKeyboardView;
-(NSArray *)adjustableConstraints;
-(void)setWidthAdjustmentConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)widthAdjustmentConstraint;
-(void)setContainerViewTopConstraits:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)containerViewTopConstraits;
-(UIView *)mediaView;
-(void)setAdjustableConstraints:(NSArray *)arg1 ;
-(UIFont *)largeTitleFont;
-(UIKBTutorialModalDisplayStyling *)styling;
-(UIFont *)textTitleFont;
-(double)containerTopPadding;
-(double)containerBottomPadding;
-(CGSize)sizeForTutorialPageView;
-(void)setMediaView:(UIView *)arg1 ;
-(void)setButton:(UIButton *)arg1 ;
-(void)setStyling:(UIKBTutorialModalDisplayStyling *)arg1 ;
-(void)setBackgroundBlurView:(UIVisualEffectView *)arg1 ;
@end

