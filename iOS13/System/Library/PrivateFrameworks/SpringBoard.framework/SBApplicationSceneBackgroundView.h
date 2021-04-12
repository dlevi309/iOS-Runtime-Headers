/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/SBApplicationSceneBackgroundView.h>

@protocol SBApplicationSceneBackgroundView <NSObject>
@property (assign,nonatomic) long long wallpaperStyle; 
@property (assign,nonatomic) BOOL needsClassicModeBackground; 
@property (assign,nonatomic) BOOL shouldUseBrightMaterial; 
@optional
-(long long)wallpaperStyle;
-(void)setShouldUseBrightMaterial:(BOOL)arg1;
-(void)setWallpaperStyle:(long long)arg1;
-(BOOL)needsClassicModeBackground;
-(void)setNeedsClassicModeBackground:(BOOL)arg1;
-(BOOL)shouldUseBrightMaterial;

@end


@class SBWallpaperEffectView, NSString;

@interface SBApplicationSceneBackgroundView : UIView <SBApplicationSceneBackgroundView> {

	long long _wallpaperStyle;
	SBWallpaperEffectView* _backgroundWallpaperEffectView;
	BOOL _needsClassicModeBackground;
	BOOL _shouldUseBrightMaterial;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long wallpaperStyle;                     //@synthesize wallpaperStyle=_wallpaperStyle - In the implementation block
@property (assign,nonatomic) BOOL needsClassicModeBackground;              //@synthesize needsClassicModeBackground=_needsClassicModeBackground - In the implementation block
@property (assign,nonatomic) BOOL shouldUseBrightMaterial;                 //@synthesize shouldUseBrightMaterial=_shouldUseBrightMaterial - In the implementation block
-(NSString *)description;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)_isTranslucent;
-(long long)wallpaperStyle;
-(void)setShouldUseBrightMaterial:(BOOL)arg1 ;
-(void)setWallpaperStyle:(long long)arg1 ;
-(void)_setupBackground;
-(id)_backgroundWallpaperEffectView;
-(void)_teardownBackgroundWallpaperEffectView;
-(id)_opaqueBackgroundColorOrClearColor;
-(BOOL)needsClassicModeBackground;
-(void)setNeedsClassicModeBackground:(BOOL)arg1 ;
-(BOOL)shouldUseBrightMaterial;
@end

