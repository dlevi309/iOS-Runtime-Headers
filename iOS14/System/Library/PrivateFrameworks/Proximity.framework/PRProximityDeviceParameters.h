/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Proximity.framework/Proximity
*/


#import <Proximity/Proximity-Structs.h>
@class NSNumber;

@interface PRProximityDeviceParameters : NSObject {

	BtProximityFilterBase* _filter;
	unsigned long long _samplesize;
	NSNumber* _rssiImmediate;
	NSNumber* _rssiNear;

}

@property (readonly) BtProximityFilterBase* filter;              //@synthesize filter=_filter - In the implementation block
@property (readonly) unsigned long long samplesize;              //@synthesize samplesize=_samplesize - In the implementation block
@property (readonly) NSNumber * rssiImmediate;                   //@synthesize rssiImmediate=_rssiImmediate - In the implementation block
@property (readonly) NSNumber * rssiNear;                        //@synthesize rssiNear=_rssiNear - In the implementation block
-(BtProximityFilterBase*)filter;
-(id)init;
-(NSNumber *)rssiNear;
-(id)initWithFilter:(BtProximityFilterBase*)arg1 sampleSize:(unsigned long long)arg2 rssiImmediate:(id)arg3 rssiNear:(id)arg4 ;
-(unsigned long long)samplesize;
-(NSNumber *)rssiImmediate;
@end

