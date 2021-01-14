/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithNodes:(id)arg1 negativeNodes:(id)arg2 ;
-(BOOL)isActive;
-(id)initWithNodes:(id)arg1 ;
-(id)debugDescriptionWithMomentNode:(id)arg1 ;
-(NSSet *)nodes;
-(NSSet *)negativeNodes;
-(id)additionalMatchingBlock;
-(void)setAdditionalMatchingBlock:(id)arg1 ;
@end

