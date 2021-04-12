/*
* Generated on Thursday, January 14, 2021 at 2:23:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/


@class NSArray;

@interface MTLBVHDescriptor : NSObject {

	float _primitiveCost;
	float _traversalCost;
	float _splitCapacity;
	float _minOverlap;
	unsigned long long _maxDepth;
	unsigned long long _branchingFactor;
	unsigned long long _minPrimitivesPerLeaf;
	unsigned long long _maxPrimitivesPerLeaf;
	NSArray* _geometryDescriptors;
	unsigned long long _splitHeuristic;

}

@property (assign,nonatomic) unsigned long long maxDepth;                          //@synthesize maxDepth=_maxDepth - In the implementation block
@property (assign,nonatomic) unsigned long long branchingFactor;                   //@synthesize branchingFactor=_branchingFactor - In the implementation block
@property (assign,nonatomic) unsigned long long minPrimitivesPerLeaf;              //@synthesize minPrimitivesPerLeaf=_minPrimitivesPerLeaf - In the implementation block
@property (assign,nonatomic) unsigned long long maxPrimitivesPerLeaf;              //@synthesize maxPrimitivesPerLeaf=_maxPrimitivesPerLeaf - In the implementation block
@property (assign,nonatomic) float traversalCost;                                  //@synthesize traversalCost=_traversalCost - In the implementation block
@property (assign,nonatomic) float primitiveCost;                                  //@synthesize primitiveCost=_primitiveCost - In the implementation block
@property (assign,nonatomic) unsigned long long splitHeuristic;                    //@synthesize splitHeuristic=_splitHeuristic - In the implementation block
@property (assign,nonatomic) float splitCapacity;                                  //@synthesize splitCapacity=_splitCapacity - In the implementation block
@property (assign,nonatomic) float minOverlap;                                     //@synthesize minOverlap=_minOverlap - In the implementation block
@property (nonatomic,retain) NSArray * geometryDescriptors;                        //@synthesize geometryDescriptors=_geometryDescriptors - In the implementation block
-(id)init;
-(void)setMaxDepth:(unsigned long long)arg1 ;
-(unsigned long long)branchingFactor;
-(void)setBranchingFactor:(unsigned long long)arg1 ;
-(unsigned long long)minPrimitivesPerLeaf;
-(void)setMinPrimitivesPerLeaf:(unsigned long long)arg1 ;
-(unsigned long long)maxPrimitivesPerLeaf;
-(void)setMaxPrimitivesPerLeaf:(unsigned long long)arg1 ;
-(float)primitiveCost;
-(void)setPrimitiveCost:(float)arg1 ;
-(float)traversalCost;
-(void)setTraversalCost:(float)arg1 ;
-(NSArray *)geometryDescriptors;
-(unsigned long long)splitHeuristic;
-(void)setGeometryDescriptors:(NSArray *)arg1 ;
-(void)setSplitHeuristic:(unsigned long long)arg1 ;
-(float)splitCapacity;
-(void)setSplitCapacity:(float)arg1 ;
-(float)minOverlap;
-(void)setMinOverlap:(float)arg1 ;
-(unsigned long long)maxDepth;
-(void)dealloc;
@end

