/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPAsset.h>

@class NSURL, AVURLAsset, NSDictionary, NSMutableDictionary;

@interface VCPURLAsset : VCPAsset {

	NSURL* _imageURL;
	AVURLAsset* _movie;
	long long _mediaType;
	unsigned long long _mediaSubtypes;
	unsigned long long _pixelWidth;
	unsigned long long _pixelHeight;
	BOOL _onceExif;
	NSDictionary* _cachedExif;
	BOOL _onceScenes;
	NSMutableDictionary* _cachedScenes;

}
+(id)movieAssetWithURL:(id)arg1 ;
+(id)imageAssetWithURL:(id)arg1 ;
+(id)livePhotoAssetWithImageURL:(id)arg1 andMovieURL:(id)arg2 ;
+(id)sdofImageAssetWithURL:(id)arg1 ;
-(id)modificationDate;
-(id)scenes;
-(id)movie;
-(id)exif;
-(long long)mediaType;
-(id)mainFileURL;
-(unsigned long long)pixelHeight;
-(unsigned long long)mediaSubtypes;
-(CVBufferRef)imageWithPreferredDimension:(unsigned long long)arg1 ;
-(float)photoOffsetSeconds;
-(float)originalPhotoOffsetSeconds;
-(float)slowmoRate;
-(id)originalMovie;
-(id)initWithImageURL:(id)arg1 isSDOF:(BOOL)arg2 ;
-(id)initWithImageURL:(id)arg1 andMovieURL:(id)arg2 ;
-(id)initWithMovieURL:(id)arg1 ;
-(double)duration;
-(unsigned long long)pixelWidth;
@end

