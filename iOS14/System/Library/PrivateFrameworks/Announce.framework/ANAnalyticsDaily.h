/*
* Generated on Thursday, January 14, 2021 at 2:29:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Announce.framework/Announce
*/

#import <libobjc.A.dylib/ANAnalyticsDailyProtocol.h>

@protocol ANAnalyticsDailyDelegate, ANRapportConnectionProvider;
@class NSBackgroundActivityScheduler;

@interface ANAnalyticsDaily : NSObject <ANAnalyticsDailyProtocol> {

	id<ANAnalyticsDailyDelegate> delegate;
	NSBackgroundActivityScheduler* _backgroundActivity;
	id<ANRapportConnectionProvider> _rapportConnection;

}

@property (nonatomic,readonly) NSBackgroundActivityScheduler * backgroundActivity;              //@synthesize backgroundActivity=_backgroundActivity - In the implementation block
@property (nonatomic,readonly) id<ANRapportConnectionProvider> rapportConnection;               //@synthesize rapportConnection=_rapportConnection - In the implementation block
@property (assign,nonatomic,__weak) id<ANAnalyticsDailyDelegate> delegate; 
-(id)init;
-(id<ANAnalyticsDailyDelegate>)delegate;
-(void)start;
-(NSBackgroundActivityScheduler *)backgroundActivity;
-(void)setDelegate:(id<ANAnalyticsDailyDelegate>)arg1 ;
-(void)announcementSent:(id)arg1 inHome:(id)arg2 ;
-(void)_registerRapportDailyRequest;
-(void)_recordExecutionTime;
-(void)_executeBackgroundActivity;
-(id)_collectPayload;
-(void)_collectForAnnounce:(id)arg1 ;
-(void)_collectForHome:(id)arg1 homes:(id)arg2 ;
-(void)_collectForAnnouncementsInHome:(id)arg1 ;
-(BOOL)_isCoordinationDevice;
-(id<ANRapportConnectionProvider>)rapportConnection;
-(BOOL)isDeviceElectedOutOf:(id)arg1 ;
-(void)_resetDailyAnnouncements;
-(id)_dailyResponse;
@end

