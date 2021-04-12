/*
* Generated on Thursday, January 14, 2021 at 2:27:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
*/


@class NSString, NSArray;

@interface MAFeatureExtractor : NSObject

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSArray * featureNames; 
-(NSArray *)featureNames;
-(NSString *)name;
-(id)floatVectorWithEntity:(id)arg1 error:(id*)arg2 ;
-(id)defaultFloatVectorWithError:(id*)arg1 ;
-(id)featureVectorsWithEntities:(id)arg1 entityLabels:(id)arg2 error:(id*)arg3 ;
-(id)featureVectorWithEntity:(id)arg1 error:(id*)arg2 ;
-(id)floatMatrixWithEntities:(id)arg1 error:(id*)arg2 ;
@end

