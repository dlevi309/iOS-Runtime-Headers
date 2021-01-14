/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGGraphOptimizedEdge.h>

@interface PGGraphPresentEdge : PGGraphOptimizedEdge {

	unsigned _numberOfAssets : 32;
	float _weight;

}

@property (nonatomic,readonly) unsigned long long numberOfAssets;              //@synthesize numberOfAssets=_numberOfAssets - In the implementation block
+(id)filter;
-(void)setWeight:(float)arg1 ;
-(float)weight;
-(unsigned short)domain;
-(id)edgeDescription;
-(id)initWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 weight:(float)arg5 ;
-(void)setLocalProperties:(id)arg1 ;
-(id)initFromPersonNode:(id)arg1 toMomentNode:(id)arg2 weight:(float)arg3 ;
-(id)propertyDictionary;
-(unsigned long long)numberOfAssets;
-(id)label;
-(BOOL)hasProperties:(id)arg1 ;
@end

