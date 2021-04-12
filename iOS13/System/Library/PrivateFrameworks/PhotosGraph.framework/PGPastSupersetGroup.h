/*
* Generated on Monday, March 1, 2021 at 2:35:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@class NSMutableArray, NSDateInterval, NSMutableSet, PGGraphLocationNode;

@interface PGPastSupersetGroup : NSObject {

	NSMutableArray* _moments;
	NSDateInterval* _dateInterval;
	NSMutableSet* _supersetCityNodes;
	NSMutableSet* _densestCloseLocationNodes;
	PGGraphLocationNode* _stateNode;

}

@property (retain) NSMutableArray * moments;                              //@synthesize moments=_moments - In the implementation block
@property (retain) NSDateInterval * dateInterval;                         //@synthesize dateInterval=_dateInterval - In the implementation block
@property (retain) NSMutableSet * supersetCityNodes;                      //@synthesize supersetCityNodes=_supersetCityNodes - In the implementation block
@property (retain) NSMutableSet * densestCloseLocationNodes;              //@synthesize densestCloseLocationNodes=_densestCloseLocationNodes - In the implementation block
@property (retain) PGGraphLocationNode * stateNode;                       //@synthesize stateNode=_stateNode - In the implementation block
+(id)pastSupersetGroupWithMoments:(id)arg1 dateInterval:(id)arg2 supersetCityNode:(id)arg3 densestCloseLocationNode:(id)arg4 ;
-(NSDateInterval *)dateInterval;
-(void)setDateInterval:(NSDateInterval *)arg1 ;
-(NSMutableArray *)moments;
-(void)setMoments:(NSMutableArray *)arg1 ;
-(NSMutableSet *)supersetCityNodes;
-(void)setSupersetCityNodes:(NSMutableSet *)arg1 ;
-(NSMutableSet *)densestCloseLocationNodes;
-(void)setDensestCloseLocationNodes:(NSMutableSet *)arg1 ;
-(PGGraphLocationNode *)stateNode;
-(void)setStateNode:(PGGraphLocationNode *)arg1 ;
@end

