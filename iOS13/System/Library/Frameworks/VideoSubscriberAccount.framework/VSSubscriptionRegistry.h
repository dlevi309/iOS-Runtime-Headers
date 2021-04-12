/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
*/

#import <libobjc.A.dylib/VSSubscriptionServiceProtocol.h>

@class VSRemoteNotifier, VSSubscriptionPersistentContainer, VSSubscriptionPredicateFactory, NSString;

@interface VSSubscriptionRegistry : NSObject <VSSubscriptionServiceProtocol> {

	VSRemoteNotifier* _remoteNotifier;
	VSSubscriptionPersistentContainer* _persistentContainer;
	VSSubscriptionPredicateFactory* _predicateFactory;

}

@property (nonatomic,retain) VSRemoteNotifier * remoteNotifier;                                    //@synthesize remoteNotifier=_remoteNotifier - In the implementation block
@property (nonatomic,retain) VSSubscriptionPersistentContainer * persistentContainer;              //@synthesize persistentContainer=_persistentContainer - In the implementation block
@property (nonatomic,retain) VSSubscriptionPredicateFactory * predicateFactory;                    //@synthesize predicateFactory=_predicateFactory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)_performBlock:(/*^block*/id)arg1 ;
-(id)_fetchRequest;
-(VSSubscriptionPersistentContainer *)persistentContainer;
-(void)setPersistentContainer:(VSSubscriptionPersistentContainer *)arg1 ;
-(VSRemoteNotifier *)remoteNotifier;
-(void)_sendRemoteNotification;
-(void)setRemoteNotifier:(VSRemoteNotifier *)arg1 ;
-(void)fetchActiveSubscriptionsWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)registerSubscription:(id)arg1 ;
-(void)removeSubscriptions:(id)arg1 ;
-(VSSubscriptionPredicateFactory *)predicateFactory;
-(void)setPredicateFactory:(VSSubscriptionPredicateFactory *)arg1 ;
-(void)_installedAppsDidChange:(id)arg1 ;
-(long long)_saveChangesToContext:(id)arg1 withDate:(id)arg2 ;
-(id)_securityTaskForCurrentConnection;
-(id)_subscriptionEntity;
-(id)_predicateForCurrentConnectionWithRequestKind:(long long)arg1 ;
-(BOOL)_saveChangesToContext:(id)arg1 ;
-(id)_predicateForPersistentAttributesOfSubscriptions:(id)arg1 withEntity:(id)arg2 forFiltering:(BOOL)arg3 ;
@end

