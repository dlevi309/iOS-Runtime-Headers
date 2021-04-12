/*
* Generated on Thursday, January 14, 2021 at 2:21:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
*/


@class NSMutableDictionary;

@interface CSExtensionJobThrottle : NSObject {

	unsigned long long _maxRetryCount;
	unsigned long long _minSecondsBetweenRetries;
	unsigned long long _maxSecondsBetweenRetries;
	unsigned long long _minSecondsBetweenRetriesUnderMemoryPressure;
	unsigned long long _maxSecondsBetweenRetriesUnderMemoryPressure;
	NSMutableDictionary* _countersByBundleID;

}

@property (assign,nonatomic) unsigned long long maxRetryCount;                                            //@synthesize maxRetryCount=_maxRetryCount - In the implementation block
@property (assign,nonatomic) unsigned long long minSecondsBetweenRetries;                                 //@synthesize minSecondsBetweenRetries=_minSecondsBetweenRetries - In the implementation block
@property (assign,nonatomic) unsigned long long maxSecondsBetweenRetries;                                 //@synthesize maxSecondsBetweenRetries=_maxSecondsBetweenRetries - In the implementation block
@property (assign,nonatomic) unsigned long long minSecondsBetweenRetriesUnderMemoryPressure;              //@synthesize minSecondsBetweenRetriesUnderMemoryPressure=_minSecondsBetweenRetriesUnderMemoryPressure - In the implementation block
@property (assign,nonatomic) unsigned long long maxSecondsBetweenRetriesUnderMemoryPressure;              //@synthesize maxSecondsBetweenRetriesUnderMemoryPressure=_maxSecondsBetweenRetriesUnderMemoryPressure - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * countersByBundleID;                                    //@synthesize countersByBundleID=_countersByBundleID - In the implementation block
-(void)setMaxRetryCount:(unsigned long long)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)maxRetryCount;
-(NSMutableDictionary *)countersByBundleID;
-(void)setCountersByBundleID:(NSMutableDictionary *)arg1 ;
-(unsigned long long)minSecondsBetweenRetriesUnderMemoryPressure;
-(unsigned long long)maxSecondsBetweenRetriesUnderMemoryPressure;
-(unsigned long long)minSecondsBetweenRetries;
-(unsigned long long)maxSecondsBetweenRetries;
-(long long)nextDispatchTimeDeltaForExtension:(id)arg1 job:(id)arg2 memoryPressure:(BOOL)arg3 ;
-(void)setMinSecondsBetweenRetries:(unsigned long long)arg1 ;
-(void)setMaxSecondsBetweenRetries:(unsigned long long)arg1 ;
-(void)setMinSecondsBetweenRetriesUnderMemoryPressure:(unsigned long long)arg1 ;
-(void)setMaxSecondsBetweenRetriesUnderMemoryPressure:(unsigned long long)arg1 ;
@end

