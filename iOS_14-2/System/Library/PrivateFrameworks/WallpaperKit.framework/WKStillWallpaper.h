/*
* Generated on Thursday, January 14, 2021 at 2:25:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WallpaperKit.framework/WallpaperKit
*/

#import <WallpaperKit/WallpaperKit-Structs.h>
#import <WallpaperKit/WKAbstractWallpaper.h>
#import <libobjc.A.dylib/WKFileBasedWallpaper.h>

@class NSURL, NSString;

@interface WKStillWallpaper : WKAbstractWallpaper <WKFileBasedWallpaper> {

	NSURL* _fullsizeImageURL;
	NSURL* _thumbnailImageURL;
	NSURL* _renderedImageURL;

}

@property (nonatomic,copy) NSURL * thumbnailImageURL;                       //@synthesize thumbnailImageURL=_thumbnailImageURL - In the implementation block
@property (nonatomic,copy) NSURL * fullsizeImageURL;                        //@synthesize fullsizeImageURL=_fullsizeImageURL - In the implementation block
@property (nonatomic,copy) NSURL * renderedImageURL;                        //@synthesize renderedImageURL=_renderedImageURL - In the implementation block
@property (nonatomic,copy,readonly) NSURL * videoAssetURL; 
@property (nonatomic,readonly) double stillTimeInVideo; 
@property (nonatomic,readonly) long long identifier; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,readonly) unsigned long long type; 
@property (nonatomic,readonly) unsigned long long backingType; 
+(id)na_identity;
-(void)setThumbnailImageURL:(NSURL *)arg1 ;
-(NSURL *)thumbnailImageURL;
-(NSURL *)fullsizeImageURL;
-(double)stillTimeInVideo;
-(NSURL *)videoAssetURL;
-(unsigned long long)type;
-(unsigned long long)hash;
-(unsigned long long)backingType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithIdentifier:(long long)arg1 name:(id)arg2 thumbnailImageURL:(id)arg3 fullsizeImageURL:(id)arg4 renderedImageURL:(id)arg5 ;
-(void)setFullsizeImageURL:(NSURL *)arg1 ;
-(/*^block*/id)descriptionBuilderBlock;
-(NSURL *)renderedImageURL;
-(void)setRenderedImageURL:(NSURL *)arg1 ;
-(id)renderedVideoAssetURL;
@end

