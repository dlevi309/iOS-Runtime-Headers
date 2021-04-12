/*
* Generated on Monday, March 1, 2021 at 2:33:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@protocol ATXCachedTransitionPredictorProtocol, ATXTransitionPredictorProtocol, ATXContextStoreWriterProtocol;
@class NSDateFormatter, NSDate;

@interface ATXDailyRoutinesTriggerManager : NSObject {

	NSDateFormatter* _dateFormatter;
	id<ATXCachedTransitionPredictorProtocol> _cachedPredictor;
	id<ATXTransitionPredictorProtocol> _transitionPredictor;
	id<ATXContextStoreWriterProtocol> _contextStoreWriter;
	NSDate* _now;

}

@property (nonatomic,retain) NSDate * now;              //@synthesize now=_now - In the implementation block
+(id)sharedInstance;
+(id)_wakeupDateForExitDate:(id)arg1 fromDate:(id)arg2 ;
+(id)convenienceDateFormatter;
-(id)init;
-(NSDate *)now;
-(void)setNow:(NSDate *)arg1 ;
-(id)initWithCacheBasedPredictor:(id)arg1 transitionPredictor:(id)arg2 contextStoreWriter:(id)arg3 ;
-(void)updateWithActivity:(id)arg1 ;
-(void)_scheduleOneShotJobAfterInterval:(double)arg1 ;
@end

