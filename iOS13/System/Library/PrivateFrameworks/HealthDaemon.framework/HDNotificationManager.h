/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <libobjc.A.dylib/HDDiagnosticObject.h>

@protocol OS_dispatch_queue;
@class HDProfile, NSHashTable, NSObject, NSDate, UNUserNotificationCenter, NSString;

@interface HDNotificationManager : NSObject <HDDiagnosticObject> {

	HDProfile* _profile;
	NSHashTable* _observers;
	NSObject*<OS_dispatch_queue> _clientQueue;
	NSObject*<OS_dispatch_queue> _observerQueue;
	NSObject*<OS_dispatch_queue> _resourceQueue;
	NSDate* _lastNotificationDate;
	UNUserNotificationCenter* _userNotificationCenter;

}

@property (nonatomic,retain) UNUserNotificationCenter * userNotificationCenter;              //@synthesize userNotificationCenter=_userNotificationCenter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithProfile:(id)arg1 ;
-(void)removeDeliveredNotificationsWithIdentifiers:(id)arg1 ;
-(void)removeNotificationObserver:(id)arg1 ;
-(/*^block*/id)_actionCompletionOnClientQueue:(/*^block*/id)arg1 ;
-(/*^block*/id)_objectCompletionOnClientQueue:(/*^block*/id)arg1 ;
-(void)badgeForDomain:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)setBadge:(id)arg1 forDomain:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)postNotificationWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)postCompanionUserNotificationOfType:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(id)diagnosticDescription;
-(UNUserNotificationCenter *)userNotificationCenter;
-(void)setUserNotificationCenter:(UNUserNotificationCenter *)arg1 ;
-(void)receivedCompanionUserNotificationRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)registerWithUserNotificationCenter;
-(id)_resourceQueue_badgeForDomain:(long long)arg1 error:(out id*)arg2 ;
-(BOOL)_resourceQueue_setBadge:(id)arg1 domain:(long long)arg2 error:(out id*)arg3 ;
-(void)_resourceQueue_notifyObserversWithNotification:(id)arg1 ;
-(void)_postNotificationWithTitle:(id)arg1 body:(id)arg2 categoryIdentifier:(id)arg3 subtitle:(id)arg4 domain:(long long)arg5 url:(id)arg6 completion:(/*^block*/id)arg7 ;
-(void)postNotificationWithIdentifier:(id)arg1 content:(id)arg2 trigger:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_sendCompanionUserNotificationResponse:(/*^block*/id)arg1 error:(id)arg2 ;
-(id)_resourceQueue_coaleseDomainBadges;
-(void)_resourceQueue_updateApplicationBadge;
-(void)_resourceQueue_notifyObserversWithBadge:(id)arg1 domain:(long long)arg2 ;
-(void)_postBadgesDidUpdateNotification;
-(id)_resourceQueue_badgeForDomain:(long long)arg1 ;
-(BOOL)incrementBadgeForDomain:(long long)arg1 count:(long long)arg2 error:(out id*)arg3 ;
-(void)postNotificationWithTitle:(id)arg1 body:(id)arg2 categoryIdentifier:(id)arg3 subtitle:(id)arg4 domain:(long long)arg5 completion:(/*^block*/id)arg6 ;
-(void)addNotificationObserver:(id)arg1 ;
-(id)_badgeForDomain:(long long)arg1 error:(out id*)arg2 ;
-(id)_aggregateBadge;
@end

