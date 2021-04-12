/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEORouteHypothesizer, geo_isolater, GEOXPCActivity;

@interface GEORouteHypothesizerDelayer : NSObject {

	CFBinaryHeapRef _minHeap;
	GEORouteHypothesizer* _nextHypothesizer;
	geo_isolater* _isolater;
	GEOXPCActivity* _activity;

}
+(void)checkin;
-(id)init;
-(void)dealloc;
-(void)_setNextHypothesizer:(id)arg1 ;
-(void)_startValidHypothesizers;
-(void)delayStartOfHypothesizer:(id)arg1 ;
@end

