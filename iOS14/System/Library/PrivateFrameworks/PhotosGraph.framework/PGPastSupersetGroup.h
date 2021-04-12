/*
* Generated on Thursday, January 14, 2021 at 2:25:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@class NSMutableArray, NSDateInterval, NSMutableSet, PGGraphLocationStateNode;

@interface PGPastSupersetGroup : NSObject {

	NSMutableArray* _momentNodes;
	NSDateInterval* _dateInterval;
	NSMutableSet* _supersetCityNodes;
	NSMutableSet* _densestCloseLocationNodes;
	PGGraphLocationStateNode* _stateNode;

}

@property (retain) NSMutableArray * momentNodes;                          //@synthesize momentNodes=_momentNodes - In the implementation block
@property (retain) NSDateInterval * dateInterval;                         //@synthesize dateInterval=_dateInterval - In the implementation block
@property (retain) NSMutableSet * supersetCityNodes;                      //@synthesize supersetCityNodes=_supersetCityNodes - In the implementation block
@property (retain) NSMutableSet * densestCloseLocationNodes;              //@synthesize densestCloseLocationNodes=_densestCloseLocationNodes - In the implementation block
@property (retain) PGGraphLocationStateNode * stateNode;                  //@synthesize stateNode=_stateNode - In the implementation block
+(id)pastSupersetGroupWithMomentNodes:(id)arg1 dateInterval:(id)arg2 supersetCityNode:(id)arg3 densestCloseLocationNode:(id)arg4 ;
-(NSDateInterval *)dateInterval;
-(void)setDateInterval:(NSDateInterval *)arg1 ;
-(NSMutableSet *)supersetCityNodes;
-(NSMutableArray *)momentNodes;
-(PGGraphLocationStateNode *)stateNode;
-(void)setMomentNodes:(NSMutableArray *)arg1 ;
-(void)setSupersetCityNodes:(NSMutableSet *)arg1 ;
-(NSMutableSet *)densestCloseLocationNodes;
-(void)setDensestCloseLocationNodes:(NSMutableSet *)arg1 ;
-(void)setStateNode:(PGGraphLocationStateNode *)arg1 ;
@end

