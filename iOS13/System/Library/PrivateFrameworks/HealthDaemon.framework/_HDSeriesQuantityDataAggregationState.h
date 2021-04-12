/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDDataAggregationState.h>

@class HDQuantityDatum;

@interface _HDSeriesQuantityDataAggregationState : HDDataAggregationState {

	HDQuantityDatum* _lastDatum;
	long long _length;

}

@property (nonatomic,readonly) HDQuantityDatum * lastDatum;              //@synthesize lastDatum=_lastDatum - In the implementation block
@property (assign,nonatomic) long long length;                           //@synthesize length=_length - In the implementation block
-(long long)length;
-(void)setLength:(long long)arg1 ;
-(HDQuantityDatum *)lastDatum;
-(id)initWithRemainingSensorData:(id)arg1 currentSeries:(id)arg2 lastDatum:(id)arg3 length:(long long)arg4 ;
@end

