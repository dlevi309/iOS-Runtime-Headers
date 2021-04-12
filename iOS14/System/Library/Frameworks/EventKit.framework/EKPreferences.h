/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/


@class CalPreferences, NSArray;

@interface EKPreferences : NSObject {

	CalPreferences* _preferences;

}

@property (assign,nonatomic) double travelEngineThrottlePeriod; 
@property (assign,nonatomic) BOOL refiringReminderAlarmsEnabled; 
@property (assign,nonatomic) BOOL useShortReminderSnoozeInterval; 
@property (assign,nonatomic) BOOL useShortReminderRefireInterval; 
@property (assign,nonatomic) BOOL alwaysSetArrivedAndSettledForReminders; 
@property (assign,nonatomic) unsigned long long lastConfirmedSplashScreenVersion; 
@property (readonly) BOOL bypassSplashScreen; 
@property (assign,nonatomic) BOOL showDeclinedEvents; 
@property (assign,nonatomic) BOOL alertInviteeDeclines; 
@property (nonatomic,readonly) NSArray * deselectedCalendarIdentifiers; 
@property (nonatomic,readonly) NSArray * deselectedCalendarSyncHashes; 
@property (nonatomic,readonly) NSArray * deselectedCalendarSyncIdentifiers; 
@property (nonatomic,retain) NSArray * selectedCalendarIdentifiers; 
+(id)shared;
-(void)setDeselectedCalendars:(id)arg1 ;
-(id)init;
-(BOOL)refiringReminderAlarmsEnabled;
-(void)setUseShortReminderSnoozeInterval:(BOOL)arg1 ;
-(void)_setDeselectedCalendarSyncIdentifiers:(id)arg1 ;
-(BOOL)showDeclinedEvents;
-(void)_setDeselectedCalendarIdentifiers:(id)arg1 ;
-(void)setShowDeclinedEvents:(BOOL)arg1 ;
-(NSArray *)selectedCalendarIdentifiers;
-(void)setLastConfirmedSplashScreenVersion:(unsigned long long)arg1 ;
-(BOOL)useShortReminderRefireInterval;
-(void)setUseShortReminderRefireInterval:(BOOL)arg1 ;
-(void)setRefiringReminderAlarmsEnabled:(BOOL)arg1 ;
-(void)setTravelEngineThrottlePeriod:(double)arg1 ;
-(void)setAlwaysSetArrivedAndSettledForReminders:(BOOL)arg1 ;
-(NSArray *)deselectedCalendarSyncHashes;
-(void)setAlertInviteeDeclines:(BOOL)arg1 ;
-(void)setSelectedCalendarIdentifiers:(NSArray *)arg1 ;
-(BOOL)alwaysSetArrivedAndSettledForReminders;
-(double)travelEngineThrottlePeriod;
-(BOOL)useShortReminderSnoozeInterval;
-(NSArray *)deselectedCalendarSyncIdentifiers;
-(NSArray *)deselectedCalendarIdentifiers;
-(BOOL)alertInviteeDeclines;
-(void)_setDeselectedCalendars_iOS:(id)arg1 ;
-(void)_setDeselectedCalendarSyncHashes:(id)arg1 ;
-(BOOL)bypassSplashScreen;
-(unsigned long long)lastConfirmedSplashScreenVersion;
@end

