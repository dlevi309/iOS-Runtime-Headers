/*
* Generated on Thursday, January 14, 2021 at 2:25:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,readonly) long long identifier; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,readonly) unsigned long long type; 
@property (nonatomic,readonly) unsigned long long backingType; 
+(id)na_identity;
-(id)thumbnailImage;
-(unsigned long long)type;
-(unsigned long long)hash;
-(unsigned long long)backingType;
-(id)initWithIdentifier:(long long)arg1 name:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIImage *)_thumbnailImage;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithIdentifier:(long long)arg1 dictionary:(id)arg2 ;
-(id)wallpaperValue;
-(/*^block*/id)descriptionBuilderBlock;
-(void)set_thumbnailImage:(UIImage *)arg1 ;
-(NSDictionary *)_dynamicDictionary;
-(void)set_dynamicDictionary:(NSDictionary *)arg1 ;
@end

