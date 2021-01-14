/*
* Generated on Thursday, January 14, 2021 at 2:25:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGGraphOptimizedEdge.h>

@interface PGGraphPOIEdge : PGGraphOptimizedEdge {

	unsigned _poiIsImproved : 1;
	unsigned _poiIsSpecial : 1;
	float _weight;

}

@property (assign,nonatomic) float weight;                     //@synthesize weight=_weight - In the implementation block
@property (assign,nonatomic) BOOL poiIsImproved;               //@synthesize poiIsImproved=_poiIsImproved - In the implementation block
@property (nonatomic,readonly) BOOL poiIsSpecial;              //@synthesize poiIsSpecial=_poiIsSpecial - In the implementation block
+(id)filter;
-(BOOL)poiIsSpecial;
-(void)setPoiIsImproved:(BOOL)arg1 ;
-(void)setWeight:(float)arg1 ;
-(BOOL)poiIsImproved;
-(id)initFromMomentNode:(id)arg1 toPOINode:(id)arg2 weight:(float)arg3 ;
-(float)weight;
-(unsigned short)domain;
-(id)edgeDescription;
-(id)initWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 weight:(float)arg5 ;
-(void)setLocalProperties:(id)arg1 ;
-(id)propertyDictionary;
-(id)label;
-(BOOL)hasProperties:(id)arg1 ;
@end

