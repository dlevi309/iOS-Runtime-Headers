/*
* Generated on Monday, March 1, 2021 at 2:34:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(NSCalendar *)calendar;
-(void)setCalendar:(NSCalendar *)arg1 ;
-(NSDate *)injectedNow;
-(NSString *)injectedWatchCountryCode;
-(void)setInjectedNow:(NSDate *)arg1 ;
-(void)setInjectedWatchCountryCode:(NSString *)arg1 ;
-(BOOL)unearnedAchievementIsVisibleNow:(id)arg1 ;
-(void)_injectNow:(id)arg1 ;
-(void)_injectWatchCountryCode:(id)arg1 ;
@end

