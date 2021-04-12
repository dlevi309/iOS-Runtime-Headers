/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setStillTimeInVideo:(double)arg1 ;
-(id)wallpaperColorNameForVariant:(long long)arg1 ;
-(BOOL)supportsCroppingForVariant:(long long)arg1 wallpaperMode:(long long)arg2 ;
-(void)setGradientData:(id)arg1 forLocations:(long long)arg2 ;
-(id)init;
-(BOOL)isPortraitForVariant:(long long)arg1 wallpaperMode:(long long)arg2 ;
-(void)setHasVideo:(BOOL)arg1 ;
-(id)initWithDefaultsStore:(id)arg1 ;
-(void)resetImageHashDefaults;
-(BOOL)magnifyEnabledForVariant:(long long)arg1 wallpaperMode:(long long)arg2 ;
-(void)setZoomScale:(double)arg1 forLocations:(long long)arg2 wallpaperMode:(long long)arg3 ;
-(double)parallaxFactorForVariant:(long long)arg1 wallpaperMode:(long long)arg2 ;
-(id)wallpaperOptionsForVariant:(long long)arg1 wallpaperMode:(long long)arg2 ;
-(NSMutableDictionary *)homeScreenDefaultsStoreWrapper;
-(void)setParallaxFactor:(double)arg1 forLocations:(long long)arg2 wallpaperMode:(long long)arg3 ;
-(double)zoomScaleForVariant:(long long)arg1 wallpaperMode:(long long)arg2 ;
-(void)setProceduralIdentifier:(id)arg1 forLocations:(long long)arg2 ;
-(id)wallpaperGradientDataForVariant:(long long)arg1 ;
-(void)setName:(id)arg1 forLocations:(long long)arg2 wallpaperMode:(long long)arg3 ;
-(id)_defaultsWrapperForVariant:(long long)arg1 wallpaperMode:(long long)arg2 ;
-(double)stillTimeInVideo;
-(void)setMagnifyEnabled:(BOOL)arg1 forLocations:(long long)arg2 wallpaperMode:(long long)arg3 ;
-(void)resetMagnifyDefaults;
-(id)wallpaperKitDataForVariant:(long long)arg1 wallpaperMode:(long long)arg2 ;
-(id)wallpaperColorDataForVariant:(long long)arg1 ;
-(void)resetParallaxFactorDefaults;
-(BOOL)proceduralUserSetForVariant:(long long)arg1 ;
-(void)resetCroppingDefaults;
-(void)setImageHash:(id)arg1 forLocations:(long long)arg2 wallpaperMode:(long long)arg3 ;
-(id)description;
-(void)updateDefaultsForLocations:(long long)arg1 updater:(/*^block*/id)arg2 ;
-(id)nameForVariant:(long long)arg1 wallpaperMode:(long long)arg2 ;
-(void)resetZoomScaleDefaults;
-(id)imageHashForVariant:(long long)arg1 wallpaperMode:(long long)arg2 ;
-(void)setColorData:(id)arg1 forLocations:(long long)arg2 ;
-(void)setProceduralOptions:(id)arg1 forLocations:(long long)arg2 ;
-(void)resetWallpaperKitDataDefaults;
-(void)resetNameDefaults;
-(void)_updateDefaultsForVariant:(long long)arg1 wallpaperMode:(long long)arg2 updater:(/*^block*/id)arg3 ;
-(CGRect)cropRectForVariant:(long long)arg1 wallpaperMode:(long long)arg2 ;
-(void)setWallpaperOptions:(id)arg1 forLocations:(long long)arg2 wallpaperMode:(long long)arg3 ;
-(void)setWallpaperKitData:(id)arg1 forLocations:(long long)arg2 wallpaperMode:(long long)arg3 ;
-(void)resetStillTimeInVideoDefaults;
-(void)resetPortraitDefaults;
-(id)_keyForWallpaperMode:(long long)arg1 ;
-(void)setPortrait:(BOOL)arg1 forLocations:(long long)arg2 wallpaperMode:(long long)arg3 ;
-(double)stillTimeInVideoForVariant:(long long)arg1 ;
-(id)proceduralIdentifierForVariant:(long long)arg1 ;
-(void)setCropRect:(CGRect)arg1 forLocations:(long long)arg2 wallpaperMode:(long long)arg3 ;
-(void)setSupportsCropping:(BOOL)arg1 forLocations:(long long)arg2 wallpaperMode:(long long)arg3 ;
-(NSMutableDictionary *)lockScreenDefaultsStoreWrapper;
-(void)resetDefaults;
-(BOOL)hasVideoForVariant:(long long)arg1 ;
-(void)resetHasVideoDefaults;
-(void)_setDefaultsWithDictionary:(id)arg1 variant:(long long)arg2 wallpaperMode:(long long)arg3 ;
-(id)proceduralOptionsForVariant:(long long)arg1 ;
-(void)setColorName:(id)arg1 forLocations:(long long)arg2 ;
-(BOOL)hasVideo;
-(SBWallpaperDefaults *)defaultsStore;
-(void)setProceduralUserSet:(BOOL)arg1 forLocations:(long long)arg2 ;
@end

