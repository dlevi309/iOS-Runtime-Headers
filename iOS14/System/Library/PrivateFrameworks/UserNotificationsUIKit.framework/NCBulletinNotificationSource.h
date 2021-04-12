/*
* Generated on Thursday, January 14, 2021 at 2:25:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
*/

#import <libobjc.A.dylib/BBObserverDelegate.h>
#import <libobjc.A.dylib/NCNotificationDispatcherSourceDelegate.h>
#import <libobjc.A.dylib/NCNotificationSource.h>

@protocol OS_dispatch_queue;
@class NSObject, BBObserver, BBSettingsGateway, NCNotificationDispatcher, NSMutableDictionary, NSString;

@interface NCBulletinNotificationSource : NSObject <BBObserverDelegate, NCNotificationDispatcherSourceDelegate, NCNotificationSource> {

	NSObject*<OS_dispatch_queue> _queue;
	BBObserver* _observer;
	BBSettingsGateway* _settingsGateway;
	NCNotificationDispatcher* _dispatcher;
	NSMutableDictionary* _sectionInfoById;
	NSMutableDictionary* _bulletinFeeds;

}

@property (nonatomic,retain) BBObserver * observer;                              //@synthesize observer=_observer - In the implementation block
@property (nonatomic,retain) BBSettingsGateway * settingsGateway;                //@synthesize settingsGateway=_settingsGateway - In the implementation block
@property (nonatomic,retain) NCNotificationDispatcher * dispatcher;              //@synthesize dispatcher=_dispatcher - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * sectionInfoById;              //@synthesize sectionInfoById=_sectionInfoById - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * bulletinFeeds;                //@synthesize bulletinFeeds=_bulletinFeeds - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NCNotificationDispatcher *)dispatcher;
-(void)dispatcher:(id)arg1 requestsClearingNotificationRequests:(id)arg2 fromDestinations:(id)arg3 ;
-(void)setDispatcher:(NCNotificationDispatcher *)arg1 ;
-(void)setObserver:(BBObserver *)arg1 ;
-(id)init;
-(BBObserver *)observer;
-(NSMutableDictionary *)sectionInfoById;
-(void)dispatcher:(id)arg1 setAllowsCriticalAlerts:(BOOL)arg2 forSectionIdentifier:(id)arg3 ;
-(void)setSectionInfoById:(NSMutableDictionary *)arg1 ;
-(unsigned long long)_updateFeedForCoverSheetDestination:(unsigned long long)arg1 storedFeed:(unsigned long long)arg2 ;
-(id)_queue_sectionInfoForBulletin:(id)arg1 ;
-(void)dispatcher:(id)arg1 setDeliverQuietly:(BOOL)arg2 forSectionIdentifier:(id)arg3 ;
-(void)observer:(id)arg1 modifyBulletin:(id)arg2 forFeed:(unsigned long long)arg3 ;
-(void)observer:(id)arg1 noteBulletinsLoadedForSectionID:(id)arg2 ;
-(void)dispatcher:(id)arg1 requestsClearingNotificationRequests:(id)arg2 ;
-(void)_applicationIconChanged:(id)arg1 ;
-(NSMutableDictionary *)bulletinFeeds;
-(void)dispatcher:(id)arg1 requestsClearingNotificationRequestsInSections:(id)arg2 ;
-(void)dispatcher:(id)arg1 requestsClearingNotificationRequestsFromDate:(id)arg2 toDate:(id)arg3 inSections:(id)arg4 ;
-(void)setBulletinFeeds:(NSMutableDictionary *)arg1 ;
-(id)_bulletinsToClearPerSectionIdForNotificationRequests:(id)arg1 removingDestinations:(id)arg2 ;
-(void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(unsigned long long)arg3 playLightsAndSirens:(BOOL)arg4 withReply:(/*^block*/id)arg5 ;
-(void)observer:(id)arg1 removeBulletin:(id)arg2 ;
-(void)observer:(id)arg1 noteServerConnectionStateChanged:(BOOL)arg2 ;
-(void)setSettingsGateway:(BBSettingsGateway *)arg1 ;
-(id)_bulletinsPerSectionIdForNotificationRequests:(id)arg1 ;
-(void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(unsigned long long)arg3 ;
-(void)dispatcher:(id)arg1 setAllowsNotifications:(BOOL)arg2 forSectionIdentifier:(id)arg3 ;
-(void)observer:(id)arg1 removeSection:(id)arg2 ;
-(void)observer:(id)arg1 updateSectionInfo:(id)arg2 ;
-(id)initWithDispatcher:(id)arg1 ;
-(void)observer:(id)arg1 removeBulletin:(id)arg2 forFeed:(unsigned long long)arg3 ;
-(id)initWithDispatcher:(id)arg1 observer:(id)arg2 queue:(id)arg3 ;
-(BBSettingsGateway *)settingsGateway;
-(void)dealloc;
@end

