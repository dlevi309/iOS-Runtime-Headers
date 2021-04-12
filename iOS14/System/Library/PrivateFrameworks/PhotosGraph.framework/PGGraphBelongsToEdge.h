/*
* Generated on Thursday, January 14, 2021 at 2:25:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGGraphPropertylessEdge.h>

@interface PGGraphBelongsToEdge : PGGraphPropertylessEdge {

	float _weight;

}

@property (assign,nonatomic) float weight;              //@synthesize weight=_weight - In the implementation block
-(id)initFromPersonNode:(id)arg1 toSocialGroupNode:(id)arg2 weight:(float)arg3 ;
-(void)setWeight:(float)arg1 ;
-(float)weight;
-(unsigned short)domain;
-(id)edgeDescription;
-(id)initWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 weight:(float)arg5 ;
-(id)label;
@end

