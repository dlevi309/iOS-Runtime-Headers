/*
* Generated on Monday, March 1, 2021 at 2:35:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGPotentialMemory.h>

@class NSMutableSet, PGGraphNode, NSString;

@interface PGPotentialBusinessMemory : PGPotentialMemory {

	NSMutableSet* _mutableMomentNodes;
	PGGraphNode* _businessNode;
	long long _year;

}

@property (readonly) PGGraphNode * businessNode;              //@synthesize businessNode=_businessNode - In the implementation block
@property (readonly) long long year;                          //@synthesize year=_year - In the implementation block
@property (readonly) NSString * business; 
-(long long)year;
-(NSString *)business;
-(id)initWithBusinessNode:(id)arg1 year:(long long)arg2 ;
-(void)addMomentNode:(id)arg1 ;
-(PGGraphNode *)businessNode;
@end

