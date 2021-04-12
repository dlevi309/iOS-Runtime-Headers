/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@protocol OS_dispatch_source, PKPaymentTransactionProcessorDataSource;
@class NSMutableSet, NSMutableArray, CLLocationManager, CLGeocoder, NSObject, PKMerchantCategoryCodeMap, NSHashTable, PKUsageNotificationServer, NSString;

@interface PKPaymentTransactionProcessor : NSObject <CLLocationManagerDelegate> {

	os_unfair_lock_s _itemsLock;
	NSMutableSet* _locationUpdateItems;
	NSMutableSet* _backgroundLocationUpdateItems;
	NSMutableArray* _reverseGeocodeItems;
	NSMutableSet* _stationsUpdateItems;
	NSMutableArray* _merchantCleanupItems;
	CLLocationManager* _locationManager;
	CLLocationManager* _backgroundMerchantLocationManager;
	CLGeocoder* _geocoder;
	NSObject*<OS_dispatch_source> _locationUpdateTimeoutTimer;
	NSObject*<OS_dispatch_source> _backgroundLocationUpdateTimer;
	BOOL _active;
	BOOL _processingMerchantCleanupItems;
	PKMerchantCategoryCodeMap* _categoryCodeMap;
	os_unfair_lock_s _observersLock;
	NSHashTable* _observers;
	id<PKPaymentTransactionProcessorDataSource> _dataSource;
	PKUsageNotificationServer* _usageNotificationServer;

}

@property (getter=isActive,nonatomic,readonly) BOOL active;                                              //@synthesize active=_active - In the implementation block
@property (assign,nonatomic,__weak) id<PKPaymentTransactionProcessorDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) PKUsageNotificationServer * usageNotificationServer;                 //@synthesize usageNotificationServer=_usageNotificationServer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)unregisterObserver:(id)arg1 ;
-(id)initWithQueue:(id)arg1 ;
-(void)setUsageNotificationServer:(PKUsageNotificationServer *)arg1 ;
-(void)registerObserver:(id)arg1 ;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(PKUsageNotificationServer *)usageNotificationServer;
-(id)init;
-(void)_abortUpdatingLocationForLocationUpdateItem:(id)arg1 ;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)_startUpdatingLocationIfPossible;
-(BOOL)isActive;
-(void)_processItemForStationsCleanup:(id)arg1 ;
-(id<PKPaymentTransactionProcessorDataSource>)dataSource;
-(void)_processPaymentTransaction:(id)arg1 forTransactionSourceIdentifier:(id)arg2 ;
-(id)_pendingMerchantCleanupItemForTransaction:(id)arg1 ;
-(id)_pendingLocationUpdateItemForTransaction:(id)arg1 ;
-(void)processPaymentTransaction:(id)arg1 forTransactionSourceIdentifier:(id)arg2 ;
-(void)_startUpdatingBackgroundLocationIfPossible;
-(void)_reportTransactionWithFinalLocation:(id)arg1 ;
-(void)_processPaymentTransactionForMerchantCleanup:(id)arg1 forTransactionSourceIdentifier:(id)arg2 clearingAttempt:(BOOL)arg3 ;
-(void)setDataSource:(id<PKPaymentTransactionProcessorDataSource>)arg1 ;
-(void)_processItemForMerchantCleanup:(id)arg1 clearingAttempt:(BOOL)arg2 ;
-(void)_updateActiveState;
-(void)_stopUpdatingLocationIfPossible;
-(void)_beginReverseGeocodingIfPossible;
-(void)_updateLocation:(id)arg1 forLocationUpdateItem:(id)arg2 andMarkAsProcessed:(BOOL)arg3 ;
-(id)_pendingReverseGeocodeUpdateItemForTransaction:(id)arg1 ;
-(void)_beginProcessingPaymentTransaction:(id)arg1 forTransactionSourceIdentifier:(id)arg2 skipLocation:(BOOL)arg3 ;
-(void)_accessObserversWithHandler:(/*^block*/id)arg1 ;
-(void)_abortUpdatingLocationForAllLocationUpdateItems;
-(void)_abortUpdatingLocationForAllBackgroundLocationUpdateItems;
-(void)_markTransactionAsFullyProcessedAndNotifyDelegate:(id)arg1 forTransactionSourceIdentifier:(id)arg2 ;
-(id)_pendingStationsUpdateItemForTransaction:(id)arg1 ;
-(void)_processPaymentTransactionForStationsUpdate:(id)arg1 forTransactionSourceIdentifier:(id)arg2 ;
-(void)_processPaymentTransactionForDemoMode:(id)arg1 forTransactionSourceIdentifier:(id)arg2 ;
-(void)_processPaymentTransactionForLocationUpdate:(id)arg1 forTransactionSourceIdentifier:(id)arg2 ;
-(void)_continueUpdatingLocationForTransactionUpdateItem:(id)arg1 ;
-(void)_processForLocalMCCLookup:(id)arg1 ;
-(void)_beginMerchantCleanupIfPossible;
@end

