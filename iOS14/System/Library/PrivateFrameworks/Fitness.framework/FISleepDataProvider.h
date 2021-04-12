/*
* Generated on Thursday, January 14, 2021 at 2:27:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Fitness.framework/Fitness
*/

#import <Fitness/Fitness-Structs.h>
#import <libobjc.A.dylib/HKSPSleepStoreObserver.h>

@protocol FISleepDataProviderDelegate;
@class HKSPSleepStore, FISleepUserDay, NSDate, NSString;

@interface FISleepDataProvider : NSObject <HKSPSleepStoreObserver> {

	HKSPSleepStore* _sleepStore;
	id<FISleepDataProviderDelegate> _delegate;
	os_unfair_lock_s _lock;
	FISleepUserDay* _sleepUserDay;
	NSDate* _lastGoodMorningDismissedDate;

}

@property (nonatomic,retain) FISleepUserDay * sleepUserDay;                      //@synthesize sleepUserDay=_sleepUserDay - In the implementation block
@property (nonatomic,retain) NSDate * lastGoodMorningDismissedDate;              //@synthesize lastGoodMorningDismissedDate=_lastGoodMorningDismissedDate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)sleepStore:(id)arg1 sleepScheduleDidChange:(id)arg2 ;
-(void)sleepStore:(id)arg1 sleepScheduleStateDidChange:(unsigned long long)arg2 ;
-(void)sleepStore:(id)arg1 sleepModeOnDidChange:(BOOL)arg2 ;
-(void)sleepStore:(id)arg1 sleepEventRecordDidChange:(id)arg2 ;
-(void)sleepStore:(id)arg1 sleepSettingsDidChange:(id)arg2 ;
-(void)dealloc;
-(void)_fetchLastGoodMorningDismissedDate;
-(void)_updateSleepUserDay;
-(void)_clearSleepUserDay;
-(BOOL)isDate:(id)arg1 within24HoursOfDate:(id)arg2 ;
-(void)_updateSleepUserDayFromWakeUp:(id)arg1 currentDate:(id)arg2 ;
-(void)_updateSleepUserDayFromWindDownOrBedtime:(id)arg1 currentDate:(id)arg2 ;
-(void)_setSleepUserDayWithStartOfDay:(id)arg1 endOfDay:(id)arg2 ;
-(BOOL)_updateLastGoodMorningDismissedDateIfNeeded:(id)arg1 ;
-(id)initWithSleepStore:(id)arg1 delegate:(id)arg2 ;
-(FISleepUserDay *)sleepUserDay;
-(NSDate *)lastGoodMorningDismissedDate;
-(void)setSleepUserDay:(FISleepUserDay *)arg1 ;
-(void)setLastGoodMorningDismissedDate:(NSDate *)arg1 ;
@end

