/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGPotentialMemory.h>

@class NSSet;

@interface PGRecentPastEventPotentialMemory : PGPotentialMemory {

	BOOL _isBirthday;
	NSSet* _peopleNodes;
	double _meanContentScore;
	double _neighborScore;

}

@property (retain) NSSet * peopleNodes;                  //@synthesize peopleNodes=_peopleNodes - In the implementation block
@property (assign) double meanContentScore;              //@synthesize meanContentScore=_meanContentScore - In the implementation block
@property (assign) double neighborScore;                 //@synthesize neighborScore=_neighborScore - In the implementation block
@property (assign) BOOL isBirthday;                      //@synthesize isBirthday=_isBirthday - In the implementation block
-(id)description;
-(BOOL)isBirthday;
-(double)neighborScore;
-(double)meanContentScore;
-(void)setMeanContentScore:(double)arg1 ;
-(void)setNeighborScore:(double)arg1 ;
-(NSSet *)peopleNodes;
-(void)setPeopleNodes:(NSSet *)arg1 ;
-(id)initWithAssetCollection:(id)arg1 momentNode:(id)arg2 subcategory:(unsigned long long)arg3 ;
-(id)initWithCategory:(unsigned long long)arg1 subcategory:(unsigned long long)arg2 momentNodes:(id)arg3 sourceType:(long long)arg4 ;
-(void)computeRemainingScoresWithManager:(id)arg1 controller:(id)arg2 previousPotentialMemory:(id)arg3 ;
-(void)setIsBirthday:(BOOL)arg1 ;
@end

