/*
* Generated on Thursday, January 14, 2021 at 2:27:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
*/

#import <KnowledgeGraphKit/MAFeatureExtractor.h>

@class NSString, NSArray;

@interface MAFlattenFeatureExtractor : MAFeatureExtractor {

	NSString* _name;
	NSArray* _featureNames;
	NSArray* _featureExtractors;

}

@property (nonatomic,readonly) NSArray * featureExtractors;              //@synthesize featureExtractors=_featureExtractors - In the implementation block
-(id)featureNames;
-(id)name;
-(id)floatVectorWithEntity:(id)arg1 error:(id*)arg2 ;
-(id)defaultFloatVectorWithError:(id*)arg1 ;
-(id)initWithName:(id)arg1 featureExtractors:(id)arg2 ;
-(NSArray *)featureExtractors;
@end

