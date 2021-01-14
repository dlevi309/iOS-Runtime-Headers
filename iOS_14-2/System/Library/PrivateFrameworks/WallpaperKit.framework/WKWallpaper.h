/*
* Generated on Thursday, January 14, 2021 at 2:25:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WallpaperKit.framework/WallpaperKit
*/

@class NSString;


@protocol WKWallpaper <NSCopying>
@property (nonatomic,readonly) long long identifier; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,readonly) unsigned long long type; 
@property (nonatomic,readonly) unsigned long long backingType; 
@required
-(NSString *)name;
-(unsigned long long)type;
-(unsigned long long)backingType;
-(long long)identifier;

@end

