/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(double)stillTimeInVideo;
-(NSURL *)fullsizeImageURL;
-(NSURL *)videoAssetURL;

@end

