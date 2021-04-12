/*
* Generated on Thursday, January 14, 2021 at 2:25:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class NSMutableArray;

@interface _HDQuantityDateIntervals : NSObject {

	double _currentStartInterval;
	double _currentEndInterval;
	long long _currentPairIndex;
	BOOL _containsUUIDs;
	NSMutableArray* _intervalPairs;

}
-(id)init;
-(void)resetState;
-(BOOL)insideRanges:(double)arg1 ;
-(void)addDateRangeFrom:(double)arg1 to:(double)arg2 uuid:(id)arg3 ;
-(id)intersectingIdentifiersFrom:(double)arg1 to:(double)arg2 ;
-(BOOL)containsUUIDs;
@end

