/*
* Generated on Thursday, January 14, 2021 at 2:25:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGFeatureExtractor.h>

@interface PGFeatureExtractorPhotoLibrarySize : PGFeatureExtractor
+(BOOL)preCalculatePhotoLibrarySizeWithPhotoLibrary:(id)arg1 ;
+(id)_allAssetsOfType:(long long)arg1 withOptions:(id)arg2 ;
+(void)resetPreCalculatedPhotoLibrarySize;
+(unsigned long long)preCalculatedPhotoLibrarySize;
+(void)setPreCalculatedPhotoLibrarySize:(unsigned long long)arg1 ;
-(id)featureNames;
-(id)name;
-(long long)featureLength;
-(id)floatVectorWithEntity:(id)arg1 error:(id*)arg2 ;
@end

