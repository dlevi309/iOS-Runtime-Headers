/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UIEdgeInsets)safeAreaInsets;
-(UIButton *)button;
-(NSString *)buttonTitle;
-(void)setContainerView:(UIView *)arg1 ;
-(BOOL)isPortrait;
-(void)setAppearance:(long long)arg1 ;
-(UIKBTutorialModalDisplayStyling *)styling;
-(void)setButton:(UIButton *)arg1 ;
-(UIFont *)textBodyFont;
-(void)setMediaView:(UIView *)arg1 ;
-(void)layoutSubviews;
-(void)updateMediaViewTextAndPlacement;
-(UIView *)containerView;
-(UIVisualEffectView *)backgroundBlurView;
-(NSArray *)mediaContents;
-(void)restartPagingAnimation;
-(id)initWithKeyboardAppearance:(long long)arg1 ;
-(id)constructMediaView;
-(void)tapInsideButton:(id)arg1 ;
-(void)configBackgroundBlur;
-(void)configContainerView;
-(void)containerForFullScreenView;
-(void)containerForAlertPresentation;
-(void)containerForKeyboardView;
-(NSString *)largeTitle;
-(NSArray *)adjustableConstraints;
-(void)setWidthAdjustmentConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)widthAdjustmentConstraint;
-(void)setContainerViewTopConstraits:(NSLayoutConstraint *)arg1 ;
-(long long)textBodyMaxLines;
-(NSLayoutConstraint *)containerViewTopConstraits;
-(void)setAdjustableConstraints:(NSArray *)arg1 ;
-(UIFont *)largeTitleFont;
-(double)containerTopPadding;
-(double)containerBottomPadding;
-(CGSize)sizeForTutorialPageView;
-(void)setBackgroundBlurView:(UIVisualEffectView *)arg1 ;
-(double)mediaLayoutWidthAdjustment;
-(void)extraButtonTapAction;
-(NSArray *)textBodyDescriptions;
-(void)setStyling:(UIKBTutorialModalDisplayStyling *)arg1 ;
-(NSArray *)textTitleDescriptions;
-(double)pagingInterval;
-(long long)appearance;
-(UIFont *)textTitleFont;
-(UIView *)mediaView;
-(BOOL)presentsFullScreen;
@end

