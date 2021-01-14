/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPAsset.h>

@class PHAsset, NSArray, NSDictionary, NSMutableDictionary;

@interface VCPPhotosAsset : VCPAsset {

	PHAsset* _asset;
	NSArray* _cachedResources;
	BOOL _onceExif;
	NSDictionary* _cachedExif;
	BOOL _onceScenes;
	NSMutableDictionary* _cachedScenes;

}

@property (nonatomic,readonly) NSArray * resources; 
+(id)assetWithPHAsset:(id)arg1 ;
-(id)modificationDate;
-(id)scenes;
-(id)fingerprint;
-(id)localIdentifier;
-(id)movie;
-(id)exif;
-(long long)mediaType;
-(NSArray *)resources;
-(id)mainFileURL;
-(unsigned long long)pixelHeight;
-(unsigned long long)mediaSubtypes;
-(CVBufferRef)imageWithPreferredDimension:(unsigned long long)arg1 ;
-(float)photoOffsetSeconds;
-(float)originalPhotoOffsetSeconds;
-(float)slowmoRate;
-(id)streamedMovie;
-(id)originalMovie;
-(CGSize)originalMovieSize;
-(double)duration;
-(id)initWithPHAsset:(id)arg1 ;
-(unsigned long long)pixelWidth;
@end

