/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@class NSDictionary, NSDate;

@interface SBWallpaperDefaults : SBAbstractSpringBoardDefaultDomain

@property (assign,nonatomic) NSDictionary * homeScreenWallpapers; 
@property (assign,nonatomic) NSDictionary * lockScreenWallpapers; 
@property (assign,nonatomic) BOOL enableWallpaperDimming; 
@property (nonatomic,retain) NSDate * dateIrisWallpaperLastPlayed; 
@property (assign,nonatomic) unsigned long long irisWallpaperPlayCount; 
@property (nonatomic,readonly) BOOL legacyUsesUniqueHomeScreenWallpaper; 
-(void)setDateIrisWallpaperLastPlayed:(NSDate *)arg1 ;
-(NSDate *)dateIrisWallpaperLastPlayed;
-(void)setEnableWallpaperDimming:(BOOL)arg1 ;
-(BOOL)enableWallpaperDimming;
-(void)setHomeScreenWallpapers:(NSDictionary *)arg1 ;
-(NSDictionary *)homeScreenWallpapers;
-(void)setLockScreenWallpapers:(NSDictionary *)arg1 ;
-(NSDictionary *)lockScreenWallpapers;
-(void)setLegacyUsesUniqueHomeScreenWallpaper:(BOOL)arg1 ;
-(BOOL)legacyUsesUniqueHomeScreenWallpaper;
-(void)setIrisWallpaperPlayCount:(unsigned long long)arg1 ;
-(unsigned long long)irisWallpaperPlayCount;
-(void)_bindAndRegisterDefaults;
-(void)clearLegacyDefaults;
@end

