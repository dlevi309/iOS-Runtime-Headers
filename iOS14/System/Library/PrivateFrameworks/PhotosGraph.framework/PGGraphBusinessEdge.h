/*
* Generated on Thursday, January 14, 2021 at 2:25:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGGraphOptimizedEdge.h>

@class NSDate;

@interface PGGraphBusinessEdge : PGGraphOptimizedEdge {

	BOOL _hasRoutineInfo;
	float _weight;
	NSDate* _universalStartDate;
	NSDate* _universalEndDate;

}

@property (nonatomic,readonly) BOOL hasRoutineInfo;                      //@synthesize hasRoutineInfo=_hasRoutineInfo - In the implementation block
@property (nonatomic,readonly) NSDate * universalStartDate;              //@synthesize universalStartDate=_universalStartDate - In the implementation block
@property (nonatomic,readonly) NSDate * universalEndDate;                //@synthesize universalEndDate=_universalEndDate - In the implementation block
-(NSDate *)universalEndDate;
-(NSDate *)universalStartDate;
-(void)setWeight:(float)arg1 ;
-(float)weight;
-(id)edgeDescription;
-(id)initWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 weight:(float)arg5 ;
-(void)setLocalProperties:(id)arg1 ;
-(id)propertyDictionary;
-(BOOL)hasProperties:(id)arg1 ;
-(id)initWithLabel:(id)arg1 fromSourceNode:(id)arg2 toBusinessNode:(id)arg3 domain:(unsigned short)arg4 weight:(float)arg5 ;
-(BOOL)hasRoutineInfo;
@end

