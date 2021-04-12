/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
*/


@interface TSTimeErrorValue : NSObject {

	unsigned long long _timestamp;
	long long _error;

}

@property (nonatomic,readonly) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) long long error;                           //@synthesize error=_error - In the implementation block
+(id)timeErrorSequenceWithTimestamps:(unsigned long long*)arg1 timeError:(long long*)arg2 count:(long long)arg3 ;
-(unsigned long long)timestamp;
-(long long)error;
-(id)description;
-(id)initWithTimestamp:(unsigned long long)arg1 andError:(long long)arg2 ;
@end

