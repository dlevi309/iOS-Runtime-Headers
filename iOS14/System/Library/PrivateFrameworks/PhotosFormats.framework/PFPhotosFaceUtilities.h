/*
* Generated on Thursday, January 14, 2021 at 2:26:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
*/


#import <PhotosFormats/PhotosFormats-Structs.h>
@interface PFPhotosFaceUtilities : NSObject
+(long long)qualityMeasureForFace:(id)arg1 countOfFacesOnAsset:(unsigned long long)arg2 ;
+(id)selectRepresentativeFromFaces:(id)arg1 qualityMeasureByLocalIdentifier:(id)arg2 representativenessByCSN:(id)arg3 candidateFaces:(id)arg4 ;
+(id)sortedViableMergeCandidateFacesFor:(id)arg1 from:(id)arg2 ignoreSourceAssetDimensions:(BOOL)arg3 matchScores:(id*)arg4 ;
+(id)bestMergeCandidateFaceFor:(id)arg1 from:(id)arg2 ignoreSourceAssetDimensions:(BOOL)arg3 ;
+(id)selectRepresentativeFromFaces:(id)arg1 qualityMeasureByLocalIdentifier:(id)arg2 representativenessByCSN:(id)arg3 ;
+(BOOL)getCropRectForPortraitImage:(CGRect*)arg1 size:(double)arg2 imgWidth:(double)arg3 imgHeight:(double)arg4 centerX:(double)arg5 centerY:(double)arg6 ;
+(CGSize)faceTileSizeAdjustingForImageAspectRatio:(CGSize)arg1 imgWidth:(double)arg2 imgHeight:(double)arg3 ;
@end

