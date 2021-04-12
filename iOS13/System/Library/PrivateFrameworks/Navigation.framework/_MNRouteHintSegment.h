/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/


#import <Navigation/Navigation-Structs.h>
@interface _MNRouteHintSegment : NSObject {

	unsigned long long _roadSegmentID;
	SCD_Struct_MN8 _startCoordinate;
	SCD_Struct_MN8 _endCoordinate;

}

@property (assign,nonatomic) unsigned long long roadSegmentID;              //@synthesize roadSegmentID=_roadSegmentID - In the implementation block
@property (assign,nonatomic) SCD_Struct_MN8 startCoordinate;                //@synthesize startCoordinate=_startCoordinate - In the implementation block
@property (assign,nonatomic) SCD_Struct_MN8 endCoordinate;                  //@synthesize endCoordinate=_endCoordinate - In the implementation block
-(void)setStartCoordinate:(SCD_Struct_MN8)arg1 ;
-(void)setEndCoordinate:(SCD_Struct_MN8)arg1 ;
-(SCD_Struct_MN8)endCoordinate;
-(SCD_Struct_MN8)startCoordinate;
-(unsigned long long)roadSegmentID;
-(void)setRoadSegmentID:(unsigned long long)arg1 ;
@end

