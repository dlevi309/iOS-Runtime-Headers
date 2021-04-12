/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@protocol CLSTimeLocationTuple;
#import <PhotosGraph/PhotosGraph-Structs.h>
@class PGGraphMomentNode, NSDateInterval, PGMeaningfulEventMatchingCriteria;

@interface PGPublicEventMatchingOptions : NSObject {

	id<CLSTimeLocationTuple> _timeLocationTuple;
	PGGraphMomentNode* _momentNode;
	NSDateInterval* _actualAttendanceDateInterval;
	NSDateInterval* _expandedAttendanceDateInterval;
	PGMeaningfulEventMatchingCriteria* _matchingCriteria;
	CLLocationCoordinate2D _coordinates;

}

@property (nonatomic,readonly) id<CLSTimeLocationTuple> timeLocationTuple;                        //@synthesize timeLocationTuple=_timeLocationTuple - In the implementation block
@property (nonatomic,readonly) PGGraphMomentNode * momentNode;                                    //@synthesize momentNode=_momentNode - In the implementation block
@property (nonatomic,readonly) CLLocationCoordinate2D coordinates;                                //@synthesize coordinates=_coordinates - In the implementation block
@property (nonatomic,readonly) NSDateInterval * actualAttendanceDateInterval;                     //@synthesize actualAttendanceDateInterval=_actualAttendanceDateInterval - In the implementation block
@property (nonatomic,readonly) NSDateInterval * expandedAttendanceDateInterval;                   //@synthesize expandedAttendanceDateInterval=_expandedAttendanceDateInterval - In the implementation block
@property (nonatomic,readonly) PGMeaningfulEventMatchingCriteria * matchingCriteria;              //@synthesize matchingCriteria=_matchingCriteria - In the implementation block
-(CLLocationCoordinate2D)coordinates;
-(PGGraphMomentNode *)momentNode;
-(id)initWithTimeLocationTuple:(id)arg1 momentNode:(id)arg2 ;
-(NSDateInterval *)actualAttendanceDateInterval;
-(NSDateInterval *)expandedAttendanceDateInterval;
-(PGMeaningfulEventMatchingCriteria *)matchingCriteria;
-(void)_createAttendanceDateIntervals;
-(id<CLSTimeLocationTuple>)timeLocationTuple;
@end
