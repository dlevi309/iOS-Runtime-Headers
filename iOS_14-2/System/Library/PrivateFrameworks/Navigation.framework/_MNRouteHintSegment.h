/*
* Generated on Thursday, January 14, 2021 at 2:24:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/


#import <Navigation/Navigation-Structs.h>
@interface _MNRouteHintSegment : NSObject {

	unsigned long long _roadSegmentID;
	SCD_Struct_MN6 _startCoordinate;
	SCD_Struct_MN6 _endCoordinate;

}

@property (assign,nonatomic) unsigned long long roadSegmentID;              //@synthesize roadSegmentID=_roadSegmentID - In the implementation block
@property (assign,nonatomic) SCD_Struct_MN6 startCoordinate;                //@synthesize startCoordinate=_startCoordinate - In the implementation block
@property (assign,nonatomic) SCD_Struct_MN6 endCoordinate;                  //@synthesize endCoordinate=_endCoordinate - In the implementation block
-(void)setStartCoordinate:(SCD_Struct_MN6)arg1 ;
-(void)setEndCoordinate:(SCD_Struct_MN6)arg1 ;
-(SCD_Struct_MN6)endCoordinate;
-(SCD_Struct_MN6)startCoordinate;
-(unsigned long long)roadSegmentID;
-(void)setRoadSegmentID:(unsigned long long)arg1 ;
@end

