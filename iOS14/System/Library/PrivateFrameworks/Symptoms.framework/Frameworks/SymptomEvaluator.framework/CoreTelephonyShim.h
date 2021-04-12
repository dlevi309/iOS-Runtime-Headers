/*
* Generated on Thursday, January 14, 2021 at 2:24:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	long long currentSubscriberSlotID;
	os_unfair_lock_s coreTelephonyClientContextLock;
	ImpoExpoService* ieService;
	AnalyticsWorkspace* workspace;
	id engineReadyObserver;
	BOOL initializationComplete;
	NSArray* lastCellInfo;
	timeval lastCellInfoTime;
	NSMutableArray* cellInfoCompletionHandlers;
	BOOL cellInfoInflight;
	os_unfair_lock_s cellInfoLock;
	NSMutableDictionary* _carrierNameForSlot;
	unsigned ctClientInitReadyFlag;
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
-(void)signalStrengthChanged:(id)arg1 info:(id)arg2 ;
-(void)dataStatus:(id)arg1 dataStatusInfo:(id)arg2 ;
-(void)activeSubscriptionsDidChange;
-(void)subscriptionInfoDidChange;
-(void)simLessSubscriptionsDidChange;
-(NSMutableDictionary *)subscriptions;
-(void)carrierSettingsDidChange;
-(id)_coreTelephonyClient;
-(id)initWithQueue:(id)arg1 ;
-(void)currentDataSimChanged:(id)arg1 ;
-(void)operatorNameChanged:(id)arg1 name:(id)arg2 ;
-(void)_registerForCoreTelephonyNotifications:(unsigned long long)arg1 ;
-(void)addDelegate:(id)arg1 ;
-(void)removeDelegate:(id)arg1 ;
-(id)init;
-(void)cellMonitorUpdate:(id)arg1 info:(id)arg2 ;
-(BOOL)getSmartDataModeSetting;
-(void)_deliverSignalStrengthChanged:(id)arg1 ;
-(void)_deliverSmartDataModeSettingChanged:(BOOL)arg1 ;
-(id)getCurrentDataSubscriptionContext;
-(NSMutableDictionary *)subscribers;
-(void)_completeInitialization;
-(void)_deliverRNFSettingAvailable:(BOOL)arg1 enabled:(BOOL)arg2 ;
-(void)updateSubscribers;
-(BOOL)findSubscriberBestMatchForICCID:(id)arg1 MDN:(id)arg2 slotID:(long long)arg3 update:(BOOL)arg4 ;
-(void)_unregisterFromCoreTelephonyNotifications:(unsigned long long)arg1 ;
-(NSNumber *)currentSubscriberTag;
-(BOOL)findSubscriberExactMatchForICCID:(id)arg1 MDN:(id)arg2 slotID:(long long)arg3 ;
-(CTServerConnectionRef)ctServerConnection;
-(void)commonInit;
-(void)reliableNetworkFallbackChanged:(BOOL)arg1 userEnabled:(BOOL)arg2 ;
-(id)extractCellInfo:(id)arg1 ;
-(void)ratSelectionChanged:(id)arg1 selection:(id)arg2 ;
-(id)internalVariables;
-(BOOL)subscriptionContextIsCurrentDataSubscription:(id)arg1 ;
-(void)smartDataModeChanged:(id)arg1 userEnabled:(BOOL)arg2 ;
-(void)registerRNFChangedWithDelegate:(id)arg1 ;
-(id)dictionaryForSubscriptionContext:(id)arg1 ;
-(void)initializeCoreTelephonyClientAsNecessary;
-(void)processDataStatus:(id)arg1 forContext:(id)arg2 ;
-(void)unregisterRNFChangedWithDelegate:(id)arg1 ;
-(void)addNewSubscriberForICCID:(id)arg1 MDN:(id)arg2 slotID:(long long)arg3 ;
-(void)handleCTServerNotification:(CFStringRef)arg1 notificationInfo:(CFDictionaryRef)arg2 ;
-(void)_dispatchCellInfoResult:(id)arg1 error:(id)arg2 queue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)cellCarrierNameForContext:(id)arg1 refresh:(BOOL)arg2 ;
-(id)getSortedSubscriberKeys;
-(void)enhancedDataLinkQualityChanged:(id)arg1 metric:(id)arg2 ;
-(void)_processEngineReadyNotification:(id)arg1 ;
-(void)registerSignalStrengthChangedWithDelegate:(id)arg1 ;
-(void)_setCurrentSubscriberSlotID:(long long)arg1 ;
-(void)updateCurrentSubscriberTag:(id)arg1 ;
-(id)elevatedQueue;
-(void)copyCellInfoOnQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_processPendingCoreTelephonyNotificationRegistrations;
-(void)_setInitializationComplete:(BOOL)arg1 ;
-(void)_updateSubscribers;
-(void)dealloc;
-(void)unregisterSignalStrengthChangedWithDelegate:(id)arg1 ;
@end

