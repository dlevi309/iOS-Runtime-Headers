/*
* Generated on Thursday, January 14, 2021 at 2:28:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsKit.framework/UserNotificationsKit
*/

#import <libobjc.A.dylib/NCNotificationAlertDestinationDelegate.h>
#import <libobjc.A.dylib/NCNotificationDestinationDelegate.h>

@protocol NCNotificationDispatcherDelegate, NCAlertingController;
@class NCNotificationDestinationsRegistry, NCNotificationAlertQueue, NSMutableDictionary, NSHashTable, NCLayoutLoopDetector, NSString;

@interface NCNotificationDispatcher : NSObject <NCNotificationAlertDestinationDelegate, NCNotificationDestinationDelegate> {

	id<NCNotificationDispatcherDelegate> _delegate;
	NCNotificationDestinationsRegistry* _destinationsRegistry;
	NCNotificationAlertQueue* _alertQueue;
	NSMutableDictionary* _sectionSettings;
	NSHashTable* _sourceDelegates;
	NCLayoutLoopDetector* _layoutDetector;
	id<NCAlertingController> _alertingController;

}

@property (nonatomic,retain) NCNotificationDestinationsRegistry * destinationsRegistry;              //@synthesize destinationsRegistry=_destinationsRegistry - In the implementation block
@property (nonatomic,retain) NCNotificationAlertQueue * alertQueue;                                  //@synthesize alertQueue=_alertQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * sectionSettings;                                  //@synthesize sectionSettings=_sectionSettings - In the implementation block
@property (nonatomic,retain) NSHashTable * sourceDelegates;                                          //@synthesize sourceDelegates=_sourceDelegates - In the implementation block
@property (nonatomic,retain) NCLayoutLoopDetector * layoutDetector;                                  //@synthesize layoutDetector=_layoutDetector - In the implementation block
@property (nonatomic,retain) id<NCAlertingController> alertingController;                            //@synthesize alertingController=_alertingController - In the implementation block
@property (assign,nonatomic,__weak) id<NCNotificationDispatcherDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NCNotificationAlertQueue *)alertQueue;
-(void)postNotificationWithRequest:(id)arg1 ;
-(void)setAlertingController:(id<NCAlertingController>)arg1 ;
-(void)notificationsLoadedForSectionIdentifier:(id)arg1 ;
-(void)withdrawNotificationWithRequest:(id)arg1 ;
-(void)destination:(id)arg1 didBecomeReadyToReceiveNotificationsPassingTest:(/*^block*/id)arg2 ;
-(NCNotificationDestinationsRegistry *)destinationsRegistry;
-(void)destination:(id)arg1 requestPermissionToExecuteAction:(id)arg2 forNotificationRequest:(id)arg3 withParameters:(id)arg4 completion:(/*^block*/id)arg5 ;
-(id)notificationSectionSettingsForDestination:(id)arg1 forSectionIdentifier:(id)arg2 ;
-(void)destination:(id)arg1 requestsClearingNotificationRequestsFromDate:(id)arg2 toDate:(id)arg3 inSections:(id)arg4 ;
-(void)destination:(id)arg1 requestsClearingNotificationRequests:(id)arg2 fromDestinations:(id)arg3 ;
-(void)setDestinationsRegistry:(NCNotificationDestinationsRegistry *)arg1 ;
-(id)notificationSectionSettingsForDestination:(id)arg1 ;
-(void)registerDestination:(id)arg1 ;
-(void)destination:(id)arg1 didDismissNotificationRequest:(id)arg2 ;
-(id<NCAlertingController>)alertingController;
-(void)destination:(id)arg1 setDeliverQuietly:(BOOL)arg2 forSectionIdentifier:(id)arg3 ;
-(void)destination:(id)arg1 setAllowsNotifications:(BOOL)arg2 forSectionIdentifier:(id)arg3 ;
-(id)init;
-(void)_didPostNotificationRequest:(id)arg1 ;
-(id<NCNotificationDispatcherDelegate>)delegate;
-(void)addDispatcherSourceDelegate:(id)arg1 ;
-(void)removeDispatcherSourceDelegate:(id)arg1 ;
-(void)_registerDestination:(id)arg1 ;
-(void)destination:(id)arg1 requestsClearingNotificationRequests:(id)arg2 ;
-(void)updateNotificationSectionSettings:(id)arg1 ;
-(void)unregisterDestination:(id)arg1 ;
-(void)destination:(id)arg1 executeAction:(id)arg2 forNotificationRequest:(id)arg3 requestAuthentication:(BOOL)arg4 withParameters:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)setDestination:(id)arg1 enabled:(BOOL)arg2 ;
-(void)setAlertQueue:(NCNotificationAlertQueue *)arg1 ;
-(void)_willPostNotificationRequest:(id)arg1 ;
-(void)destination:(id)arg1 willPresentNotificationRequest:(id)arg2 suppressAlerts:(BOOL)arg3 ;
-(void)modifyNotificationWithRequest:(id)arg1 ;
-(void)destination:(id)arg1 setAllowsCriticalAlerts:(BOOL)arg2 forSectionIdentifier:(id)arg3 ;
-(void)setDelegate:(id<NCNotificationDispatcherDelegate>)arg1 ;
-(void)destination:(id)arg1 didBecomeReadyToReceiveNotificationsCoalescedWith:(id)arg2 ;
-(void)_clearUnsafeNotification:(id)arg1 ;
-(void)destination:(id)arg1 didPresentNotificationRequest:(id)arg2 ;
-(NCLayoutLoopDetector *)layoutDetector;
-(void)setSourceDelegates:(NSHashTable *)arg1 ;
-(void)setLayoutDetector:(NCLayoutLoopDetector *)arg1 ;
-(NSHashTable *)sourceDelegates;
-(BOOL)_isRegisteredDestination:(id)arg1 ;
-(void)destinationDidBecomeReadyToReceiveNotifications:(id)arg1 ;
-(void)setSectionSettings:(NSMutableDictionary *)arg1 ;
-(void)destination:(id)arg1 willPresentNotificationRequest:(id)arg2 ;
-(void)destination:(id)arg1 requestsClearingNotificationRequestsInSections:(id)arg2 ;
-(void)_didRemoveNotificationRequest:(id)arg1 ;
-(void)removeNotificationSectionWithIdentifier:(id)arg1 ;
-(void)_performOperationForRequestDestinations:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)_registerAlertDestination:(id)arg1 ;
-(BOOL)_shouldPostNotificationRequest:(id)arg1 ;
-(NSMutableDictionary *)sectionSettings;
-(id)initWithAlertingController:(id)arg1 ;
@end

