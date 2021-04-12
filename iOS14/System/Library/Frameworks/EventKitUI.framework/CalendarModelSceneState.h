/*
* Generated on Thursday, January 14, 2021 at 2:23:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/


@interface CalendarModelSceneState : NSObject {

	BOOL _showDayAsList;
	BOOL _showMonthAsDivided;
	int _dayViewFirstVisibleSecond;
	double _dayViewHourScale;
	double _weekViewHourScale;
	long long _weekViewFirstVisibleSecond;
	long long _lastUsedNonYearView;

}

@property (assign,nonatomic) BOOL showDayAsList;                                //@synthesize showDayAsList=_showDayAsList - In the implementation block
@property (assign,nonatomic) BOOL showMonthAsDivided;                           //@synthesize showMonthAsDivided=_showMonthAsDivided - In the implementation block
@property (assign,nonatomic) double dayViewHourScale;                           //@synthesize dayViewHourScale=_dayViewHourScale - In the implementation block
@property (assign,nonatomic) double weekViewHourScale;                          //@synthesize weekViewHourScale=_weekViewHourScale - In the implementation block
@property (assign,nonatomic) int dayViewFirstVisibleSecond;                     //@synthesize dayViewFirstVisibleSecond=_dayViewFirstVisibleSecond - In the implementation block
@property (assign,nonatomic) long long weekViewFirstVisibleSecond;              //@synthesize weekViewFirstVisibleSecond=_weekViewFirstVisibleSecond - In the implementation block
@property (assign,nonatomic) long long lastUsedNonYearView;                     //@synthesize lastUsedNonYearView=_lastUsedNonYearView - In the implementation block
-(id)init;
-(BOOL)showDayAsList;
-(int)dayViewFirstVisibleSecond;
-(long long)weekViewFirstVisibleSecond;
-(void)setWeekViewFirstVisibleSecond:(long long)arg1 ;
-(long long)lastUsedNonYearView;
-(void)setLastUsedNonYearView:(long long)arg1 ;
-(void)setWeekViewHourScale:(double)arg1 ;
-(void)setShowDayAsList:(BOOL)arg1 ;
-(double)weekViewHourScale;
-(BOOL)showMonthAsDivided;
-(void)setDayViewFirstVisibleSecond:(int)arg1 ;
-(void)setDayViewHourScale:(double)arg1 ;
-(void)setShowMonthAsDivided:(BOOL)arg1 ;
-(double)dayViewHourScale;
@end

