/*
* Generated on Thursday, January 14, 2021 at 2:28:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/


@class NSMutableArray, NSString, NSArray;

@interface PMRStopwatch : NSObject {

	unsigned long long _startTime;
	NSMutableArray* _splitTimes;
	NSString* _domain;
	NSMutableArray* _splitTimeStack;
	unsigned long long _maxSplitTimes;
	unsigned long long _coreAnimationTotalTime;

}

@property (assign,nonatomic) unsigned long long startTime;                  //@synthesize startTime=_startTime - In the implementation block
@property (assign) unsigned long long coreAnimationTotalTime;               //@synthesize coreAnimationTotalTime=_coreAnimationTotalTime - In the implementation block
@property (nonatomic,copy) NSString * domain;                               //@synthesize domain=_domain - In the implementation block
@property (nonatomic,readonly) NSArray * splitTimes;                        //@synthesize splitTimes=_splitTimes - In the implementation block
@property (assign,nonatomic) unsigned long long maxSplitTimes;              //@synthesize maxSplitTimes=_maxSplitTimes - In the implementation block
+(id)sharedStopwatch;
+(void)setSharedStopwatch:(id)arg1 ;
+(void)benchmarkBlockWithTitle:(id)arg1 iterations:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 onCompletion:(/*^block*/id)arg4 ;
-(id)init;
-(id)initWithDomain:(id)arg1 ;
-(void)setStartTime:(unsigned long long)arg1 ;
-(void)setDomain:(NSString *)arg1 ;
-(NSString *)domain;
-(id)description;
-(void)reset;
-(unsigned long long)startTime;
-(void)dealloc;
-(NSArray *)splitTimes;
-(id)_subtreeDescription;
-(void)_purgeOldestSplitTimeIfNeeded;
-(void)benchmarkBlockWithTitle:(id)arg1 iterations:(unsigned long long)arg2 currentIteration:(unsigned long long)arg3 usingBlock:(/*^block*/id)arg4 onCompletion:(/*^block*/id)arg5 ;
-(id)descriptionWithFormat:(int)arg1 key:(id)arg2 comment:(id)arg3 ;
-(void)writeToFile:(id)arg1 key:(id)arg2 comment:(id)arg3 fileFormat:(int)arg4 ;
-(void)logEvent:(id)arg1 comment:(id)arg2 userInfo:(id)arg3 ;
-(void)addSplit:(id)arg1 ;
-(id)formattedUserInfoForSplitTime:(id)arg1 ;
-(unsigned long long)coreAnimationTotalTime;
-(void)beginTimingGroupForMethod:(SEL)arg1 inClass:(Class)arg2 comment:(id)arg3 ;
-(void)endTimingGroup;
-(void)logToLocation:(id)arg1 key:(id)arg2 ;
-(void)logEvent:(id)arg1 comment:(id)arg2 ;
-(void)logWithFormat:(int)arg1 ;
-(unsigned long long)maxSplitTimes;
-(void)setMaxSplitTimes:(unsigned long long)arg1 ;
-(void)setCoreAnimationTotalTime:(unsigned long long)arg1 ;
@end

