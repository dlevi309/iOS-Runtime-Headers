/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsSupport.framework/DiagnosticsSupport
*/


#import <DiagnosticsSupport/DiagnosticsSupport-Structs.h>
@class NSDate, NSMutableArray, NSCondition;

@interface DSCallStatisticsAggregator : NSObject {

	SCD_Struct_DS4 _totals;
	SCD_Struct_DS4 _accumulated;
	BOOL _futureDateDetected;
	BOOL _outOfOrderDateDetected;
	BOOL _generationComplete;
	BOOL _cancelled;
	NSDate* _referenceDate;
	NSMutableArray* _callLog;
	NSCondition* _generationLock;
	long long _missingDaysRemaining;

}

@property (assign,nonatomic) BOOL futureDateDetected;                        //@synthesize futureDateDetected=_futureDateDetected - In the implementation block
@property (assign,nonatomic) BOOL outOfOrderDateDetected;                    //@synthesize outOfOrderDateDetected=_outOfOrderDateDetected - In the implementation block
@property (nonatomic,readonly) NSDate * referenceDate;                       //@synthesize referenceDate=_referenceDate - In the implementation block
@property (nonatomic,retain) NSMutableArray * callLog;                       //@synthesize callLog=_callLog - In the implementation block
@property (nonatomic,retain) NSCondition * generationLock;                   //@synthesize generationLock=_generationLock - In the implementation block
@property (assign,nonatomic) BOOL generationComplete;                        //@synthesize generationComplete=_generationComplete - In the implementation block
@property (assign,getter=isCancelled,nonatomic) BOOL cancelled;              //@synthesize cancelled=_cancelled - In the implementation block
@property (assign,nonatomic) long long missingDaysRemaining;                 //@synthesize missingDaysRemaining=_missingDaysRemaining - In the implementation block
-(void)setCancelled:(BOOL)arg1 ;
-(id)init;
-(NSDate *)referenceDate;
-(NSMutableArray *)callLog;
-(void)cancel;
-(BOOL)isCancelled;
-(NSCondition *)generationLock;
-(void)setGenerationComplete:(BOOL)arg1 ;
-(id)_getAndValidateDateFromLogLine:(id)arg1 ;
-(long long)_getDaysBetween:(id)arg1 and:(id)arg2 ;
-(void)setOutOfOrderDateDetected:(BOOL)arg1 ;
-(void)_flushAccumulatedLogDataWithDate:(id)arg1 ;
-(void)_fillCallLogWithMissingDays:(long long)arg1 fromDate:(id)arg2 ;
-(BOOL)generationComplete;
-(BOOL)futureDateDetected;
-(BOOL)outOfOrderDateDetected;
-(void)setFutureDateDetected:(BOOL)arg1 ;
-(BOOL)_isDateInRange:(id)arg1 ;
-(long long)missingDaysRemaining;
-(void)setMissingDaysRemaining:(long long)arg1 ;
-(void)_resetAccumulator;
-(void)beginAggregation;
-(id)getSynchronousResult;
-(void)setCallLog:(NSMutableArray *)arg1 ;
-(void)setGenerationLock:(NSCondition *)arg1 ;
@end

