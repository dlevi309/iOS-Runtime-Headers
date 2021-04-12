/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoardUI/SBUIChevronView.h>
#import <libobjc.A.dylib/SBUILegibility.h>

@protocol CSWallpaperColorProvider;
@class _UILegibilitySettings, SBWallpaperEffectView, NSString;

@interface SBDashBoardVibrantWallpaperChevronView : SBUIChevronView <SBUILegibility> {

	double _legibilityStrength;
	_UILegibilitySettings* _legibilitySettings;
	SBWallpaperEffectView* _effectView;
	id<CSWallpaperColorProvider> _wallpaperColorProvider;

}

@property (assign,nonatomic,__weak) id<CSWallpaperColorProvider> wallpaperColorProvider;              //@synthesize wallpaperColorProvider=_wallpaperColorProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings; 
@property (assign,nonatomic) double strength;                                                         //@synthesize legibilityStrength=_legibilityStrength - In the implementation block
-(id)init;
-(id)initWithColor:(id)arg1 ;
-(_UILegibilitySettings *)legibilitySettings;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(void)setStrength:(double)arg1 ;
-(double)strength;
-(void)setWallpaperColorProvider:(id<CSWallpaperColorProvider>)arg1 ;
-(id<CSWallpaperColorProvider>)wallpaperColorProvider;
-(void)_updateVibrancy;
@end

