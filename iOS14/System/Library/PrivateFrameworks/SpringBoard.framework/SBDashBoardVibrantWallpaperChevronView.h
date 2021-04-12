/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (assign,nonatomic) double strength;                                                         //@synthesize legibilityStrength=_legibilityStrength - In the implementation block
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;                              //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<CSWallpaperColorProvider>)wallpaperColorProvider;
-(double)strength;
-(void)setWallpaperColorProvider:(id<CSWallpaperColorProvider>)arg1 ;
-(void)setStrength:(double)arg1 ;
-(id)init;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(id)initWithColor:(id)arg1 ;
-(_UILegibilitySettings *)legibilitySettings;
-(void)_updateVibrancy;
@end

