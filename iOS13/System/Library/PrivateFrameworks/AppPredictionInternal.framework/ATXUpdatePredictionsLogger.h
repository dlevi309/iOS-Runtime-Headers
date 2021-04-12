/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@protocol ATXPETEventTracker2Protocol;
@class NSUserDefaults, NSDate;

@interface ATXUpdatePredictionsLogger : NSObject {

	NSUserDefaults* _userDefaults;
	id<ATXPETEventTracker2Protocol> _petLogger;
	NSDate* _now;

}

@property (nonatomic,retain) NSDate * now;              //@synthesize now=_now - In the implementation block
-(id)init;
-(NSDate *)now;
-(void)setNow:(NSDate *)arg1 ;
-(id)_lastLogDate;
-(id)initWithUserDefaults:(id)arg1 petLogger:(id)arg2 ;
-(void)countPredictionUpdateWithReason:(unsigned long long)arg1 client:(unsigned long long)arg2 ;
-(void)flushCountedPredictionUpdatesToLogger;
-(void)_logPredictionUpdatesForClient:(unsigned long long)arg1 lastLogDate:(id)arg2 now:(id)arg3 ;
-(id)_countDictionaryDefaultsKeyForClient:(unsigned long long)arg1 ;
-(id)_countDictionaryForClient:(unsigned long long)arg1 ;
-(void)_incrementCountInDictionary:(id)arg1 forTriggerType:(int)arg2 ;
-(void)_setCountDictionary:(id)arg1 forClient:(unsigned long long)arg2 ;
-(void)_resetCountDictionariesForAllClients;
-(double)_normalizeCountPer24HoursWithStartDate:(id)arg1 endDate:(id)arg2 count:(unsigned long long)arg3 ;
-(void)_setLastLogDate:(id)arg1 ;
-(id)_protobufForTriggerType:(int)arg1 client:(unsigned long long)arg2 ;
-(int)_triggerTypeForUpdatePredictionsReason:(unsigned long long)arg1 ;
-(int)_clientTypeForUpdatePredictionsClient:(unsigned long long)arg1 ;
-(id)_stringForATXUpdatePredictionsClient:(unsigned long long)arg1 ;
@end

