/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@protocol OS_dispatch_queue;
@class NSObject, NSString, NSHashTable, NSMapTable;

@interface MPAssistantAnalyticsReportingController : NSObject {

	NSObject*<OS_dispatch_queue> _eventQueue;
	NSString* _lastSiriReferenceIdentifierForPlaybackStart;
	NSString* _lastSiriReferenceIdentifierForWillReload;
	NSString* _lastSiriReferenceIdentifierWithLikelyToKeepUp;
	NSHashTable* _players;
	NSMapTable* _playerToObservedTimebase;

}
+(id)sharedController;
-(id)_init;
-(void)_itemDidChangeNotification:(id)arg1 ;
-(void)_bufferingStateDidChangeNotification:(id)arg1 ;
-(void)registerPlayer:(id)arg1 ;
-(void)unregisterPlayer:(id)arg1 ;
-(void)logAssistantEvent:(id)arg1 withTimestamp:(unsigned long long)arg2 ;
-(void)_itemTimebaseDidChangeNotification:(id)arg1 ;
-(void)_willReloadWithPlaybackContextNotification:(id)arg1 ;
-(void)_attemptLikelyToKeepUpReportingEventWithPlayer:(id)arg1 ;
-(void)_attemptPlaybackStartReportingEventWithPlayer:(id)arg1 ;
-(id)_createContextDictionaryWithSiriReferenceIdentifier:(id)arg1 siriWHAMetricsInfo:(id)arg2 ;
-(void)_timebaseEffectiveRateChangedNotification;
@end

