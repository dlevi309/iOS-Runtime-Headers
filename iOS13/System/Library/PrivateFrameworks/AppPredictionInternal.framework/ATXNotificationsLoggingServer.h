/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/

#import <libobjc.A.dylib/ATXNotificationsLoggingProtocol.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/UNUserNotificationCenterDelegate.h>

@protocol _CDLocalContext, _DKKnowledgeSaving_DKKnowledgeDeleting;
@class ATXNotificationsRecorderPermanentStore, ATXNotificationsSuggestion, _ATXAggregateLogger, ATXNotificationContextManager, ATXBBNotificationManager, NSMutableSet, ATXNotificationsDedupeTracker, NSXPCListener, NSString;

@interface ATXNotificationsLoggingServer : NSObject <ATXNotificationsLoggingProtocol, NSXPCListenerDelegate, UNUserNotificationCenterDelegate> {

	ATXNotificationsRecorderPermanentStore* _recorder;
	ATXNotificationsSuggestion* _quietingsuggester;
	ATXNotificationsSuggestion* _promotesuggester;
	ATXNotificationsSuggestion* _rttOutcomeLogger;
	_ATXAggregateLogger* _aggdlogger;
	ATXNotificationContextManager* _contextmanager;
	ATXBBNotificationManager* _bbNotificationManager;
	NSMutableSet* _registrations;
	id<_CDLocalContext> _context;
	ATXNotificationsDedupeTracker* _dedupetracker;
	id<_DKKnowledgeSaving><_DKKnowledgeDeleting> _duetstorer;
	NSXPCListener* _listener;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)logNotification:(id)arg1 withNotificationId:(id)arg2 timestamp:(id)arg3 ;
-(void)logEvent:(long long)arg1 forNotificationId:(id)arg2 timestamp:(id)arg3 withReply:(/*^block*/id)arg4 ;
-(void)logEvent:(long long)arg1 forNotificationId:(id)arg2 supplementaryAction:(id)arg3 timestamp:(id)arg4 ;
-(void)logTapCoalesceForNotificationId:(id)arg1 andBundleId:(id)arg2 timestamp:(id)arg3 ;
-(void)shouldMakeQuietingSuggestionForBundleId:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)quietingSuggestionResponse:(id)arg1 topic:(id)arg2 response:(long long)arg3 ;
-(void)shouldMakePromotingSuggestionForBundleId:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)promotingSuggestionResponse:(id)arg1 topic:(id)arg2 response:(long long)arg3 ;
-(void)makeQuietingSuggestionForNextNotification;
-(void)makePromotingSuggestionForNextNotification;
-(void)makeSuggestionForNextNotification;
-(void)logSuggestionShown:(id)arg1 forType:(long long)arg2 timestamp:(id)arg3 ;
-(void)logSuggestionDeduped:(id)arg1 timestamp:(id)arg2 ;
-(void)logRealTimeTuningOutcome:(unsigned long long)arg1 withBundleId:(id)arg2 ;
-(void)submitGrading:(id)arg1 rating:(id)arg2 category:(id)arg3 userId:(id)arg4 ;
-(void)registerForAppChange;
-(void)resetNotificationsHistory;
-(void)resetSuggestionResponses;
-(id)getLockscreenBundleIds;
-(void)logNotificationWithMetadata:(id)arg1 withNotificationId:(id)arg2 timestamp:(id)arg3 ;
-(void)logNotificationToCoreDuet:(id)arg1 withNotificationId:(id)arg2 timestamp:(id)arg3 ;
-(void)logEventToCoreDuet:(long long)arg1 forNotificationId:(id)arg2 timestamp:(id)arg3 ;
-(void)logAppLaunchEvent:(id)arg1 timestamp:(id)arg2 ;
-(void)triggerReplay:(/*^block*/id)arg1 ;
-(id)getSuggestionResponses;
-(void)logToCoreDuet:(id)arg1 identifier:(id)arg2 timestamp:(id)arg3 ;
-(id)getDuetMetadataFromNotification:(id)arg1 metadata:(id)arg2 ;
-(id)getDuetStream;
-(id)duetValueType;
-(id)createMetadataForSuggestion:(id)arg1 andType:(long long)arg2 ;
@end

