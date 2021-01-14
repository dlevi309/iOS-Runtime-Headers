/*
* Generated on Thursday, January 14, 2021 at 2:26:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsDaemon.framework/TipsDaemon
*/

#import <libobjc.A.dylib/TPSDEventsProviderManagerDelegate.h>

@protocol OS_dispatch_queue, TPSDiscoverabilityControllerDelegate;
@class NSMutableDictionary, NSMutableSet, TPSEventsProviderManager, TPSEventsHistoryController, NSObject, TPSTipStatusController, NSDictionary, NSString;

@interface TPSDiscoverabilityController : NSObject <TPSDEventsProviderManagerDelegate> {

	long long _overrideHintMaxDisplayedCount;
	NSMutableDictionary* _contextualInfoMap;
	NSMutableSet* _registeredEventIdentifiers;
	TPSEventsProviderManager* _eventsProviderManager;
	TPSEventsHistoryController* _eventsHistoryController;
	NSObject*<OS_dispatch_queue> _eventRegistrationQueue;
	id<TPSDiscoverabilityControllerDelegate> _delegate;
	TPSTipStatusController* _tipStatusController;
	NSObject*<OS_dispatch_queue> _serialQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialQueue;                                 //@synthesize serialQueue=_serialQueue - In the implementation block
@property (assign,nonatomic,__weak) id<TPSDiscoverabilityControllerDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSDictionary * contextualInfoMap; 
@property (nonatomic,retain) TPSTipStatusController * tipStatusController;                             //@synthesize tipStatusController=_tipStatusController - In the implementation block
@property (nonatomic,copy,readonly) TPSEventsHistoryController * eventsHistoryController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDictionary *)contextualInfoMap;
-(void)restartTriggerTrackingIfNotDisplayedForIdentifier:(id)arg1 ;
-(TPSTipStatusController *)tipStatusController;
-(BOOL)_isConditionMet:(id)arg1 hasUpdates:(BOOL*)arg2 forIdentifier:(id)arg3 ;
-(id)init;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(id<TPSDiscoverabilityControllerDelegate>)delegate;
-(long long)customizationIDForContentID:(id)arg1 ;
-(void)updateContentViewedForIdentifier:(id)arg1 ;
-(void)processEventProviderQueryResults:(id)arg1 type:(long long)arg2 ;
-(void)updateHintWouldHaveBeenDisplayedForIdentifier:(id)arg1 context:(id)arg2 ;
-(id)_matchingIdentifiersForConditionWithType:(unsigned long long)arg1 forObserverIdentifiers:(id)arg2 hasUpdates:(BOOL*)arg3 ;
-(void)markHintIneligibleForIdentifiers:(id)arg1 context:(id)arg2 reason:(long long)arg3 ;
-(void)setTipStatusController:(TPSTipStatusController *)arg1 ;
-(void)setSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setDelegate:(id<TPSDiscoverabilityControllerDelegate>)arg1 ;
-(TPSEventsHistoryController *)eventsHistoryController;
-(void)updateHintDismissedForIdentifier:(id)arg1 dismissType:(id)arg2 context:(id)arg3 ;
-(void)_updateCacheData;
-(void)_removeCacheData;
-(void)_updateRegisteredEventIdentifiers;
-(id)dismissalEventsForContextualInfo:(id)arg1 ;
-(void)_updateContextualInfoMapCache;
-(void)_reconcileRegisteredEvents;
-(void)addHintDisplayedForIdentifier:(id)arg1 context:(id)arg2 ;
-(void)dataProviderManager:(id)arg1 didFinishQueryWithResults:(id)arg2 type:(long long)arg3 ;
-(void)_cleanupContextualInfoMap;
-(id)dismissalEventsForContentID:(id)arg1 ;
-(BOOL)isContextualInfoExistForIdentifier:(id)arg1 ;
-(void)dataProviderManager:(id)arg1 didReceiveCallbackWithResult:(id)arg2 type:(long long)arg3 ;
-(id)contextualInfoForIdentifier:(id)arg1 ;
-(id)discoverabilityTipWithMetadata:(id)arg1 contentDictionary:(id)arg2 preconditions:(id)arg3 ;
-(BOOL)_updateTriggerConditionForObserverIdentifers:(id)arg1 ;
-(void)contextualEligibilityWithTipIdentifiers:(id)arg1 tipsDeliveryInfoMap:(id)arg2 deliveryInfoMap:(id)arg3 experimentCampChangesToAll:(BOOL)arg4 ;
-(void)_registerWakingCallbackForContextualInfo:(id)arg1 ;
-(BOOL)isContentHintDisplayMaxDisplayedCountExceededForIdentifier:(id)arg1 ;
-(void)queryCurrentEvents;
-(void)markHintIneligibleForIdentifiers:(id)arg1 bundleID:(id)arg2 context:(id)arg3 reason:(long long)arg4 ;
-(id)initWithTipStatusController:(id)arg1 ;
-(BOOL)updateDesiredOutcomeConditionForObserverIdentifers:(id)arg1 ;
@end

