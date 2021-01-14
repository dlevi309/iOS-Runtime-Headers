/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGPotentialMemory.h>

@class NSMutableSet, NSString, NSArray, NSSet;

@interface PGPotentialMeaningfulEventAggregationMemory : PGPotentialMemory {

	NSMutableSet* _meaningfulEvents;
	NSMutableSet* _mutableMomentNodes;
	unsigned long long _meaning;
	NSString* _key;
	NSArray* _relevantAssetLocalIdentifiers;

}

@property (readonly) unsigned long long meaning;                                   //@synthesize meaning=_meaning - In the implementation block
@property (nonatomic,retain) NSSet * meaningfulEvents;                             //@synthesize meaningfulEvents=_meaningfulEvents - In the implementation block
@property (nonatomic,retain) NSString * key;                                       //@synthesize key=_key - In the implementation block
@property (nonatomic,retain) NSArray * relevantAssetLocalIdentifiers;              //@synthesize relevantAssetLocalIdentifiers=_relevantAssetLocalIdentifiers - In the implementation block
-(NSSet *)meaningfulEvents;
-(id)peopleUUIDs;
-(double)score;
-(NSString *)key;
-(unsigned long long)meaning;
-(void)setKey:(NSString *)arg1 ;
-(id)initWithMeaning:(unsigned long long)arg1 features:(id)arg2 ;
-(void)addMeaningfulEvent:(id)arg1 controller:(id)arg2 ;
-(void)setMeaningfulEvents:(NSSet *)arg1 ;
-(NSArray *)relevantAssetLocalIdentifiers;
-(void)setRelevantAssetLocalIdentifiers:(NSArray *)arg1 ;
@end

