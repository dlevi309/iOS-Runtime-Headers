/*
* Generated on Thursday, January 14, 2021 at 2:26:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/


@interface BRCRetryCounter : NSObject {

	BOOL _scheduled;
	unsigned _retryCount;
	long long _latestRetry;
	long long _throttleHash;

}

@property (nonatomic,readonly) unsigned retryCount;                 //@synthesize retryCount=_retryCount - In the implementation block
@property (nonatomic,readonly) long long latestRetry;               //@synthesize latestRetry=_latestRetry - In the implementation block
@property (nonatomic,readonly) long long throttleHash;              //@synthesize throttleHash=_throttleHash - In the implementation block
-(unsigned)retryCount;
-(void)schedule;
-(void)incrementRetry;
-(id)initWithThrottleHash:(long long)arg1 ;
-(long long)latestRetry;
-(long long)throttleHash;
@end

