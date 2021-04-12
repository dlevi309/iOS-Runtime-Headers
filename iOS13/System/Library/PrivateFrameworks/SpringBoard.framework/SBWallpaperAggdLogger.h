/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@interface SBWallpaperAggdLogger : NSObject {

	long long _aggd_lockscreenWallpaperType;
	long long _aggd_lockscreenWallpaperIdentifier;
	long long _aggd_homescreenWallpaperType;
	long long _aggd_homescreenWallpaperIdentifier;
	long long _aggd_irisWallpaperEnabled;
	long long _aggd_sharedWallpaper;

}
-(id)init;
-(id)_valueString;
-(void)incrementIrisPlayCount;
-(void)_clearAggdKeysForLocations:(long long)arg1 ;
-(void)updateWallpaperAggdKeysForLocations:(long long)arg1 withHasVideo:(BOOL)arg2 hasProcedural:(BOOL)arg3 name:(id)arg4 ;
-(void)saveWallpaperAggdCurrentValues;
-(unsigned long long)_bucketedPlayCount;
-(void)_resetPlayCountDate;
@end

