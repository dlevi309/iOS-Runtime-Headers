/*
* Generated on Thursday, January 14, 2021 at 2:25:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGGraphOptimizedEdge.h>

@interface PGGraphSceneEdge : PGGraphOptimizedEdge {

	unsigned _numberOfAssets : 32;
	unsigned _numberOfHighConfidenceAssets : 32;
	unsigned _numberOfSearchConfidenceAssets : 32;
	unsigned _isReliable : 1;
	float _weight;

}

@property (assign,nonatomic) float weight;                                                     //@synthesize weight=_weight - In the implementation block
@property (nonatomic,readonly) BOOL isReliable;                                                //@synthesize isReliable=_isReliable - In the implementation block
@property (nonatomic,readonly) BOOL isSearchableForEvent; 
@property (nonatomic,readonly) unsigned long long numberOfAssets;                              //@synthesize numberOfAssets=_numberOfAssets - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfHighConfidenceAssets;                //@synthesize numberOfHighConfidenceAssets=_numberOfHighConfidenceAssets - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfSearchConfidenceAssets;              //@synthesize numberOfSearchConfidenceAssets=_numberOfSearchConfidenceAssets - In the implementation block
+(id)filter;
-(unsigned long long)numberOfSearchConfidenceAssets;
-(id)initFromMomentNode:(id)arg1 toSceneNode:(id)arg2 weight:(float)arg3 ;
-(void)setWeight:(float)arg1 ;
-(id)debugDescription;
-(float)weight;
-(unsigned short)domain;
-(id)edgeDescription;
-(id)initWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 weight:(float)arg5 ;
-(void)setLocalProperties:(id)arg1 ;
-(BOOL)isReliable;
-(id)propertyDictionary;
-(unsigned long long)numberOfHighConfidenceAssets;
-(unsigned long long)numberOfAssets;
-(BOOL)isSearchableForEvent;
-(id)label;
-(BOOL)hasProperties:(id)arg1 ;
@end

