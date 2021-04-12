/*
* Generated on Thursday, January 14, 2021 at 2:25:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WallpaperKit.framework/WallpaperKit
*/

@class NSURL;


@protocol WKFileBasedWallpaper <WKWallpaper>
@property (nonatomic,copy,readonly) NSURL * thumbnailImageURL; 
@property (nonatomic,copy,readonly) NSURL * fullsizeImageURL; 
@property (nonatomic,copy,readonly) NSURL * videoAssetURL; 
@property (nonatomic,readonly) double stillTimeInVideo; 
@required
-(NSURL *)thumbnailImageURL;
-(NSURL *)fullsizeImageURL;
-(double)stillTimeInVideo;
-(NSURL *)videoAssetURL;

@end

