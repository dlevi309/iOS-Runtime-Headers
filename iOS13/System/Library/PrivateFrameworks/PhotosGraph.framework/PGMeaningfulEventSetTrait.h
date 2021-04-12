/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGMeaningfulEventTrait.h>

@class NSSet;

@interface PGMeaningfulEventSetTrait : PGMeaningfulEventTrait {

	NSSet* _nodes;
	NSSet* _negativeNodes;
	/*^block*/id _additionalMatchingBlock;

}

@property (nonatomic,readonly) NSSet * nodes;                       //@synthesize nodes=_nodes - In the implementation block
@property (nonatomic,readonly) NSSet * negativeNodes;               //@synthesize negativeNodes=_negativeNodes - In the implementation block
@property (nonatomic,copy) id additionalMatchingBlock;              //@synthesize additionalMatchingBlock=_additionalMatchingBlock - In the implementation block
-(BOOL)isActive;
-(NSSet *)nodes;
-(id)initWithNodes:(id)arg1 ;
-(id)debugDescriptionWithMomentNode:(id)arg1 ;
-(id)initWithNodes:(id)arg1 negativeNodes:(id)arg2 ;
-(NSSet *)negativeNodes;
-(id)additionalMatchingBlock;
-(void)setAdditionalMatchingBlock:(id)arg1 ;
@end

