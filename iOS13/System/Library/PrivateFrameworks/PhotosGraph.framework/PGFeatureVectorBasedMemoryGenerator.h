/*
* Generated on Monday, March 1, 2021 at 2:35:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGMemoryGenerator.h>

@class NSSet;

@interface PGFeatureVectorBasedMemoryGenerator : PGMemoryGenerator {

	NSSet* _featureVectors;
	unsigned long long _relatedType;
	unsigned long long _memoryCategory;
	unsigned long long _memorySubcategory;
	double _minimumPeopleMatchingScore;
	double _maximumLocationMatchingDistance;
	double _minimumLocationMatchingScore;

}

@property (nonatomic,retain) NSSet * featureVectors;                              //@synthesize featureVectors=_featureVectors - In the implementation block
@property (assign,nonatomic) unsigned long long relatedType;                      //@synthesize relatedType=_relatedType - In the implementation block
@property (assign,nonatomic) unsigned long long memoryCategory;                   //@synthesize memoryCategory=_memoryCategory - In the implementation block
@property (assign,nonatomic) unsigned long long memorySubcategory;                //@synthesize memorySubcategory=_memorySubcategory - In the implementation block
@property (assign,nonatomic) double minimumLocationMatchingScore;                 //@synthesize minimumLocationMatchingScore=_minimumLocationMatchingScore - In the implementation block
@property (assign,nonatomic) double maximumLocationMatchingDistance;              //@synthesize maximumLocationMatchingDistance=_maximumLocationMatchingDistance - In the implementation block
@property (assign,nonatomic) double minimumPeopleMatchingScore;                   //@synthesize minimumPeopleMatchingScore=_minimumPeopleMatchingScore - In the implementation block
-(id)initWithController:(id)arg1 ;
-(void)setMemorySubcategory:(unsigned long long)arg1 ;
-(void)setMemoryCategory:(unsigned long long)arg1 ;
-(id)_potentialMemoriesForDryTesting;
-(unsigned long long)memoryCategory;
-(unsigned long long)memorySubcategory;
-(id)generateMemories:(unsigned long long)arg1 ;
-(id)_createMemoryDebugWithPotentialMemory:(id)arg1 ;
-(unsigned long long)_postProcessMatch:(id)arg1 ;
-(NSSet *)featureVectors;
-(void)setFeatureVectors:(NSSet *)arg1 ;
-(unsigned long long)relatedType;
-(void)setRelatedType:(unsigned long long)arg1 ;
-(double)minimumPeopleMatchingScore;
-(void)setMinimumPeopleMatchingScore:(double)arg1 ;
-(double)maximumLocationMatchingDistance;
-(void)setMaximumLocationMatchingDistance:(double)arg1 ;
-(double)minimumLocationMatchingScore;
-(void)setMinimumLocationMatchingScore:(double)arg1 ;
@end

