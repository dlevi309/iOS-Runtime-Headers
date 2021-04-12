/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class NSMutableArray;

@interface _HDQuantityDateIntervals : NSObject {

	double _currentStartInterval;
	double _currentEndInterval;
	long long _currentPairIndex;
	NSMutableArray* _intervalPairs;

}
-(id)init;
-(BOOL)insideRanges:(double)arg1 ;
-(void)addDateRangeFrom:(double)arg1 to:(double)arg2 ;
@end

