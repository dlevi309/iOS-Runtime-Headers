/*
* Generated on Thursday, January 14, 2021 at 2:20:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)delayStartOfHypothesizer:(id)arg1 ;
-(void)_setNextHypothesizer:(id)arg1 ;
-(void)_startValidHypothesizers;
-(void)dealloc;
@end

