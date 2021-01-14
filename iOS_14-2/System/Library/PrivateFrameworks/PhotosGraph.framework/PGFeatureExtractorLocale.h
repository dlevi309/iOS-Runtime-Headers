/*
* Generated on Thursday, January 14, 2021 at 2:25:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGFeatureExtractor.h>

@class NSLocale;

@interface PGFeatureExtractorLocale : PGFeatureExtractor {

	NSLocale* _currentLocale;

}

@property (nonatomic,retain) NSLocale * currentLocale;              //@synthesize currentLocale=_currentLocale - In the implementation block
-(NSLocale *)currentLocale;
-(id)featureNames;
-(id)init;
-(id)name;
-(void)setCurrentLocale:(NSLocale *)arg1 ;
-(long long)featureLength;
-(id)floatVectorWithEntity:(id)arg1 error:(id*)arg2 ;
@end

