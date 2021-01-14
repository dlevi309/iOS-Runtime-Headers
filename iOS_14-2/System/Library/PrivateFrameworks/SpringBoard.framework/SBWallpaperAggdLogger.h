/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class SBWallpaperDefaults;

@interface SBWallpaperAggdLogger : NSObject {

	long long _aggd_lockscreenWallpaperType;
	long long _aggd_lockscreenWallpaperIdentifier;
	long long _aggd_homescreenWallpaperType;
	long long _aggd_homescreenWallpaperIdentifier;
	long long _aggd_irisWallpaperEnabled;
	long long _aggd_sharedWallpaper;
	SBWallpaperDefaults* _wallpaperDefaults;

}
-(id)init;
-(void)incrementIrisPlayCount;
-(id)_valueString;
-(void)_clearAggdKeysForLocations:(long long)arg1 ;
-(void)updateWallpaperAggdKeysForLocations:(long long)arg1 withHasVideo:(BOOL)arg2 hasProcedural:(BOOL)arg3 name:(id)arg4 ;
-(void)saveWallpaperAggdCurrentValues;
-(unsigned long long)_bucketedPlayCount;
-(void)_resetPlayCountDate;
@end

