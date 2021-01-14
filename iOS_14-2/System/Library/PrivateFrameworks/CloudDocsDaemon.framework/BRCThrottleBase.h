/*
* Generated on Thursday, January 14, 2021 at 2:26:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/


@class NSString;

@interface BRCThrottleBase : NSObject {

	NSString* _name;
	unsigned _initialRetryCount;
	unsigned _finalRetryCount;
	unsigned _maximumElementCount;
	long long _minimumNsecsBetweenRetries;
	long long _maximumNsecsBetweenRetries;
	long long _nsecsBeforeForgettingCounter;

}

@property (nonatomic,readonly) NSString * name;                                     //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) long long nsecsBeforeForgettingCounter;              //@synthesize nsecsBeforeForgettingCounter=_nsecsBeforeForgettingCounter - In the implementation block
-(NSString *)name;
-(BOOL)isBlocking;
-(long long)nsecsToNextRetry:(long long)arg1 retryCount:(unsigned*)arg2 now:(long long)arg3 ;
-(long long)nsecsBeforeForgettingCounter;
-(id)initWithName:(id)arg1 andParameters:(id)arg2 ;
-(long long)retryBackoff:(unsigned)arg1 ;
@end

