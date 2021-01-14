/*
* Generated on Thursday, January 14, 2021 at 2:22:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
*/


@class NSMutableDictionary, NSString, BKSApplicationStateMonitor;

@interface IMMessageNotificationTimeManager : NSObject {

	NSMutableDictionary* _chatsStartTimeDictionary;
	NSString* _latestIDSTokenURI;
	BKSApplicationStateMonitor* _appStateMonitor;

}

@property (nonatomic,retain) NSMutableDictionary * chatsStartTimeDictionary;              //@synthesize chatsStartTimeDictionary=_chatsStartTimeDictionary - In the implementation block
@property (nonatomic,retain) NSString * latestIDSTokenURI;                                //@synthesize latestIDSTokenURI=_latestIDSTokenURI - In the implementation block
@property (nonatomic,retain) BKSApplicationStateMonitor * appStateMonitor;                //@synthesize appStateMonitor=_appStateMonitor - In the implementation block
+(id)sharedInstance;
-(id)init;
-(NSMutableDictionary *)chatsStartTimeDictionary;
-(long long)_getTimeWindowOverride;
-(BOOL)_isToneToggleSwitchOn;
-(long long)_getToneTimeWindow;
-(void)tearDownSessionForChatIdentifier:(id)arg1 ;
-(void)setLatestIDSTokenURI:(NSString *)arg1 ;
-(BOOL)_shouldSendNotificationForChatIdentifier:(id)arg1 ;
-(NSString *)latestIDSTokenURI;
-(void)setDate:(id)arg1 forChatIdentifier:(id)arg2 ;
-(void)setLatestNotificationIDSTokenURI:(id)arg1 ;
-(void)sendNotificationMessageIfNeededForIncomingMessageFromChatIdentifier:(id)arg1 ;
-(void)acquireAssertionToUnsuspendProcess;
-(void)setChatsStartTimeDictionary:(NSMutableDictionary *)arg1 ;
-(BKSApplicationStateMonitor *)appStateMonitor;
-(void)setAppStateMonitor:(BKSApplicationStateMonitor *)arg1 ;
-(void)dealloc;
@end

