/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGPotentialMemory.h>

@class NSMutableSet, NSString, NSArray, NSSet;

@interface PGPotentialMeaningfulEventAggregationMemory : PGPotentialMemory {

	NSMutableSet* _meaningfulEvents;
	NSMutableSet* _mutableMomentNodes;
	unsigned long long _meaning;
	NSString* _key;
	NSArray* _relevantAssets;

}

@property (readonly) unsigned long long meaning;                    //@synthesize meaning=_meaning - In the implementation block
@property (nonatomic,retain) NSSet * meaningfulEvents;              //@synthesize meaningfulEvents=_meaningfulEvents - In the implementation block
@property (nonatomic,retain) NSString * key;                        //@synthesize key=_key - In the implementation block
@property (nonatomic,retain) NSArray * relevantAssets;              //@synthesize relevantAssets=_relevantAssets - In the implementation block
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
-(double)score;
-(id)peopleUUIDs;
-(unsigned long long)meaning;
-(NSSet *)meaningfulEvents;
-(id)initWithMeaning:(unsigned long long)arg1 features:(id)arg2 ;
-(void)addMeaningfulEvent:(id)arg1 controller:(id)arg2 ;
-(void)setMeaningfulEvents:(NSSet *)arg1 ;
-(NSArray *)relevantAssets;
-(void)setRelevantAssets:(NSArray *)arg1 ;
@end

