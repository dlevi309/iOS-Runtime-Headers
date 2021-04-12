/*
* Generated on Monday, March 1, 2021 at 2:33:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
*/

#import <SignpostSupport/SignpostSupport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableSet, SignpostCAIntervalAggregationStats;

@interface SignpostCAProcessStallAggregation : NSObject <NSCopying> {

	BOOL _isSystemAggregation;
	NSString* _processName;
	NSString* _processExecutablePath;
	NSMutableSet* _pids;
	SignpostCAIntervalAggregationStats* _longCommitStats;
	SignpostCAIntervalAggregationStats* _longTransactionLifetimeStats;
	SignpostCAIntervalAggregationStats* _longHIDLatencyStats;
	SignpostCAIntervalAggregationStats* _longFrameLatencyStats;
	SignpostCAIntervalAggregationStats* _longRenderForTimeStats;
	SignpostCAIntervalAggregationStats* _longFrameLifetimeStats;
	SignpostCAIntervalAggregationStats* _longResponsibleFrameLifetimeStats;
	SignpostCAIntervalAggregationStats* _glitchStats;
	SignpostCAIntervalAggregationStats* _responsibleGlitchStats;
	SignpostCAIntervalAggregationStats* _firstFrameGlitchStats;
	SignpostCAIntervalAggregationStats* _responsibleFirstFrameGlitchStats;

}

@property (nonatomic,readonly) BOOL isSystemAggregation;                                                            //@synthesize isSystemAggregation=_isSystemAggregation - In the implementation block
@property (nonatomic,readonly) NSString * processName;                                                              //@synthesize processName=_processName - In the implementation block
@property (nonatomic,readonly) NSString * processExecutablePath;                                                    //@synthesize processExecutablePath=_processExecutablePath - In the implementation block
@property (nonatomic,readonly) NSMutableSet * pids;                                                                 //@synthesize pids=_pids - In the implementation block
@property (nonatomic,readonly) SignpostCAIntervalAggregationStats * longCommitStats;                                //@synthesize longCommitStats=_longCommitStats - In the implementation block
@property (nonatomic,readonly) SignpostCAIntervalAggregationStats * longTransactionLifetimeStats;                   //@synthesize longTransactionLifetimeStats=_longTransactionLifetimeStats - In the implementation block
@property (nonatomic,readonly) SignpostCAIntervalAggregationStats * longHIDLatencyStats;                            //@synthesize longHIDLatencyStats=_longHIDLatencyStats - In the implementation block
@property (nonatomic,readonly) SignpostCAIntervalAggregationStats * longFrameLatencyStats;                          //@synthesize longFrameLatencyStats=_longFrameLatencyStats - In the implementation block
@property (nonatomic,readonly) SignpostCAIntervalAggregationStats * longRenderForTimeStats;                         //@synthesize longRenderForTimeStats=_longRenderForTimeStats - In the implementation block
@property (nonatomic,readonly) SignpostCAIntervalAggregationStats * longFrameLifetimeStats;                         //@synthesize longFrameLifetimeStats=_longFrameLifetimeStats - In the implementation block
@property (nonatomic,readonly) SignpostCAIntervalAggregationStats * longResponsibleFrameLifetimeStats;              //@synthesize longResponsibleFrameLifetimeStats=_longResponsibleFrameLifetimeStats - In the implementation block
@property (nonatomic,readonly) SignpostCAIntervalAggregationStats * glitchStats;                                    //@synthesize glitchStats=_glitchStats - In the implementation block
@property (nonatomic,readonly) SignpostCAIntervalAggregationStats * responsibleGlitchStats;                         //@synthesize responsibleGlitchStats=_responsibleGlitchStats - In the implementation block
@property (nonatomic,readonly) SignpostCAIntervalAggregationStats * firstFrameGlitchStats;                          //@synthesize firstFrameGlitchStats=_firstFrameGlitchStats - In the implementation block
@property (nonatomic,readonly) SignpostCAIntervalAggregationStats * responsibleFirstFrameGlitchStats;               //@synthesize responsibleFirstFrameGlitchStats=_responsibleFirstFrameGlitchStats - In the implementation block
-(id)description;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)processName;
-(id)_statsForType:(unsigned char)arg1 initIfMissing:(BOOL)arg2 ;
-(void)_iterateTypeStatsWithBlock:(/*^block*/id)arg1 ;
-(NSString *)processExecutablePath;
-(NSMutableSet *)pids;
-(BOOL)isSystemAggregation;
-(SignpostCAIntervalAggregationStats *)longCommitStats;
-(SignpostCAIntervalAggregationStats *)longHIDLatencyStats;
-(SignpostCAIntervalAggregationStats *)longFrameLatencyStats;
-(SignpostCAIntervalAggregationStats *)longRenderForTimeStats;
-(SignpostCAIntervalAggregationStats *)longTransactionLifetimeStats;
-(SignpostCAIntervalAggregationStats *)longFrameLifetimeStats;
-(SignpostCAIntervalAggregationStats *)longResponsibleFrameLifetimeStats;
-(SignpostCAIntervalAggregationStats *)glitchStats;
-(SignpostCAIntervalAggregationStats *)responsibleGlitchStats;
-(SignpostCAIntervalAggregationStats *)firstFrameGlitchStats;
-(SignpostCAIntervalAggregationStats *)responsibleFirstFrameGlitchStats;
-(unsigned long long)_totalStallDurationNs;
-(id)_initAsSystemAggregation;
-(id)_initWithProcessExecutablePath:(id)arg1 pid:(int)arg2 ;
-(void)_addDuration:(unsigned long long)arg1 ofType:(unsigned char)arg2 ;
-(void)_addOtherProcessStallAggregation:(id)arg1 ;
@end

