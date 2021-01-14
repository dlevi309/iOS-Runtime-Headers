/*
* Generated on Thursday, January 14, 2021 at 2:27:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppNotificationsLoggingClient.framework/AppNotificationsLoggingClient
*/

#import <libobjc.A.dylib/ATXNotificationsLoggingProtocol.h>

@class NSXPCConnection, ATXNotificationsAggregateLogger;

@interface ATXNotificationsLoggingClient : NSObject <ATXNotificationsLoggingProtocol> {

	NSXPCConnection* _xpcConnection;
	ATXNotificationsAggregateLogger* _logger;

}
+(id)sharedInstance;
-(void)logSuggestionDeduped:(id)arg1 timestamp:(id)arg2 ;
-(void)logNotification:(id)arg1 withNotificationId:(id)arg2 timestamp:(id)arg3 ;
-(void)shouldMakePromotingSuggestionForBundleId:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)logTapCoalesceForNotificationId:(id)arg1 andBundleId:(id)arg2 timestamp:(id)arg3 ;
-(void)shouldMakeQuietingSuggestionForBundleId:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(id)init;
-(void)submitGrading:(id)arg1 rating:(id)arg2 category:(id)arg3 userId:(id)arg4 ;
-(void)logEvent:(long long)arg1 forNotificationId:(id)arg2 supplementaryAction:(id)arg3 timestamp:(id)arg4 ;
-(void)makeSuggestionForNextNotification;
-(void)promotingSuggestionResponse:(id)arg1 topic:(id)arg2 response:(long long)arg3 ;
-(void)logSuggestionShown:(id)arg1 forType:(long long)arg2 timestamp:(id)arg3 ;
-(void)quietingSuggestionResponse:(id)arg1 topic:(id)arg2 response:(long long)arg3 ;
-(void)logRealTimeTuningOutcome:(unsigned long long)arg1 withBundleId:(id)arg2 ;
-(void)getAppUsageDataFromStartDate:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)makeQuietingSuggestionForNextNotification;
-(void)logEvent:(long long)arg1 forNotificationId:(id)arg2 timestamp:(id)arg3 withReply:(/*^block*/id)arg4 ;
-(void)makePromotingSuggestionForNextNotification;
-(void)dealloc;
-(void)logEvent:(long long)arg1 forNotificationId:(id)arg2 timestamp:(id)arg3 ;
-(void)logRealTimeTuningCountFrom:(unsigned long long)arg1 ;
@end

