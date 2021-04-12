/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WallpaperKit.framework/WallpaperKit
*/

#import <WallpaperKit/WallpaperKit-Structs.h>
#import <WallpaperKit/WKAbstractWallpaper.h>
#import <libobjc.A.dylib/WKFileBasedWallpaper.h>

@class NSURL, NSString;

@interface WKLiveWallpaper : WKAbstractWallpaper <WKFileBasedWallpaper> {

	NSURL* _fullsizeImageURL;
	NSURL* _thumbnailImageURL;
	NSURL* _videoAssetURL;
	double _stillTimeInVideo;

}

@property (nonatomic,copy) NSURL * thumbnailImageURL;                      //@synthesize thumbnailImageURL=_thumbnailImageURL - In the implementation block
@property (nonatomic,copy) NSURL * fullsizeImageURL;                       //@synthesize fullsizeImageURL=_fullsizeImageURL - In the implementation block
@property (nonatomic,copy) NSURL * videoAssetURL;                          //@synthesize videoAssetURL=_videoAssetURL - In the implementation block
@property (assign,nonatomic) double stillTimeInVideo;                      //@synthesize stillTimeInVideo=_stillTimeInVideo - In the implementation block
@property (nonatomic,readonly) unsigned long long identifier; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,readonly) unsigned long long type; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)type;
-(id)initWithIdentifier:(unsigned long long)arg1 name:(id)arg2 ;
-(void)setThumbnailImageURL:(NSURL *)arg1 ;
-(NSURL *)thumbnailImageURL;
-(double)stillTimeInVideo;
-(void)setStillTimeInVideo:(double)arg1 ;
-(NSURL *)fullsizeImageURL;
-(NSURL *)videoAssetURL;
-(id)initWithIdentifier:(unsigned long long)arg1 name:(id)arg2 thumbnailImageURL:(id)arg3 fullsizeImageURL:(id)arg4 videoAssetURL:(id)arg5 stillTimeInVideo:(double)arg6 ;
-(void)setFullsizeImageURL:(NSURL *)arg1 ;
-(void)setVideoAssetURL:(NSURL *)arg1 ;
@end

