/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
*/


#import <TrackingAvoidance/TrackingAvoidance-Structs.h>
@interface TAEventBufferSettings : NSObject {

	unsigned long long _bufferCapacity;
	double _bufferTimeIntervalOfRetention;

}

@property (nonatomic,readonly) unsigned long long bufferCapacity;                 //@synthesize bufferCapacity=_bufferCapacity - In the implementation block
@property (nonatomic,readonly) double bufferTimeIntervalOfRetention;              //@synthesize bufferTimeIntervalOfRetention=_bufferTimeIntervalOfRetention - In the implementation block
-(double)bufferTimeIntervalOfRetention;
-(unsigned long long)bufferCapacity;
-(id)initWithBufferCapacity:(unsigned long long)arg1 bufferTimeIntervalOfRetention:(double)arg2 ;
-(id)initWithBufferCapacityOrDefault:(id)arg1 bufferTimeIntervalOfRetentionOrDefault:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

