/*
* Generated on Monday, March 1, 2021 at 2:31:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithDictionary:(id)arg1 ;
-(void)setMaxRetryCount:(unsigned long long)arg1 ;
-(unsigned long long)maxRetryCount;
-(NSMutableDictionary *)countersByBundleID;
-(unsigned long long)minSecondsBetweenRetriesUnderMemoryPressure;
-(unsigned long long)maxSecondsBetweenRetriesUnderMemoryPressure;
-(unsigned long long)minSecondsBetweenRetries;
-(unsigned long long)maxSecondsBetweenRetries;
-(long long)nextDispatchTimeDeltaForExtension:(id)arg1 job:(id)arg2 memoryPressure:(BOOL)arg3 ;
-(void)setMinSecondsBetweenRetries:(unsigned long long)arg1 ;
-(void)setMaxSecondsBetweenRetries:(unsigned long long)arg1 ;
-(void)setMinSecondsBetweenRetriesUnderMemoryPressure:(unsigned long long)arg1 ;
-(void)setMaxSecondsBetweenRetriesUnderMemoryPressure:(unsigned long long)arg1 ;
-(void)setCountersByBundleID:(NSMutableDictionary *)arg1 ;
@end

