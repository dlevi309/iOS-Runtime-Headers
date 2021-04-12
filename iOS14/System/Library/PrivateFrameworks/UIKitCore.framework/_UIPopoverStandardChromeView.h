/*
* Generated on Thursday, January 14, 2021 at 2:20:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIPopoverBackgroundView.h>

@class UIView, UIVisualEffectView, UIColor;

@interface _UIPopoverStandardChromeView : UIPopoverBackgroundView {

	UIView* _arrowBackgroundView;
	UIVisualEffectView* _blurView;
	UIView* _maskView;
	UIColor* _popoverBackgroundColor;
	UIColor* _arrowBackgroundColor;
	BOOL _popoverBackgroundColorIsOpaque;
	double _arrowOffset;
	unsigned long long _arrowDirection;
	long long _requestedBackgroundStyle;
	long long _backgroundStyle;
	BOOL _arrowVisible;
	BOOL _wasPinned;
	BOOL useShortMode;
	BOOL _debugMode;
	UIView* viewToMaskWhenContentExtendsOverArrow;
	UIColor* _contentBlendingColor;
	UIView* _arrowView;
	UIView* _leftCapView;
	UIView* _rightCapView;

}

@property (nonatomic,readonly) UIView * arrowView;                                               //@synthesize arrowView=_arrowView - In the implementation block
@property (nonatomic,readonly) UIView * leftCapView;                                             //@synthesize leftCapView=_leftCapView - In the implementation block
@property (nonatomic,readonly) UIView * rightCapView;                                            //@synthesize rightCapView=_rightCapView - In the implementation block
@property (nonatomic,readonly) BOOL hasComponentViews; 
@property (assign,nonatomic) long long backgroundStyle; 
@property (assign,getter=isArrowVisible,nonatomic) BOOL arrowVisible; 
@property (assign,nonatomic) BOOL useShortMode; 
@property (assign,getter=isDebugModeEnabled,nonatomic) BOOL debugModeEnabled;                    //@synthesize debugMode=_debugMode - In the implementation block
@property (nonatomic,copy) UIColor * popoverBackgroundColor; 
@property (nonatomic,copy) UIColor * arrowBackgroundColor; 
@property (nonatomic,readonly) UIColor * contentBlendingColor;                                   //@synthesize contentBlendingColor=_contentBlendingColor - In the implementation block
@property (assign,nonatomic,__weak) UIView * viewToMaskWhenContentExtendsOverArrow; 
+(double)arrowBase;
+(double)arrowHeight;
+(UIEdgeInsets)contentViewInsets;
-(BOOL)isPinned;
-(id)initWithFrame:(CGRect)arg1 ;
-(long long)backgroundStyle;
-(void)setBackgroundStyle:(long long)arg1 animated:(BOOL)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)_updateChrome;
-(void)motionEnded:(long long)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(UIColor *)popoverBackgroundColor;
-(UIEdgeInsets)_shadowInsets;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(id)_shadowPath;
-(void)layoutSubviews;
-(CGSize)_shadowOffset;
-(BOOL)isDebugModeEnabled;
-(CGRect)_contentViewFrame;
-(void)didMoveToWindow;
-(UIView *)arrowView;
-(void)setBackgroundStyle:(long long)arg1 ;
-(double)_shadowOpacity;
-(void)setPopoverBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)arrowBackgroundColor;
-(void)setArrowBackgroundColor:(UIColor *)arg1 ;
-(void)setArrowDirection:(unsigned long long)arg1 ;
-(double)arrowOffset;
-(double)_shadowRadius;
-(UIEdgeInsets)safeAreaInsetsForContentView;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)_loadNecessaryViews;
-(double)minNonPinnedOffset;
-(double)maxNonPinnedOffset;
-(BOOL)isRightArrowPinnedToTop;
-(BOOL)useShortMode;
-(BOOL)isRightArrowPinnedToBottom;
-(BOOL)wouldPinForOffset:(double)arg1 ;
-(void)_resetComponentViews;
-(void)_layoutArrowViewsUpOrDown;
-(void)_layoutArrowViewsLeftOrRight;
-(BOOL)hasComponentViews;
-(void)_layoutArrowViewsNone;
-(void)_updateBackgroundStyle;
-(UIView *)viewToMaskWhenContentExtendsOverArrow;
-(BOOL)_shouldUseEqualContentInsetsOnAllSides;
-(void)_configureEffectView;
-(long long)_resolvedBackgroundStyle;
-(BOOL)isArrowVisible;
-(UIView *)leftCapView;
-(void)_removeEffectView;
-(void)setArrowVisible:(BOOL)arg1 ;
-(void)setArrowVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setUseShortMode:(BOOL)arg1 ;
-(void)setDebugModeEnabled:(BOOL)arg1 ;
-(void)setViewToMaskWhenContentExtendsOverArrow:(UIView *)arg1 ;
-(UIView *)rightCapView;
-(UIColor *)contentBlendingColor;
-(unsigned long long)arrowDirection;
-(void)setArrowOffset:(double)arg1 ;
-(id)backgroundEffect;
-(void)motionBegan:(long long)arg1 withEvent:(id)arg2 ;
-(void)motionCancelled:(long long)arg1 withEvent:(id)arg2 ;
@end

