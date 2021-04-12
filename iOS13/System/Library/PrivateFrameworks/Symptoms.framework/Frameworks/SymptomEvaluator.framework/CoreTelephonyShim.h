/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/

#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
#import <libobjc.A.dylib/CoreTelephonyClientRegistrationDelegate.h>
#import <libobjc.A.dylib/CoreTelephonyClientDataDelegate.h>

@protocol OS_dispatch_queue;
@class CoreTelephonyClient, CTXPCServiceSubscriptionContext, ImpoExpoService, AnalyticsWorkspace, NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject, NSNumber, NSString;

@interface CoreTelephonyShim : NSObject <CoreTelephonyClientRegistrationDelegate, CoreTelephonyClientDataDelegate> {

	CoreTelephonyClient* coreTelephonyClient;
	CTXPCServiceSubscriptionContext* coreTelephonyClientContext;
	os_unfair_lock_s coreTelephonyClientContextLock;
	ImpoExpoService* ieService;
	AnalyticsWorkspace* workspace;
	id flowAnalyticsObserver;
	BOOL initializationComplete;
	NSArray* lastCellInfo;
	timeval lastCellInfoTime;
	NSMutableArray* cellInfoCompletionHandlers;
	BOOL cellInfoInflight;
	os_unfair_lock_s cellInfoLock;
	NSMutableDictionary* _carrierNameForSlot;
	unsigned long long _pendingCTNotificationRegistrationFlags;
	unsigned long long _currentCTNotificationRegistrationFlags;
	NSMutableSet* _ctRnfChangedDelegates;
	os_unfair_lock_s rnfChangedLock;
	NSMutableSet* _ctSignalStrengthChangedDelegates;
	os_unfair_lock_s signalStrengthChangedLock;
	NSMutableSet* delegates;
	NSObject*<OS_dispatch_queue> elevatedQueue;
	NSMutableDictionary* _subscriptions;
	CTServerConnectionRef _ctServerConnection;
	NSMutableDictionary* _subscribers;
	NSNumber* _currentSubscriberTag;

}

@property (nonatomic,readonly) NSMutableDictionary * subscriptions;                   //@synthesize subscriptions=_subscriptions - In the implementation block
@property (nonatomic,readonly) CTServerConnectionRef ctServerConnection;              //@synthesize ctServerConnection=_ctServerConnection - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * subscribers;                     //@synthesize subscribers=_subscribers - In the implementation block
@property (nonatomic,readonly) NSNumber * currentSubscriberTag;                       //@synthesize currentSubscriberTag=_currentSubscriberTag - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)elevatedQueue;
-(id)init;
-(void)dealloc;
-(id)initWithQueue:(id)arg1 ;
-(void)commonInit;
-(void)addDelegate:(id)arg1 ;
-(void)removeDelegate:(id)arg1 ;
-(NSMutableDictionary *)subscriptions;
-(void)subscriptionInfoDidChange;
-(void)activeSubscriptionsDidChange;
-(void)simLessSubscriptionsDidChange;
-(void)reliableNetworkFallbackChanged:(BOOL)arg1 userEnabled:(BOOL)arg2 ;
-(void)operatorNameChanged:(id)arg1 name:(id)arg2 ;
-(void)signalStrengthChanged:(id)arg1 info:(id)arg2 ;
-(void)enhancedDataLinkQualityChanged:(id)arg1 metric:(id)arg2 ;
-(void)cellChanged:(id)arg1 cell:(id)arg2 ;
-(void)currentDataSimChanged:(id)arg1 ;
-(NSMutableDictionary *)subscribers;
-(id)_coreTelephonyClient;
-(CTServerConnectionRef)ctServerConnection;
-(void)carrierSettingsDidChange;
-(void)_completeInitialization;
-(NSNumber *)currentSubscriberTag;
-(void)copyCellInfoOnQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)unregisterSignalStrengthChangedWithDelegate:(id)arg1 ;
-(void)registerSignalStrengthChangedWithDelegate:(id)arg1 ;
-(void)updateSubscribers;
-(id)elevatedQueue;
-(void)initializeCoreTelephonyClientAsNecessary;
-(void)_processPendingCoreTelephonyNotificationRegistrations;
-(void)handleCTServerNotification:(CFStringRef)arg1 notificationInfo:(CFDictionaryRef)arg2 ;
-(void)_deliverRNFSettingAvailable:(BOOL)arg1 enabled:(BOOL)arg2 ;
-(void)_deliverSignalStrengthChanged:(id)arg1 ;
-(void)_registerForCoreTelephonyNotifications:(unsigned long long)arg1 ;
-(id)getCurrentDataSubscriptionContext;
-(void)_unregisterFromCoreTelephonyNotifications:(unsigned long long)arg1 ;
-(id)dictionaryForSubscriptionContext:(id)arg1 ;
-(id)cellCarrierNameForContext:(id)arg1 refresh:(BOOL)arg2 ;
-(void)updateCurrentSubscriberTag:(id)arg1 ;
-(BOOL)subscriptionContextIsCurrentDataSubscription:(id)arg1 ;
-(BOOL)findSubscriberExactMatchForICCID:(id)arg1 MDN:(id)arg2 slotID:(long long)arg3 ;
-(BOOL)findSubscriberBestMatchForICCID:(id)arg1 MDN:(id)arg2 slotID:(long long)arg3 update:(BOOL)arg4 ;
-(void)addNewSubscriberForICCID:(id)arg1 MDN:(id)arg2 slotID:(long long)arg3 ;
-(void)cellInfo:(id)arg1 maxAgeSeconds:(int)arg2 completion:(/*^block*/id)arg3 ;
-(void)_dispatchCellInfoResult:(id)arg1 error:(id)arg2 queue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)getSortedSubscriberKeys;
-(id)internalVariables;
-(void)_setInitializationComplete:(BOOL)arg1 ;
-(void)registerRNFChangedWithDelegate:(id)arg1 ;
-(void)unregisterRNFChangedWithDelegate:(id)arg1 ;
-(void)cellInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

