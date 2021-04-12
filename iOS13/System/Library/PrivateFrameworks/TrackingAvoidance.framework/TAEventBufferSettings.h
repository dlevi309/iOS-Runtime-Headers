/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
*/


#import <TrackingAvoidance/TrackingAvoidance-Structs.h>
@interface TAEventBufferSettings : NSObject {

	unsigned long long _bufferCapacity;
	double _bufferTimeIntervalOfRetention;

}

@property (nonatomic,readonly) unsigned long long bufferCapacity;                 //@synthesize bufferCapacity=_bufferCapacity - In the implementation block
@property (nonatomic,readonly) double bufferTimeIntervalOfRetention;              //@synthesize bufferTimeIntervalOfRetention=_bufferTimeIntervalOfRetention - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithBufferCapacity:(unsigned long long)arg1 bufferTimeIntervalOfRetention:(double)arg2 ;
-(id)initWithBufferCapacityOrDefault:(id)arg1 bufferTimeIntervalOfRetentionOrDefault:(id)arg2 ;
-(unsigned long long)bufferCapacity;
-(double)bufferTimeIntervalOfRetention;
@end

