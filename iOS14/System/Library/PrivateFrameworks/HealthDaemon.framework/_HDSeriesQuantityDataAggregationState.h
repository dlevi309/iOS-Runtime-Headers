/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDDataAggregationState.h>

@class HDQuantityDatum;

@interface _HDSeriesQuantityDataAggregationState : HDDataAggregationState {

	HDQuantityDatum* _lastDatum;
	long long _length;

}

@property (nonatomic,readonly) HDQuantityDatum * lastDatum;              //@synthesize lastDatum=_lastDatum - In the implementation block
@property (nonatomic,readonly) long long length;                         //@synthesize length=_length - In the implementation block
-(long long)length;
-(HDQuantityDatum *)lastDatum;
-(id)initWithRemainingSensorData:(id)arg1 currentSeries:(id)arg2 lastDatum:(id)arg3 length:(long long)arg4 ;
@end

