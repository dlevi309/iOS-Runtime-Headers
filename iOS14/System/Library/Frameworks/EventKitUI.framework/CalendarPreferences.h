/*
* Generated on Thursday, January 14, 2021 at 2:23:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/


@class CalPreferences, NSArray, NSNumber, NSString, NSDate;

@interface CalendarPreferences : NSObject {

	CalPreferences* _preferences;
	BOOL _drawDebugViewColors;

}

@property (assign,nonatomic) BOOL showWeekNumbers; 
@property (assign,nonatomic) BOOL weekViewStartsOnToday; 
@property (assign,nonatomic) BOOL showListView; 
@property (assign,nonatomic) BOOL showMonthDividedListView; 
@property (assign,nonatomic) BOOL viewedTimeZoneAutomatic; 
@property (assign,nonatomic) BOOL requestSyncOnApplicationLaunch; 
@property (assign,nonatomic) BOOL drawDebugViewColors;                                                       //@synthesize drawDebugViewColors=_drawDebugViewColors - In the implementation block
@property (assign,nonatomic) BOOL immediateAlarmCreation; 
@property (assign,nonatomic) BOOL showEventsInPhoneMonthView; 
@property (assign,nonatomic) BOOL showExperimentalUI; 
@property (assign,nonatomic) BOOL showDetailedListView; 
@property (assign,nonatomic) BOOL disableContinuity; 
@property (assign,nonatomic) BOOL swipeToDeleteEnabled; 
@property (assign,nonatomic) BOOL largeListViewDisclosingEventDetails; 
@property (assign,nonatomic) BOOL showWindowDebugButton; 
@property (assign,getter=isShortResumeToTodayTimeout,nonatomic) BOOL shortResumeToTodayTimeout; 
@property (assign,nonatomic) BOOL hideInlineDayViewInEventDetails; 
@property (assign,nonatomic) BOOL disableTodayPushes; 
@property (assign,nonatomic) BOOL enableAvatars; 
@property (assign,nonatomic) BOOL enableMultiwindowAsserts; 
@property (assign,nonatomic) unsigned long long promptForCommentWhenDeclining; 
@property (assign,nonatomic) unsigned long long debugOccurrenceViewIconOverload; 
@property (nonatomic,retain) NSArray * calendarUUIDsExcludedFromNotifications; 
@property (nonatomic,retain) NSNumber * weekStart; 
@property (nonatomic,retain) NSNumber * lastSuspendTime; 
@property (nonatomic,retain) NSNumber * lastViewedDate; 
@property (nonatomic,retain) NSNumber * lastViewMode; 
@property (nonatomic,retain) NSNumber * lastSidebarMode; 
@property (nonatomic,retain) NSNumber * dayViewHourScale; 
@property (nonatomic,retain) NSNumber * weekViewHourScale; 
@property (nonatomic,retain) NSString * sourceIdentifierForSelectedIdentity; 
@property (nonatomic,retain) NSString * searchString; 
@property (nonatomic,retain) NSString * overlayCalendarID; 
@property (nonatomic,retain) NSDate * simulatedCurrentDate; 
@property (nonatomic,retain) NSNumber * locationSearchResultLimit; 
@property (assign,nonatomic) BOOL eventAutocompleteEnabled; 
@property (assign,nonatomic) BOOL highColorCarplayEnabled; 
@property (nonatomic,retain) NSNumber * dayViewFirstVisibleSecond; 
@property (nonatomic,readonly) NSArray * deselectedCalendarSyncHashes; 
+(id)sharedPreferences;
-(void)setWeekStart:(NSNumber *)arg1 ;
-(void)setViewedTimeZoneAutomatic:(BOOL)arg1 ;
-(void)setDrawDebugViewColors:(BOOL)arg1 ;
-(id)init;
-(BOOL)showMonthDividedListView;
-(void)setOverlayCalendarID:(NSString *)arg1 ;
-(void)setLastViewedDate:(NSNumber *)arg1 ;
-(BOOL)requestSyncOnApplicationLaunch;
-(void)setShowMonthDividedListView:(BOOL)arg1 ;
-(BOOL)highColorCarplayEnabled;
-(void)setWeekViewStartsOnToday:(BOOL)arg1 ;
-(BOOL)showWindowDebugButton;
-(NSNumber *)lastSuspendTime;
-(void)setShowDetailedListView:(BOOL)arg1 ;
-(BOOL)disableTodayPushes;
-(BOOL)immediateAlarmCreation;
-(NSNumber *)dayViewFirstVisibleSecond;
-(void)setEnableMultiwindowAsserts:(BOOL)arg1 ;
-(void)setShortResumeToTodayTimeout:(BOOL)arg1 ;
-(void)setSimulatedCurrentDate:(NSDate *)arg1 ;
-(NSDate *)simulatedCurrentDate;
-(BOOL)showDetailedListView;
-(void)setEnableAvatars:(BOOL)arg1 ;
-(void)setShowWeekNumbers:(BOOL)arg1 ;
-(BOOL)showWeekNumbers;
-(void)setLocationSearchResultLimit:(NSNumber *)arg1 ;
-(void)setLastViewMode:(NSNumber *)arg1 ;
-(NSNumber *)lastViewMode;
-(void)setHighColorCarplayEnabled:(BOOL)arg1 ;
-(BOOL)viewedTimeZoneAutomatic;
-(NSArray *)deselectedCalendarSyncHashes;
-(void)setDisableTodayPushes:(BOOL)arg1 ;
-(void)setRequestSyncOnApplicationLaunch:(BOOL)arg1 ;
-(void)setSwipeToDeleteEnabled:(BOOL)arg1 ;
-(NSString *)overlayCalendarID;
-(BOOL)eventAutocompleteEnabled;
-(void)setShowEventsInPhoneMonthView:(BOOL)arg1 ;
-(void)setWeekViewHourScale:(NSNumber *)arg1 ;
-(void)setHideInlineDayViewInEventDetails:(BOOL)arg1 ;
-(BOOL)hideInlineDayViewInEventDetails;
-(NSNumber *)locationSearchResultLimit;
-(BOOL)enableMultiwindowAsserts;
-(BOOL)disableContinuity;
-(void)setLargeListViewDisclosingEventDetails:(BOOL)arg1 ;
-(BOOL)showEventsInPhoneMonthView;
-(BOOL)largeListViewDisclosingEventDetails;
-(void)setPromptForCommentWhenDeclining:(unsigned long long)arg1 ;
-(void)setEventAutocompleteEnabled:(BOOL)arg1 ;
-(NSArray *)calendarUUIDsExcludedFromNotifications;
-(void)setDebugOccurrenceViewIconOverload:(unsigned long long)arg1 ;
-(NSString *)sourceIdentifierForSelectedIdentity;
-(BOOL)swipeToDeleteEnabled;
-(NSNumber *)weekViewHourScale;
-(NSNumber *)lastSidebarMode;
-(void)setSourceIdentifierForSelectedIdentity:(NSString *)arg1 ;
-(void)setDisableContinuity:(BOOL)arg1 ;
-(unsigned long long)promptForCommentWhenDeclining;
-(BOOL)isShortResumeToTodayTimeout;
-(void)setLastSidebarMode:(NSNumber *)arg1 ;
-(void)setShowExperimentalUI:(BOOL)arg1 ;
-(NSNumber *)weekStart;
-(void)setSearchString:(NSString *)arg1 ;
-(unsigned long long)debugOccurrenceViewIconOverload;
-(void)setDayViewFirstVisibleSecond:(NSNumber *)arg1 ;
-(void)setCalendarUUIDsExcludedFromNotifications:(NSArray *)arg1 ;
-(BOOL)showExperimentalUI;
-(BOOL)drawDebugViewColors;
-(void)setImmediateAlarmCreation:(BOOL)arg1 ;
-(BOOL)weekViewStartsOnToday;
-(NSString *)searchString;
-(void)setLastSuspendTime:(NSNumber *)arg1 ;
-(void)setShowListView:(BOOL)arg1 ;
-(BOOL)showListView;
-(BOOL)enableAvatars;
-(NSNumber *)lastViewedDate;
-(void)setDayViewHourScale:(NSNumber *)arg1 ;
-(void)setShowWindowDebugButton:(BOOL)arg1 ;
-(NSNumber *)dayViewHourScale;
@end

