/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/SBApplicationSceneBackgroundView.h>

@class SBWallpaperEffectView, NSString;

@interface SBApplicationSceneBackgroundView : UIView <SBApplicationSceneBackgroundView> {

	long long _wallpaperStyle;
	SBWallpaperEffectView* _backgroundWallpaperEffectView;
	BOOL _needsClassicModeBackground;
	BOOL _fullscreen;
	BOOL _shouldUseBrightMaterial;
	unsigned long long _transformOptions;

}

@property (assign,getter=isFullscreen,nonatomic) BOOL fullscreen;              //@synthesize fullscreen=_fullscreen - In the implementation block
@property (assign,nonatomic) long long wallpaperStyle;                         //@synthesize wallpaperStyle=_wallpaperStyle - In the implementation block
@property (assign,nonatomic) BOOL needsClassicModeBackground;                  //@synthesize needsClassicModeBackground=_needsClassicModeBackground - In the implementation block
@property (assign,nonatomic) BOOL shouldUseBrightMaterial;                     //@synthesize shouldUseBrightMaterial=_shouldUseBrightMaterial - In the implementation block
@property (assign,nonatomic) unsigned long long transformOptions;              //@synthesize transformOptions=_transformOptions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isFullscreen;
-(long long)wallpaperStyle;
-(void)setFullscreen:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)needsClassicModeBackground;
-(unsigned long long)transformOptions;
-(void)setWallpaperStyle:(long long)arg1 ;
-(void)setTransformOptions:(unsigned long long)arg1 ;
-(NSString *)description;
-(void)setShouldUseBrightMaterial:(BOOL)arg1 ;
-(void)_setupBackground;
-(BOOL)shouldUseBrightMaterial;
-(void)setNeedsClassicModeBackground:(BOOL)arg1 ;
@end

