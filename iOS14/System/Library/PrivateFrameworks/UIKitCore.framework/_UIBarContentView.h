/*
* Generated on Thursday, January 14, 2021 at 2:20:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKitCore/_UIButtonBarAppearanceDelegate.h>

@class _UIBarButtonItemAppearanceStorage, UIColor, UIImage, NSString;

@interface _UIBarContentView : UIView <_UIButtonBarAppearanceDelegate> {

	BOOL _barIsBlack;
	BOOL _centerTextButtons;
	Class _appearanceGuideClass;
	_UIBarButtonItemAppearanceStorage* _appearanceStorage;
	UIImage* _backIndicatorMaskImage;

}

@property (nonatomic,readonly) _UIBarButtonItemAppearanceStorage * appearanceStorage;                   //@synthesize appearanceStorage=_appearanceStorage - In the implementation block
@property (nonatomic,readonly) long long barType; 
@property (nonatomic,readonly) BOOL compactMetrics; 
@property (assign,nonatomic) BOOL barIsBlack;                                                           //@synthesize barIsBlack=_barIsBlack - In the implementation block
@property (assign,nonatomic) BOOL centerTextButtons;                                                    //@synthesize centerTextButtons=_centerTextButtons - In the implementation block
@property (nonatomic,retain) UIImage * backIndicatorImage; 
@property (nonatomic,retain) UIImage * backIndicatorMaskImage;                                          //@synthesize backIndicatorMaskImage=_backIndicatorMaskImage - In the implementation block
@property (setter=_setAppearanceGuideClass:,nonatomic,retain) Class _appearanceGuideClass;              //@synthesize appearanceGuideClass=_appearanceGuideClass - In the implementation block
@property (nonatomic,readonly) BOOL isRTL; 
@property (nonatomic,readonly) UIColor * tintColor; 
@property (nonatomic,readonly) double defaultEdgeSpacing; 
@property (nonatomic,readonly) double defaultTextPadding; 
@property (nonatomic,readonly) double backButtonMargin; 
@property (nonatomic,readonly) double backButtonMaximumWidth; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CGRect bounds; 
-(void)_appearanceChanged;
-(unsigned long long)_edgesPropagatingSafeAreaInsetsToDescendants;
-(void)setBarIsBlack:(BOOL)arg1 ;
-(void)_setBackButtonTitlePositionAdjustment:(UIOffset)arg1 forBarMetrics:(long long)arg2 ;
-(BOOL)barIsBlack;
-(void)_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3 ;
-(void)_setBackButtonBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2 ;
-(void)setBackIndicatorMaskImage:(UIImage *)arg1 ;
-(void)_UIAppearance_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3 ;
-(void)_setAppearanceGuideClass:(Class)arg1 ;
-(void)setBackIndicatorImage:(UIImage *)arg1 ;
-(void)_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 style:(long long)arg3 barMetrics:(long long)arg4 ;
-(void)_UIAppearance_setTintColor:(id)arg1 ;
-(void)_UIAppearance_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 style:(long long)arg3 barMetrics:(long long)arg4 ;
-(void)_UIAppearance_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)_setBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2 ;
-(void)_UIAppearance_setBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2 ;
-(void)setCenterTextButtons:(BOOL)arg1 ;
-(double)backButtonMargin;
-(void)_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)_setTintColor:(id)arg1 ;
-(void)_UIAppearance_setTitlePositionAdjustment:(UIOffset)arg1 forBarMetrics:(long long)arg2 ;
-(void)_UIAppearance_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3 ;
-(void)_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3 ;
-(id)_titleTextAttributesForState:(unsigned long long)arg1 ;
-(void)_setTitlePositionAdjustment:(UIOffset)arg1 forBarMetrics:(long long)arg2 ;
-(Class)_appearanceGuideClass;
-(void)_UIAppearance_setBackButtonTitlePositionAdjustment:(UIOffset)arg1 forBarMetrics:(long long)arg2 ;
-(void)_UIAppearance_setBackButtonBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)isRTL;
-(double)defaultEdgeSpacing;
-(UIImage *)backIndicatorMaskImage;
-(unsigned long long)edgesPaddingBarButtonItem:(id)arg1 ;
-(UIImage *)backIndicatorImage;
-(BOOL)centerTextButtons;
-(double)backButtonMaximumWidth;
-(double)absorptionForItem:(id)arg1 ;
-(double)defaultTextPadding;
-(_UIBarButtonItemAppearanceStorage *)appearanceStorage;
-(long long)barType;
-(BOOL)compactMetrics;
@end

