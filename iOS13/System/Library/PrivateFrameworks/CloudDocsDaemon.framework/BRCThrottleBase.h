/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(long long)nsecsToNextRetry:(long long)arg1 retryCount:(unsigned*)arg2 now:(long long)arg3 ;
-(long long)nsecsBeforeForgettingCounter;
-(id)initWithName:(id)arg1 andParameters:(id)arg2 ;
-(long long)retryBackoff:(unsigned)arg1 ;
-(BOOL)isBlocking;
@end

