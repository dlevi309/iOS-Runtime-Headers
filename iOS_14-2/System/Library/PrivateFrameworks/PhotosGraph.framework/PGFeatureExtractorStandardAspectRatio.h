/*
* Generated on Thursday, January 14, 2021 at 2:25:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGAssetFeatureExtractor.h>

@interface PGFeatureExtractorStandardAspectRatio : PGAssetFeatureExtractor
-(id)featureNames;
-(id)name;
-(long long)featureLength;
-(id)floatVectorWithEntity:(id)arg1 error:(id*)arg2 ;
-(BOOL)_generateError:(id*)arg1 withCode:(long long)arg2 andMessage:(id)arg3 ;
-(float)precisionEpsilon;
-(long long)standardAspectRatioFromFloatVector:(id)arg1 ;
@end

