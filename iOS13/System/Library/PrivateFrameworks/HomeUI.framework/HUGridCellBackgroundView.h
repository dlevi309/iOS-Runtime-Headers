/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>

@class HUGridCellBackgroundDisplayOptions, HFWallpaperSlice, UIVisualEffectView, UIView;

@interface HUGridCellBackgroundView : UIView {

	BOOL _pressed;
	unsigned long long _backgroundState;
	HUGridCellBackgroundDisplayOptions* _displayOptions;
	HFWallpaperSlice* _blurredWallpaperSlice;
	HFWallpaperSlice* _darkModeBlurredWallpaperSlice;
	double _cornerRadius;
	UIVisualEffectView* _effectView;
	UIView* _ccMaterialView;
	CGRect _normalizedWallpaperRect;

}

@property (nonatomic,retain) UIVisualEffectView * effectView;                                  //@synthesize effectView=_effectView - In the implementation block
@property (nonatomic,retain) UIView * ccMaterialView;                                          //@synthesize ccMaterialView=_ccMaterialView - In the implementation block
@property (assign,nonatomic) unsigned long long backgroundState;                               //@synthesize backgroundState=_backgroundState - In the implementation block
@property (assign,getter=isPressed,nonatomic) BOOL pressed;                                    //@synthesize pressed=_pressed - In the implementation block
@property (nonatomic,retain) HUGridCellBackgroundDisplayOptions * displayOptions;              //@synthesize displayOptions=_displayOptions - In the implementation block
@property (assign,nonatomic) CGRect normalizedWallpaperRect;                                   //@synthesize normalizedWallpaperRect=_normalizedWallpaperRect - In the implementation block
@property (nonatomic,retain) HFWallpaperSlice * blurredWallpaperSlice;                         //@synthesize blurredWallpaperSlice=_blurredWallpaperSlice - In the implementation block
@property (nonatomic,retain) HFWallpaperSlice * darkModeBlurredWallpaperSlice;                 //@synthesize darkModeBlurredWallpaperSlice=_darkModeBlurredWallpaperSlice - In the implementation block
@property (assign,nonatomic) double cornerRadius;                                              //@synthesize cornerRadius=_cornerRadius - In the implementation block
+(id)_sharedBlurEffect;
-(void)setCornerRadius:(double)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)isPressed;
-(void)setPressed:(BOOL)arg1 ;
-(void)_updateBackgroundColor;
-(UIVisualEffectView *)effectView;
-(double)cornerRadius;
-(id)_normalBackgroundColor;
-(void)setEffectView:(UIVisualEffectView *)arg1 ;
-(void)_updateCornerRadius;
-(void)_updateDisplay;
-(unsigned long long)backgroundState;
-(void)setDisplayOptions:(HUGridCellBackgroundDisplayOptions *)arg1 ;
-(CGRect)normalizedWallpaperRect;
-(HFWallpaperSlice *)blurredWallpaperSlice;
-(UIView *)ccMaterialView;
-(HUGridCellBackgroundDisplayOptions *)displayOptions;
-(void)setCcMaterialView:(UIView *)arg1 ;
-(BOOL)_shouldUsePrecomputedWallpaperContents;
-(void)_updateWallpaperContentsRect;
-(HFWallpaperSlice *)darkModeBlurredWallpaperSlice;
-(void)_updateWallpaperContentsScale;
-(BOOL)_shouldUseCCMaterialView;
-(void)_createCCMaterialViewIfNecessary;
-(BOOL)_shouldUseVisualEffectStyle;
-(void)_createEffectViewIfNecessary;
-(BOOL)_isUsingControlCenterDisplayStyle;
-(void)setBlurredWallpaperSlice:(HFWallpaperSlice *)arg1 ;
-(void)setDarkModeBlurredWallpaperSlice:(HFWallpaperSlice *)arg1 ;
-(void)setBackgroundState:(unsigned long long)arg1 ;
-(void)setNormalizedWallpaperRect:(CGRect)arg1 ;
@end

