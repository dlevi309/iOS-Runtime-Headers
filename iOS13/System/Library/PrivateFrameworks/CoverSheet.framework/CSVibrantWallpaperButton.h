/*
* Generated on Monday, March 1, 2021 at 2:33:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <CoverSheet/CoverSheet-Structs.h>
#import <SpringBoardUIServices/SBUIVibrantButton.h>

@protocol CSWallpaperView, CSWallpaperColorProvider, CSWallpaperViewProviding;
@class UIView;

@interface CSVibrantWallpaperButton : SBUIVibrantButton {

	UIView*<CSWallpaperView> _effectView;
	id<CSWallpaperColorProvider> _wallpaperColorProvider;
	id<CSWallpaperViewProviding> _wallpaperViewProvider;

}

@property (assign,nonatomic,__weak) id<CSWallpaperColorProvider> wallpaperColorProvider;              //@synthesize wallpaperColorProvider=_wallpaperColorProvider - In the implementation block
@property (assign,nonatomic,__weak) id<CSWallpaperViewProviding> wallpaperViewProvider;               //@synthesize wallpaperViewProvider=_wallpaperViewProvider - In the implementation block
@property (nonatomic,readonly) UIView*<CSWallpaperView> effectView;                                   //@synthesize effectView=_effectView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(UIView*<CSWallpaperView>)effectView;
-(void)setLegibilitySettings:(id)arg1 ;
-(void)setWallpaperViewProvider:(id<CSWallpaperViewProviding>)arg1 ;
-(void)setWallpaperColorProvider:(id<CSWallpaperColorProvider>)arg1 ;
-(id<CSWallpaperViewProviding>)wallpaperViewProvider;
-(id<CSWallpaperColorProvider>)wallpaperColorProvider;
-(void)_updateVibrancy;
@end

