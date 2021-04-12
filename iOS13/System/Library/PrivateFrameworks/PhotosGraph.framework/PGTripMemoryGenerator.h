/*
* Generated on Monday, March 1, 2021 at 2:35:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2 ;
-(id)_potentialMemoriesForDryTesting;
-(NSDate *)lowerBoundLocalDate;
-(void)setLowerBoundLocalDate:(NSDate *)arg1 ;
-(id)initWithSubcategory:(unsigned long long)arg1 controller:(id)arg2 ;
-(id)potentialMemoryWithTripNode:(id)arg1 ;
-(id)_tripNodeForPotentialMemory:(id)arg1 ;
-(PGGraphHighlightGroupNode *)tripNode;
-(void)setTripNode:(PGGraphHighlightGroupNode *)arg1 ;
@end

