/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/


#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
@class SBWallpaperDefaults, NSMutableDictionary;

@interface SBFWallpaperDefaults : NSObject {

	SBWallpaperDefaults* _defaultsStore;
	NSMutableDictionary* _lockScreenDefaultsStoreWrapper;
	NSMutableDictionary* _homeScreenDefaultsStoreWrapper;

}

@property (nonatomic,readonly) SBWallpaperDefaults * defaultsStore;                               //@synthesize defaultsStore=_defaultsStore - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * lockScreenDefaultsStoreWrapper;              //@synthesize lockScreenDefaultsStoreWrapper=_lockScreenDefaultsStoreWrapper - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * homeScreenDefaultsStoreWrapper;              //@synthesize homeScreenDefaultsStoreWrapper=_homeScreenDefaultsStoreWrapper - In the implementation block
+(id)defaults;
-(id)init;
-(id)description;
-(BOOL)hasVideo;
-(void)setHasVideo:(BOOL)arg1 ;
-(double)stillTimeInVideo;
-(void)setStillTimeInVideo:(double)arg1 ;
-(id)initWithDefaultsStore:(id)arg1 ;
-(id)imageHashForVariant:(long long)arg1 wallpaperMode:(long long)arg2 ;
-(void)setImageHash:(id)arg1 forLocations:(long long)arg2 wallpaperMode:(long long)arg3 ;
-(void)updateDefaultsForLocations:(long long)arg1 updater:(/*^block*/id)arg2 ;
-(id)proceduralIdentifierForVariant:(long long)arg1 ;
-(id)proceduralOptionsForVariant:(long long)arg1 ;
-(void)setProceduralIdentifier:(id)arg1 forLocations:(long long)arg2 ;
-(void)setProceduralOptions:(id)arg1 forLocations:(long long)arg2 ;
-(void)setProceduralUserSet:(BOOL)arg1 forLocations:(long long)arg2 ;
-(id)wallpaperOptionsForVariant:(long long)arg1 wallpaperMode:(long long)arg2 ;
-(void)setWallpaperOptions:(id)arg1 forLocations:(long long)arg2 wallpaperMode:(long long)arg3 ;
-(void)resetDefaults;
-(id)wallpaperColorDataForVariant:(long long)arg1 ;
-(id)wallpaperColorNameForVariant:(long long)arg1 ;
-(void)setColorData:(id)arg1 forLocations:(long long)arg2 ;
-(void)setColorName:(id)arg1 forLocations:(long long)arg2 ;
-(id)wallpaperGradientDataForVariant:(long long)arg1 ;
-(void)setGradientData:(id)arg1 forLocations:(long long)arg2 ;
-(double)parallaxFactorForVariant:(long long)arg1 wallpaperMode:(long long)arg2 ;
-(double)zoomScaleForVariant:(long long)arg1 wallpaperMode:(long long)arg2 ;
-(CGRect)cropRectForVariant:(long long)arg1 wallpaperMode:(long long)arg2 ;
-(BOOL)supportsCroppingForVariant:(long long)arg1 wallpaperMode:(long long)arg2 ;
-(void)resetParallaxFactorDefaults;
-(void)resetZoomScaleDefaults;
-(void)resetCroppingDefaults;
-(void)resetMagnifyDefaults;
-(void)resetPortraitDefaults;
-(void)resetHasVideoDefaults;
-(void)resetStillTimeInVideoDefaults;
-(void)resetNameDefaults;
-(void)resetImageHashDefaults;
-(BOOL)magnifyEnabledForVariant:(long long)arg1 wallpaperMode:(long long)arg2 ;
-(BOOL)isPortraitForVariant:(long long)arg1 wallpaperMode:(long long)arg2 ;
-(id)nameForVariant:(long long)arg1 wallpaperMode:(long long)arg2 ;
-(BOOL)hasVideoForVariant:(long long)arg1 ;
-(double)stillTimeInVideoForVariant:(long long)arg1 ;
-(void)setSupportsCropping:(BOOL)arg1 forLocations:(long long)arg2 wallpaperMode:(long long)arg3 ;
-(void)setCropRect:(CGRect)arg1 forLocations:(long long)arg2 wallpaperMode:(long long)arg3 ;
-(void)setParallaxFactor:(double)arg1 forLocations:(long long)arg2 wallpaperMode:(long long)arg3 ;
-(void)setMagnifyEnabled:(BOOL)arg1 forLocations:(long long)arg2 wallpaperMode:(long long)arg3 ;
-(void)setZoomScale:(double)arg1 forLocations:(long long)arg2 wallpaperMode:(long long)arg3 ;
-(void)setPortrait:(BOOL)arg1 forLocations:(long long)arg2 wallpaperMode:(long long)arg3 ;
-(void)setName:(id)arg1 forLocations:(long long)arg2 wallpaperMode:(long long)arg3 ;
-(void)_updateDefaultsForVariant:(long long)arg1 wallpaperMode:(long long)arg2 updater:(/*^block*/id)arg3 ;
-(id)_defaultsWrapperForVariant:(long long)arg1 wallpaperMode:(long long)arg2 ;
-(void)_setDefaultsWithDictionary:(id)arg1 variant:(long long)arg2 wallpaperMode:(long long)arg3 ;
-(SBWallpaperDefaults *)defaultsStore;
-(id)_keyForWallpaperMode:(long long)arg1 ;
-(NSMutableDictionary *)homeScreenDefaultsStoreWrapper;
-(NSMutableDictionary *)lockScreenDefaultsStoreWrapper;
-(BOOL)proceduralUserSetForVariant:(long long)arg1 ;
@end

