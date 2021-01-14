/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol HUBackgroundEffectViewGrouping;
@class HUGridCellBackgroundDisplayOptions, UIColor, UIBlurEffect, HFWallpaperSlice, UIVisualEffectView, UIView;

@interface HUGridCellBackgroundView : UIView {

	BOOL _pressed;
	unsigned long long _backgroundState;
	HUGridCellBackgroundDisplayOptions* _displayOptions;
	UIColor* _backgroundTintColor;
	UIBlurEffect* _overrideBackgroundEffect;
	HFWallpaperSlice* _blurredWallpaperSlice;
	HFWallpaperSlice* _darkModeBlurredWallpaperSlice;
	id<HUBackgroundEffectViewGrouping> _backgroundEffectViewGrouper;
	double _cornerRadius;
	UIVisualEffectView* _effectView;
	UIView* _ccOnMaterialView;
	UIView* _ccOffMaterialView;
	UIView* _ccHighlightMaterialView;
	CGRect _normalizedWallpaperRect;

}

@property (nonatomic,retain) UIVisualEffectView * effectView;                                                    //@synthesize effectView=_effectView - In the implementation block
@property (nonatomic,retain) UIView * ccOnMaterialView;                                                          //@synthesize ccOnMaterialView=_ccOnMaterialView - In the implementation block
@property (nonatomic,retain) UIView * ccOffMaterialView;                                                         //@synthesize ccOffMaterialView=_ccOffMaterialView - In the implementation block
@property (nonatomic,retain) UIView * ccHighlightMaterialView;                                                   //@synthesize ccHighlightMaterialView=_ccHighlightMaterialView - In the implementation block
@property (assign,nonatomic) unsigned long long backgroundState;                                                 //@synthesize backgroundState=_backgroundState - In the implementation block
@property (assign,getter=isPressed,nonatomic) BOOL pressed;                                                      //@synthesize pressed=_pressed - In the implementation block
@property (nonatomic,retain) HUGridCellBackgroundDisplayOptions * displayOptions;                                //@synthesize displayOptions=_displayOptions - In the implementation block
@property (nonatomic,retain) UIColor * backgroundTintColor;                                                      //@synthesize backgroundTintColor=_backgroundTintColor - In the implementation block
@property (nonatomic,retain) UIBlurEffect * overrideBackgroundEffect;                                            //@synthesize overrideBackgroundEffect=_overrideBackgroundEffect - In the implementation block
@property (assign,nonatomic) CGRect normalizedWallpaperRect;                                                     //@synthesize normalizedWallpaperRect=_normalizedWallpaperRect - In the implementation block
@property (nonatomic,retain) HFWallpaperSlice * blurredWallpaperSlice;                                           //@synthesize blurredWallpaperSlice=_blurredWallpaperSlice - In the implementation block
@property (nonatomic,retain) HFWallpaperSlice * darkModeBlurredWallpaperSlice;                                   //@synthesize darkModeBlurredWallpaperSlice=_darkModeBlurredWallpaperSlice - In the implementation block
@property (assign,nonatomic,__weak) id<HUBackgroundEffectViewGrouping> backgroundEffectViewGrouper;              //@synthesize backgroundEffectViewGrouper=_backgroundEffectViewGrouper - In the implementation block
@property (assign,nonatomic) double cornerRadius;                                                                //@synthesize cornerRadius=_cornerRadius - In the implementation block
+(id)_sharedBlurEffect;
-(void)_updateBackgroundColor;
-(UIVisualEffectView *)effectView;
-(void)setPressed:(BOOL)arg1 ;
-(void)_updateCornerRadius;
-(HFWallpaperSlice *)darkModeBlurredWallpaperSlice;
-(void)_updateHighlightView;
-(HFWallpaperSlice *)blurredWallpaperSlice;
-(void)setBlurredWallpaperSlice:(HFWallpaperSlice *)arg1 ;
-(double)cornerRadius;
-(void)_updateDisplay;
-(void)setEffectView:(UIVisualEffectView *)arg1 ;
-(BOOL)isPressed;
-(void)setDarkModeBlurredWallpaperSlice:(HFWallpaperSlice *)arg1 ;
-(id)_normalBackgroundColor;
-(void)setCornerRadius:(double)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)dealloc;
-(void)setOverrideBackgroundEffect:(UIBlurEffect *)arg1 ;
-(unsigned long long)backgroundState;
-(void)setDisplayOptions:(HUGridCellBackgroundDisplayOptions *)arg1 ;
-(UIView *)ccOffMaterialView;
-(HUGridCellBackgroundDisplayOptions *)displayOptions;
-(void)setCcOffMaterialView:(UIView *)arg1 ;
-(UIView *)ccOnMaterialView;
-(void)setCcOnMaterialView:(UIView *)arg1 ;
-(UIView *)ccHighlightMaterialView;
-(void)setCcHighlightMaterialView:(UIView *)arg1 ;
-(id<HUBackgroundEffectViewGrouping>)backgroundEffectViewGrouper;
-(BOOL)_shouldUsePrecomputedWallpaperContents;
-(void)_updateWallpaperContentsRect;
-(void)_updateWallpaperContentsScale;
-(BOOL)_shouldUseCCMaterialView;
-(void)_createOffCCMaterialViewIfNecessary;
-(void)_createOnCCMaterialViewIfNecessary;
-(void)_createHighlightCCMateriaViewIfNecessary;
-(BOOL)_shouldUseVisualEffectStyle;
-(void)_createEffectViewIfNecessary;
-(UIBlurEffect *)overrideBackgroundEffect;
-(CGRect)normalizedWallpaperRect;
-(UIColor *)backgroundTintColor;
-(void)setBackgroundTintColor:(UIColor *)arg1 ;
-(void)setBackgroundEffectViewGrouper:(id<HUBackgroundEffectViewGrouping>)arg1 ;
-(void)setBackgroundState:(unsigned long long)arg1 ;
-(void)setNormalizedWallpaperRect:(CGRect)arg1 ;
@end

