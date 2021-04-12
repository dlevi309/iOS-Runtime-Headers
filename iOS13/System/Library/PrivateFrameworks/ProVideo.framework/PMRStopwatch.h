/*
* Generated on Monday, March 1, 2021 at 2:35:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)description;
-(NSString *)domain;
-(void)reset;
-(id)initWithDomain:(id)arg1 ;
-(void)setDomain:(NSString *)arg1 ;
-(unsigned long long)startTime;
-(void)setStartTime:(unsigned long long)arg1 ;
-(id)_subtreeDescription;
-(void)_purgeOldestSplitTimeIfNeeded;
-(void)benchmarkBlockWithTitle:(id)arg1 iterations:(unsigned long long)arg2 currentIteration:(unsigned long long)arg3 usingBlock:(/*^block*/id)arg4 onCompletion:(/*^block*/id)arg5 ;
-(id)descriptionWithFormat:(int)arg1 key:(id)arg2 comment:(id)arg3 ;
-(void)writeToFile:(id)arg1 key:(id)arg2 comment:(id)arg3 fileFormat:(int)arg4 ;
-(void)addSplit:(id)arg1 ;
-(unsigned long long)coreAnimationTotalTime;
-(void)beginTimingGroupForMethod:(SEL)arg1 inClass:(Class)arg2 comment:(id)arg3 ;
-(void)endTimingGroup;
-(void)logToLocation:(id)arg1 key:(id)arg2 ;
-(void)logEvent:(id)arg1 comment:(id)arg2 ;
-(void)logWithFormat:(int)arg1 ;
-(NSArray *)splitTimes;
-(unsigned long long)maxSplitTimes;
-(void)setMaxSplitTimes:(unsigned long long)arg1 ;
-(void)setCoreAnimationTotalTime:(unsigned long long)arg1 ;
@end

