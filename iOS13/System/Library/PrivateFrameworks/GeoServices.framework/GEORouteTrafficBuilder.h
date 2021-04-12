/*
* Generated on Monday, March 1, 2021 at 2:30:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


#import <GeoServices/GeoServices-Structs.h>
@class NSMutableData;

@interface GEORouteTrafficBuilder : NSObject {

	NSMutableData* _trafficColors;
	NSMutableData* _trafficOffsets;
	unsigned _trafficDistance;

}
-(id)init;
-(id)trafficColors;
-(void)addTrafficFromRoute:(id)arg1 withStepRange:(NSRange)arg2 ;
-(void)copyTrafficToRoute:(id)arg1 ;
-(void)addTrafficFromRoute:(id)arg1 from:(unsigned)arg2 to:(unsigned)arg3 ;
-(void)addTrafficFromETARoute:(id)arg1 ;
-(id)trafficOffsets;
-(void)_removeDuplicateTraffic;
@end

