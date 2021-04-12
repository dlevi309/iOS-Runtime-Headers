/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
*/


@protocol VCDatabaseProvider;
@class VCDailyMetricCheckIn, WFDailyStatusEvent;

@interface VCDailyMetricSubmitter : NSObject {

	VCDailyMetricCheckIn* _dailyCheckIn;
	WFDailyStatusEvent* _event;
	id<VCDatabaseProvider> _databaseProvider;

}

@property (nonatomic,readonly) VCDailyMetricCheckIn * dailyCheckIn;                  //@synthesize dailyCheckIn=_dailyCheckIn - In the implementation block
@property (nonatomic,readonly) WFDailyStatusEvent * event;                           //@synthesize event=_event - In the implementation block
@property (nonatomic,readonly) id<VCDatabaseProvider> databaseProvider;              //@synthesize databaseProvider=_databaseProvider - In the implementation block
+(void)scheduleWithDatabaseProvider:(id)arg1 ;
+(void)scheduleWithScheduler:(id)arg1 databaseProvider:(id)arg2 ;
+(void)performWithDatabaseProvider:(id)arg1 ;
-(WFDailyStatusEvent *)event;
-(void)perform;
-(BOOL)isAppInstalled;
-(id)initWithDatabaseProvider:(id)arg1 ;
-(id<VCDatabaseProvider>)databaseProvider;
-(BOOL)isSharingEnabled;
-(id)initWithDailyCheckIn:(id)arg1 event:(id)arg2 databaseProvider:(id)arg3 ;
-(BOOL)personalAutomationsPresent:(id*)arg1 ;
-(BOOL)homeAutomationsPresent:(id*)arg1 ;
-(VCDailyMetricCheckIn *)dailyCheckIn;
@end

