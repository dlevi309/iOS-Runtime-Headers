/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@protocol OS_dispatch_source, PKPaymentTransactionProcessorDelegate;
@class NSMutableSet, NSMutableArray, CLLocationManager, CLGeocoder, NSObject, PKMerchantCategoryCodeMap, PKUsageNotificationServer, NSString;

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
	id<PKPaymentTransactionProcessorDelegate> _delegate;
	PKUsageNotificationServer* _usageNotificationServer;

}

@property (getter=isActive,nonatomic,readonly) BOOL active;                                           //@synthesize active=_active - In the implementation block
@property (assign,nonatomic,__weak) id<PKPaymentTransactionProcessorDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) PKUsageNotificationServer * usageNotificationServer;              //@synthesize usageNotificationServer=_usageNotificationServer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<PKPaymentTransactionProcessorDelegate>)delegate;
-(void)setDelegate:(id<PKPaymentTransactionProcessorDelegate>)arg1 ;
-(BOOL)isActive;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)_updateActiveState;
-(void)processPaymentTransaction:(id)arg1 forPassUniqueIdentifier:(id)arg2 paymentApplication:(id)arg3 ;
-(void)_processPaymentTransaction:(id)arg1 forPassUniqueIdentifier:(id)arg2 paymentApplication:(id)arg3 ;
-(void)_processPaymentTransactionForDemoMode:(id)arg1 forPassUniqueIdentifier:(id)arg2 paymentApplication:(id)arg3 ;
-(void)_updateLocation:(id)arg1 forLocationUpdateItem:(id)arg2 andMarkAsProcessed:(BOOL)arg3 ;
-(void)_abortUpdatingLocationForLocationUpdateItem:(id)arg1 ;
-(void)_stopUpdatingLocationIfPossible;
-(void)_abortUpdatingLocationForAllLocationUpdateItems;
-(void)_abortUpdatingLocationForAllBackgroundLocationUpdateItems;
-(void)_processPaymentTransactionForLocationUpdate:(id)arg1 forPassUniqueIdentifier:(id)arg2 paymentApplication:(id)arg3 ;
-(id)_pendingReverseGeocodeUpdateItemForTransaction:(id)arg1 ;
-(void)_processPaymentTransactionForStationsUpdate:(id)arg1 forPassUniqueIdentifier:(id)arg2 paymentApplication:(id)arg3 ;
-(void)_processPaymentTransactionForMerchantCleanup:(id)arg1 forPassUniqueIdentifier:(id)arg2 paymentApplication:(id)arg3 clearingAttempt:(BOOL)arg4 ;
-(void)_markTransactionAsFullyProcessedAndNotifyDelegate:(id)arg1 forPassUniqueIdentifier:(id)arg2 paymentApplication:(id)arg3 ;
-(void)_beginProcessingPaymentTransaction:(id)arg1 forPassUniqueIdentifier:(id)arg2 paymentApplication:(id)arg3 skipLocation:(BOOL)arg4 ;
-(id)_pendingLocationUpdateItemForTransaction:(id)arg1 ;
-(void)_continueUpdatingLocationForTransactionUpdateItem:(id)arg1 ;
-(void)_startUpdatingBackgroundLocationIfPossible;
-(void)_startUpdatingLocationIfPossible;
-(void)_beginReverseGeocodingIfPossible;
-(void)_processItemForStationsCleanup:(id)arg1 ;
-(void)_reportTransactionWithFinalLocation:(id)arg1 ;
-(id)_pendingStationsUpdateItemForTransaction:(id)arg1 ;
-(void)_processItemForMerchantCleanup:(id)arg1 clearingAttempt:(BOOL)arg2 ;
-(id)_pendingMerchantCleanupItemForTransaction:(id)arg1 ;
-(void)_beginMerchantCleanupIfPossible;
-(void)_processForLocalMCCLookup:(id)arg1 ;
-(PKUsageNotificationServer *)usageNotificationServer;
-(void)setUsageNotificationServer:(PKUsageNotificationServer *)arg1 ;
@end

