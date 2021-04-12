/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WallpaperKit.framework/WallpaperKit
*/

#import <WallpaperKit/WallpaperKit-Structs.h>
#import <WallpaperKit/WKAbstractWallpaper.h>
#import <libobjc.A.dylib/WKValueBasedWallpaper.h>

@class NSDictionary, UIImage, NSString;

@interface WKDynamicWallpaper : WKAbstractWallpaper <WKValueBasedWallpaper> {

	NSDictionary* __dynamicDictionary;
	UIImage* __thumbnailImage;

}

@property (nonatomic,retain) NSDictionary * _dynamicDictionary;              //@synthesize _dynamicDictionary=__dynamicDictionary - In the implementation block
@property (nonatomic,retain) UIImage * _thumbnailImage;                      //@synthesize _thumbnailImage=__thumbnailImage - In the implementation block
@property (nonatomic,readonly) unsigned long long identifier; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,readonly) unsigned long long type; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)type;
-(id)initWithIdentifier:(unsigned long long)arg1 name:(id)arg2 ;
-(UIImage *)_thumbnailImage;
-(id)thumbnailImage;
-(id)wallpaperValue;
-(id)initWithIdentifier:(unsigned long long)arg1 dictionary:(id)arg2 ;
-(NSDictionary *)_dynamicDictionary;
-(void)set_dynamicDictionary:(NSDictionary *)arg1 ;
-(void)set_thumbnailImage:(UIImage *)arg1 ;
@end

