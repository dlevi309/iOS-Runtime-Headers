/*
* Generated on Thursday, January 14, 2021 at 2:25:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActivityAchievements.framework/ActivityAchievements
*/


@class NSCalendar, NSDate, NSString;

@interface ACHVisibilityEvaluator : NSObject {

	NSCalendar* _calendar;
	NSDate* _injectedNow;
	NSString* _injectedWatchCountryCode;

}

@property (nonatomic,retain) NSCalendar * calendar;                            //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,retain) NSDate * injectedNow;                             //@synthesize injectedNow=_injectedNow - In the implementation block
@property (nonatomic,retain) NSString * injectedWatchCountryCode;              //@synthesize injectedWatchCountryCode=_injectedWatchCountryCode - In the implementation block
-(void)setCalendar:(NSCalendar *)arg1 ;
-(id)init;
-(NSCalendar *)calendar;
-(BOOL)unearnedAchievementIsVisibleNow:(id)arg1 activityMoveMode:(long long)arg2 experienceType:(unsigned long long)arg3 ;
-(NSDate *)injectedNow;
-(NSString *)injectedWatchCountryCode;
-(void)setInjectedNow:(NSDate *)arg1 ;
-(void)setInjectedWatchCountryCode:(NSString *)arg1 ;
-(BOOL)unearnedAchievementIsVisibleNow:(id)arg1 ;
-(BOOL)unearnedAchievementIsVisibleNow:(id)arg1 activityMoveMode:(long long)arg2 ;
-(void)_injectNow:(id)arg1 ;
-(void)_injectWatchCountryCode:(id)arg1 ;
@end

