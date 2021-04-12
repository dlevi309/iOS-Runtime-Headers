/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGPotentialMemory.h>

@class NSMutableSet, NSArray, PGGraphNode;

@interface PGPotentialHobbyMemory : PGPotentialMemory {

	NSMutableSet* _mutableMomentNodes;
	NSArray* _hobbyAssets;
	PGGraphNode* _person;
	long long _year;
	long long _hobbyType;

}

@property (retain) NSArray * hobbyAssets;               //@synthesize hobbyAssets=_hobbyAssets - In the implementation block
@property (readonly) PGGraphNode * person;              //@synthesize person=_person - In the implementation block
@property (readonly) long long year;                    //@synthesize year=_year - In the implementation block
@property (readonly) long long hobbyType;               //@synthesize hobbyType=_hobbyType - In the implementation block
-(long long)year;
-(PGGraphNode *)person;
-(long long)hobbyType;
-(void)addMomentNode:(id)arg1 ;
-(id)initWithPerson:(id)arg1 year:(long long)arg2 hobbyType:(long long)arg3 ;
-(NSArray *)hobbyAssets;
-(void)setHobbyAssets:(NSArray *)arg1 ;
@end

