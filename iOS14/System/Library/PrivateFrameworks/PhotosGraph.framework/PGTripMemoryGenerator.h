/*
* Generated on Thursday, January 14, 2021 at 2:25:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGFeaturedMemoryGenerator.h>

@class NSDate, PGGraphHighlightGroupNode;

@interface PGTripMemoryGenerator : PGFeaturedMemoryGenerator {

	unsigned long long _numberOfUntimelyRejects;
	NSDate* _lowerBoundLocalDate;
	PGGraphHighlightGroupNode* _tripNode;
	unsigned long long _subcategory;

}

@property (nonatomic,retain) NSDate * lowerBoundLocalDate;                      //@synthesize lowerBoundLocalDate=_lowerBoundLocalDate - In the implementation block
@property (nonatomic,retain) PGGraphHighlightGroupNode * tripNode;              //@synthesize tripNode=_tripNode - In the implementation block
@property (readonly) unsigned long long subcategory;                            //@synthesize subcategory=_subcategory - In the implementation block
-(unsigned long long)subcategory;
-(void)_enumeratePotentialMemoriesUsingBlock:(/*^block*/id)arg1 ;
-(unsigned long long)durationForCuration;
-(void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2 ;
-(id)_potentialMemoriesForDryTesting;
-(NSDate *)lowerBoundLocalDate;
-(void)setLowerBoundLocalDate:(NSDate *)arg1 ;
-(id)initWithSubcategory:(unsigned long long)arg1 controller:(id)arg2 ;
-(id)potentialMemoryWithTripNode:(id)arg1 ;
-(id)curationOptionsWithKeyAsset:(id)arg1 ;
-(id)_tripNodeForPotentialMemory:(id)arg1 ;
-(PGGraphHighlightGroupNode *)tripNode;
-(void)setTripNode:(PGGraphHighlightGroupNode *)arg1 ;
@end

