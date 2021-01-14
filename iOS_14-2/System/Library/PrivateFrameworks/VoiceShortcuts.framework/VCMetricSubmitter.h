/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
*/


@protocol VCDatabaseProvider;
@class WFMetricStatusEvent, VCMetricCheckIn;

@interface VCMetricSubmitter : NSObject {

	WFMetricStatusEvent* _event;
	VCMetricCheckIn* _checkIn;
	id<VCDatabaseProvider> _databaseProvider;

}

@property (nonatomic,readonly) VCMetricCheckIn * checkIn;                            //@synthesize checkIn=_checkIn - In the implementation block
@property (nonatomic,readonly) id<VCDatabaseProvider> databaseProvider;              //@synthesize databaseProvider=_databaseProvider - In the implementation block
@property (nonatomic,readonly) WFMetricStatusEvent * event;                          //@synthesize event=_event - In the implementation block
+(id)activityIdentifier;
+(void)scheduleWithDatabaseProvider:(id)arg1 ;
+(void)scheduleWithScheduler:(id)arg1 databaseProvider:(id)arg2 ;
+(void)performWithDatabaseProvider:(id)arg1 ;
-(VCMetricCheckIn *)checkIn;
-(id)initWithDatabaseProvider:(id)arg1 ;
-(void)perform;
-(id<VCDatabaseProvider>)databaseProvider;
-(WFMetricStatusEvent *)event;
-(BOOL)isAppInstalled;
-(id)initWithCheckIn:(id)arg1 event:(id)arg2 databaseProvider:(id)arg3 ;
-(BOOL)isSharingEnabled;
-(BOOL)isSleepEnabled;
-(BOOL)personalAutomationsPresent:(id)arg1 ;
-(BOOL)homeAutomationsPresent:(id*)arg1 ;
-(unsigned)averageShortcutCountPerFolder:(id)arg1 ;
-(unsigned)shortcutsCount:(id)arg1 ;
-(unsigned)uncategorizedShortcutCount:(id)arg1 ;
-(unsigned)watchShortcutCount:(id)arg1 ;
-(unsigned)folderCount:(id)arg1 ;
-(unsigned)numberOfPersonalAutomationsEnabled:(id)arg1 ;
-(BOOL)addAutomationSuggestionMetricsToEvent:(id)arg1 database:(id)arg2 error:(id*)arg3 ;
-(unsigned)numberOfShortcutRuns:(id)arg1 ;
-(unsigned)numberOfAppSessions:(id*)arg1 ;
-(unsigned)sleepShortcutCount:(id)arg1 ;
-(BOOL)addWidgetMetricsToEvent:(id)arg1 error:(id*)arg2 ;
@end

