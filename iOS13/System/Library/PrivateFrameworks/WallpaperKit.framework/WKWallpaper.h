/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WallpaperKit.framework/WallpaperKit
*/

@class NSString;


@protocol WKWallpaper <NSCopying>
@property (nonatomic,readonly) unsigned long long identifier; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,readonly) unsigned long long type; 
@required
-(NSString *)name;
-(unsigned long long)type;
-(unsigned long long)identifier;

@end

