/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPAsset.h>

@class NSURL, AVURLAsset, NSDictionary;

@interface VCPURLAsset : VCPAsset {

	NSURL* _imageURL;
	AVURLAsset* _movie;
	long long _mediaType;
	unsigned long long _mediaSubtypes;
	unsigned long long _pixelWidth;
	unsigned long long _pixelHeight;
	BOOL _onceExif;
	NSDictionary* _cachedExif;

}
+(id)imageAssetWithURL:(id)arg1 ;
+(id)livePhotoAssetWithImageURL:(id)arg1 andMovieURL:(id)arg2 ;
+(id)movieAssetWithURL:(id)arg1 ;
-(double)duration;
-(id)modificationDate;
-(long long)mediaType;
-(id)initWithImageURL:(id)arg1 ;
-(id)movie;
-(unsigned long long)pixelWidth;
-(unsigned long long)pixelHeight;
-(id)mainFileURL;
-(unsigned long long)mediaSubtypes;
-(id)exif;
-(CVBufferRef)imageWithPreferredDimension:(unsigned long long)arg1 ;
-(float)photoOffsetSeconds;
-(float)originalPhotoOffsetSeconds;
-(float)slowmoRate;
-(id)originalMovie;
-(id)initWithImageURL:(id)arg1 andMovieURL:(id)arg2 ;
-(id)initWithMovieURL:(id)arg1 ;
@end

