/*
* Generated on Thursday, January 14, 2021 at 2:25:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGGraphPropertylessEdge.h>

@interface PGGraphPartOfDayEdge : PGGraphPropertylessEdge {

	float _weight;

}
+(id)filter;
-(void)setWeight:(float)arg1 ;
-(float)weight;
-(unsigned short)domain;
-(id)initFromMomentNode:(id)arg1 toPartOfDayNode:(id)arg2 weight:(float)arg3 ;
-(id)edgeDescription;
-(id)initWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 weight:(float)arg5 ;
-(id)label;
@end

