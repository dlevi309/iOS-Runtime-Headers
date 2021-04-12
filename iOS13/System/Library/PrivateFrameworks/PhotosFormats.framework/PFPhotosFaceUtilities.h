/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
*/


#import <PhotosFormats/PhotosFormats-Structs.h>
@interface PFPhotosFaceUtilities : NSObject
+(id)sortedViableMergeCandidateFacesFor:(id)arg1 from:(id)arg2 ignoreSourceAssetDimensions:(BOOL)arg3 matchScores:(id*)arg4 ;
+(id)bestMergeCandidateFaceFor:(id)arg1 from:(id)arg2 ignoreSourceAssetDimensions:(BOOL)arg3 ;
+(long long)qualityMeasureForFace:(id)arg1 countOfFacesOnAsset:(unsigned long long)arg2 ;
+(id)selectRepresentativeFromFaces:(id)arg1 qualityMeasureByLocalIdentifier:(id)arg2 representativenessByCSN:(id)arg3 ;
+(id)selectRepresentativeFromFaces:(id)arg1 qualityMeasureByLocalIdentifier:(id)arg2 representativenessByCSN:(id)arg3 candidateFaces:(id)arg4 ;
+(BOOL)getCropRectForPortraitImage:(CGRect*)arg1 size:(double)arg2 imgWidth:(double)arg3 imgHeight:(double)arg4 centerX:(double)arg5 centerY:(double)arg6 ;
+(CGSize)faceTileSizeAdjustingForImageAspectRatio:(CGSize)arg1 imgWidth:(double)arg2 imgHeight:(double)arg3 ;
@end

