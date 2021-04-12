/*
* Generated on Thursday, January 14, 2021 at 2:28:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsKit.framework/UserNotificationsKit
*/

#import <libobjc.A.dylib/NCNotificationAlertDestinationDelegate.h>
#import <libobjc.A.dylib/NCNotificationAlertDestination.h>

@protocol NCNotificationAlertDestinationDelegate;
@class NCNotificationDestinationsRegistry, NCNotificationCollapsingQueue, NCNotificationRequest, NSString, BSServiceConnectionEndpoint;

@interface NCNotificationAlertQueue : NSObject <NCNotificationAlertDestinationDelegate, NCNotificationAlertDestination> {

	id<NCNotificationAlertDestinationDelegate> _delegate;
	NCNotificationDestinationsRegistry* _destinationsRegistry;
	NCNotificationCollapsingQueue* _queue;
	NCNotificationRequest* _coalescingRequest;

}

@property (nonatomic,retain) NCNotificationCollapsingQueue * queue;                                   //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NCNotificationRequest * coalescingRequest;                               //@synthesize coalescingRequest=_coalescingRequest - In the implementation block
@property (nonatomic,retain) NCNotificationDestinationsRegistry * destinationsRegistry;               //@synthesize destinationsRegistry=_destinationsRegistry - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<NCNotificationAlertDestinationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (getter=isAlertDestination,nonatomic,readonly) BOOL alertDestination; 
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) BSServiceConnectionEndpoint * endpoint; 
-(void)postNotificationRequest:(id)arg1 ;
-(BOOL)isRegisteredDestination:(id)arg1 ;
-(NCNotificationRequest *)coalescingRequest;
-(void)updateNotificationSectionSettings:(id)arg1 previousSectionSettings:(id)arg2 ;
-(void)destination:(id)arg1 didBecomeReadyToReceiveNotificationsPassingTest:(/*^block*/id)arg2 ;
-(NCNotificationDestinationsRegistry *)destinationsRegistry;
-(void)destination:(id)arg1 requestPermissionToExecuteAction:(id)arg2 forNotificationRequest:(id)arg3 withParameters:(id)arg4 completion:(/*^block*/id)arg5 ;
-(id)notificationSectionSettingsForDestination:(id)arg1 forSectionIdentifier:(id)arg2 ;
-(void)destination:(id)arg1 requestsClearingNotificationRequestsFromDate:(id)arg2 toDate:(id)arg3 inSections:(id)arg4 ;
-(void)destination:(id)arg1 requestsClearingNotificationRequests:(id)arg2 fromDestinations:(id)arg3 ;
-(BOOL)isAlertDestination;
-(void)setDestinationsRegistry:(NCNotificationDestinationsRegistry *)arg1 ;
-(id)notificationSectionSettingsForDestination:(id)arg1 ;
-(void)registerDestination:(id)arg1 ;
-(void)destination:(id)arg1 didDismissNotificationRequest:(id)arg2 ;
-(void)destination:(id)arg1 setDeliverQuietly:(BOOL)arg2 forSectionIdentifier:(id)arg3 ;
-(void)withdrawNotificationRequest:(id)arg1 ;
-(void)destination:(id)arg1 setAllowsNotifications:(BOOL)arg2 forSectionIdentifier:(id)arg3 ;
-(id)init;
-(void)modifyNotificationRequest:(id)arg1 ;
-(id<NCNotificationAlertDestinationDelegate>)delegate;
-(void)destination:(id)arg1 requestsClearingNotificationRequests:(id)arg2 ;
-(void)unregisterDestination:(id)arg1 ;
-(BSServiceConnectionEndpoint *)endpoint;
-(void)destination:(id)arg1 executeAction:(id)arg2 forNotificationRequest:(id)arg3 requestAuthentication:(BOOL)arg4 withParameters:(id)arg5 completion:(/*^block*/id)arg6 ;
-(BOOL)_postNotificationRequest:(id)arg1 ;
-(void)setDestination:(id)arg1 enabled:(BOOL)arg2 ;
-(void)destination:(id)arg1 willPresentNotificationRequest:(id)arg2 suppressAlerts:(BOOL)arg3 ;
-(void)_postNextNotificationRequestPassingTest:(/*^block*/id)arg1 ;
-(void)destination:(id)arg1 setAllowsCriticalAlerts:(BOOL)arg2 forSectionIdentifier:(id)arg3 ;
-(void)setDelegate:(id<NCNotificationAlertDestinationDelegate>)arg1 ;
-(void)destination:(id)arg1 didBecomeReadyToReceiveNotificationsCoalescedWith:(id)arg2 ;
-(BOOL)_readyToReceiveForNotificationRequest:(id)arg1 ;
-(void)_prepareDestinationsToReceiveCriticalNotificationRequest:(id)arg1 ;
-(void)_postEnqueuedNotificationRequestsCoalescingWith:(id)arg1 ;
-(void)destination:(id)arg1 didPresentNotificationRequest:(id)arg2 ;
-(void)setCoalescingRequest:(NCNotificationRequest *)arg1 ;
-(NCNotificationCollapsingQueue *)queue;
-(BOOL)_destinations:(id)arg1 canReceiveNotificationRequest:(id)arg2 ;
-(void)destinationDidBecomeReadyToReceiveNotifications:(id)arg1 ;
-(void)destination:(id)arg1 willPresentNotificationRequest:(id)arg2 ;
-(void)destination:(id)arg1 requestsClearingNotificationRequestsInSections:(id)arg2 ;
-(NSString *)identifier;
-(void)_postNextNotificationRequest;
-(BOOL)canReceiveNotificationRequest:(id)arg1 ;
-(void)setDestination:(id)arg1 ready:(BOOL)arg2 ;
-(void)setQueue:(NCNotificationCollapsingQueue *)arg1 ;
-(id)destinationsForRequestDestinations:(id)arg1 ;
-(void)destination:(id)arg1 willDismissNotificationRequest:(id)arg2 ;
-(BOOL)_performDestinationOperationForRequest:(id)arg1 block:(/*^block*/id)arg2 ;
@end

