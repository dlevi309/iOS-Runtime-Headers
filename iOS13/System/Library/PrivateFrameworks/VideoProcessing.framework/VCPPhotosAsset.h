/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPAsset.h>

@class PHAsset, NSArray, NSDictionary;

@interface VCPPhotosAsset : VCPAsset {

	PHAsset* _asset;
	NSArray* _cachedResources;
	BOOL _onceExif;
	NSDictionary* _cachedExif;

}

@property (nonatomic,readonly) NSArray * resources; 
+(id)assetWithPHAsset:(id)arg1 ;
-(double)duration;
-(id)modificationDate;
-(long long)mediaType;
-(id)localIdentifier;
-(NSArray *)resources;
-(id)movie;
-(unsigned long long)pixelWidth;
-(unsigned long long)pixelHeight;
-(id)mainFileURL;
-(id)fingerprint;
-(unsigned long long)mediaSubtypes;
-(id)initWithPHAsset:(id)arg1 ;
-(id)exif;
-(CVBufferRef)imageWithPreferredDimension:(unsigned long long)arg1 ;
-(float)photoOffsetSeconds;
-(float)originalPhotoOffsetSeconds;
-(float)slowmoRate;
-(id)streamedMovie;
-(id)originalMovie;
@end

