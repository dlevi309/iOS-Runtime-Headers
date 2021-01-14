/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBWallpaperEffectViewBase.h>
#import <libobjc.A.dylib/SBApplicationSceneBackgroundView.h>

@class SBWallpaperController, NSString;

@interface SBWallpaperEffectView : SBWallpaperEffectViewBase <SBApplicationSceneBackgroundView>

@property (nonatomic,readonly) SBWallpaperController * wallpaperController; 
@property (assign,getter=isFullscreen,nonatomic) BOOL fullscreen; 
@property (assign,nonatomic) long long wallpaperStyle; 
@property (assign,nonatomic) BOOL needsClassicModeBackground; 
@property (assign,nonatomic) BOOL shouldUseBrightMaterial; 
@property (assign,nonatomic) unsigned long long transformOptions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithWallpaperVariant:(long long)arg1 ;
-(SBWallpaperController *)wallpaperController;
-(id)initWithWallpaperVariant:(long long)arg1 transformOptions:(unsigned long long)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
@end

