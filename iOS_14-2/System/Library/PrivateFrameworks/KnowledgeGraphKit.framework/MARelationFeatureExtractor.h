/*
* Generated on Thursday, January 14, 2021 at 2:27:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
*/

#import <KnowledgeGraphKit/MAFeatureExtractor.h>

@class NSString, MAIndexCache, MARelation;

@interface MARelationFeatureExtractor : MAFeatureExtractor {

	NSString* _name;
	MAIndexCache* _featureNameIndexCache;
	MARelation* _relation;
	/*^block*/id _labelForTargetBlock;

}

@property (nonatomic,readonly) MAIndexCache * featureNameIndexCache;              //@synthesize featureNameIndexCache=_featureNameIndexCache - In the implementation block
@property (nonatomic,readonly) MARelation * relation;                             //@synthesize relation=_relation - In the implementation block
@property (nonatomic,readonly) id labelForTargetBlock;                            //@synthesize labelForTargetBlock=_labelForTargetBlock - In the implementation block
-(id)featureNames;
-(id)name;
-(MARelation *)relation;
-(id)floatVectorWithEntity:(id)arg1 error:(id*)arg2 ;
-(id)initWithName:(id)arg1 featureNames:(id)arg2 relation:(id)arg3 labelForTargetBlock:(/*^block*/id)arg4 ;
-(MAIndexCache *)featureNameIndexCache;
-(id)labelForTargetBlock;
@end

