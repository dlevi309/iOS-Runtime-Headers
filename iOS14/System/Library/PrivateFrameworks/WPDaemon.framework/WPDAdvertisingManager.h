/*
* Generated on Thursday, January 14, 2021 at 2:28:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WPDaemon.framework/WPDaemon
*/

#import <WPDaemon/WPDManager.h>
#import <libobjc.A.dylib/CBPeripheralManagerDelegate.h>

@class WPAdvertisingRequestsQueue, NSMutableDictionary, NSMutableIndexSet, NSMutableSet, CBPeripheralManager, WPDAdvertisingData, NSIndexSet, NSString;

@interface WPDAdvertisingManager : WPDManager <CBPeripheralManagerDelegate> {

	BOOL _allowCompoundAdvertisements;
	WPAdvertisingRequestsQueue* _advertisingRequests;
	NSMutableDictionary* _clientAdvertisingRequests;
	NSMutableIndexSet* _currentAdvertisers;
	NSMutableSet* _clientsToNotifyOnAddressChange;
	NSMutableDictionary* _publishedServices;
	CBPeripheralManager* _connectablePeripheralManager;
	CBPeripheralManager* _nonConnectablePeripheralManager;
	WPDAdvertisingData* _currentConnectableAdvertisingData;
	WPDAdvertisingData* _currentNonConnectableAdvertisingData;
	NSMutableDictionary* _preallocatedServices;
	NSIndexSet* _rangingTypes;
	NSMutableSet* _rangingClients;

}

@property (retain) WPAdvertisingRequestsQueue * advertisingRequests;                                 //@synthesize advertisingRequests=_advertisingRequests - In the implementation block
@property (retain) NSMutableDictionary * clientAdvertisingRequests;                                  //@synthesize clientAdvertisingRequests=_clientAdvertisingRequests - In the implementation block
@property (retain) NSMutableIndexSet * currentAdvertisers;                                           //@synthesize currentAdvertisers=_currentAdvertisers - In the implementation block
@property (retain) NSMutableSet * clientsToNotifyOnAddressChange;                                    //@synthesize clientsToNotifyOnAddressChange=_clientsToNotifyOnAddressChange - In the implementation block
@property (retain) NSMutableDictionary * publishedServices;                                          //@synthesize publishedServices=_publishedServices - In the implementation block
@property (nonatomic,retain) CBPeripheralManager * connectablePeripheralManager;                     //@synthesize connectablePeripheralManager=_connectablePeripheralManager - In the implementation block
@property (nonatomic,retain) CBPeripheralManager * nonConnectablePeripheralManager;                  //@synthesize nonConnectablePeripheralManager=_nonConnectablePeripheralManager - In the implementation block
@property (nonatomic,retain) WPDAdvertisingData * currentConnectableAdvertisingData;                 //@synthesize currentConnectableAdvertisingData=_currentConnectableAdvertisingData - In the implementation block
@property (nonatomic,retain) WPDAdvertisingData * currentNonConnectableAdvertisingData;              //@synthesize currentNonConnectableAdvertisingData=_currentNonConnectableAdvertisingData - In the implementation block
@property (assign) BOOL allowCompoundAdvertisements;                                                 //@synthesize allowCompoundAdvertisements=_allowCompoundAdvertisements - In the implementation block
@property (retain) NSMutableDictionary * preallocatedServices;                                       //@synthesize preallocatedServices=_preallocatedServices - In the implementation block
@property (nonatomic,readonly) BOOL isRanging; 
@property (nonatomic,readonly) NSIndexSet * rangingTypes;                                            //@synthesize rangingTypes=_rangingTypes - In the implementation block
@property (retain) NSMutableSet * rangingClients;                                                    //@synthesize rangingClients=_rangingClients - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isRanging;
-(id)removeAdvertisingRequestsForClient:(id)arg1 ;
-(id)generateStateDump;
-(id)getCharacteristicForClient:(id)arg1 ;
-(void)setPublishedServices:(NSMutableDictionary *)arg1 ;
-(BOOL)allowCompoundAdvertisements;
-(void)peripheralManager:(id)arg1 didAddService:(id)arg2 error:(id)arg3 ;
-(void)setClientsToNotifyOnAddressChange:(NSMutableSet *)arg1 ;
-(void)peripheralManager:(id)arg1 didStopAdvertisingWithError:(id)arg2 ;
-(void)informClientsAdvertisingPending:(id)arg1 ;
-(id)getClientUUIDsForCharacteristic:(id)arg1 ;
-(id)requestFromAdvertisingDataConnectable:(BOOL)arg1 AddressChangeNotificationNeeded:(BOOL)arg2 ;
-(void)addCharacteristic:(id)arg1 forService:(id)arg2 forClient:(id)arg3 ;
-(void)preallocateServices;
-(NSMutableIndexSet *)currentAdvertisers;
-(BOOL)heySiriAdvertActive:(BOOL)arg1 ;
-(void)setPreallocatedServices:(NSMutableDictionary *)arg1 ;
-(void)setConnectablePeripheralManager:(CBPeripheralManager *)arg1 ;
-(id)initWithServer:(id)arg1 ;
-(WPAdvertisingRequestsQueue *)advertisingRequests;
-(id)advertisingRules;
-(id)removeAdvertisingRequest:(id)arg1 forClient:(id)arg2 ;
-(void)setClientAdvertisingRequests:(NSMutableDictionary *)arg1 ;
-(CBPeripheralManager *)nonConnectablePeripheralManager;
-(id)advertisingRulesOSX;
-(NSMutableDictionary *)publishedServices;
-(void)setAdvertisingRequests:(WPAdvertisingRequestsQueue *)arg1 ;
-(WPDAdvertisingData *)currentNonConnectableAdvertisingData;
-(void)addAdvertisingRequest:(id)arg1 forDaemon:(id)arg2 ;
-(void)update;
-(void)enableRanging:(BOOL)arg1 forClient:(id)arg2 ;
-(id)NSUUIDfromCBUUID:(id)arg1 ;
-(id)advertisingRulesiOS;
-(NSMutableDictionary *)clientAdvertisingRequests;
-(NSMutableSet *)rangingClients;
-(id)getCurrentAdvertisers;
-(void)peripheralManager:(id)arg1 central:(id)arg2 didSubscribeToCharacteristic:(id)arg3 ;
-(void)peripheralManagerIsReadyToUpdateSubscribers:(id)arg1 ;
-(void)setCurrentConnectableAdvertisingData:(WPDAdvertisingData *)arg1 ;
-(id)getManager;
-(void)peripheralManager:(id)arg1 central:(id)arg2 didUnsubscribeFromCharacteristic:(id)arg3 ;
-(void)setNonConnectablePeripheralManager:(CBPeripheralManager *)arg1 ;
-(id)removeAdvertisingRequest:(id)arg1 forClient:(id)arg2 shouldUpdate:(BOOL)arg3 ;
-(WPDAdvertisingData *)currentConnectableAdvertisingData;
-(void)resetAdvertisingManager;
-(NSMutableSet *)clientsToNotifyOnAddressChange;
-(id)addAdvertisingRequest:(id)arg1 forClient:(id)arg2 ;
-(void)addCharacteristic:(id)arg1 Properties:(unsigned long long)arg2 Permissions:(unsigned long long)arg3 Service:(id)arg4 Name:(id)arg5 ;
-(void)setCurrentNonConnectableAdvertisingData:(WPDAdvertisingData *)arg1 ;
-(NSMutableDictionary *)preallocatedServices;
-(id)clientForAdvRequest:(id)arg1 ;
-(void)peripheralManager:(id)arg1 didReceiveWriteRequests:(id)arg2 ;
-(BOOL)platformSupportsMultipleAdvertising;
-(void)removeServiceForClient:(id)arg1 ;
-(void)peripheralManagerDidStartAdvertising:(id)arg1 error:(id)arg2 ;
-(void)setAllowCompoundAdvertisements:(BOOL)arg1 ;
-(void)removeAdvertisingRequest:(id)arg1 forDaemon:(id)arg2 ;
-(NSIndexSet *)rangingTypes;
-(void)peripheralManager:(id)arg1 didReceiveReadRequest:(id)arg2 ;
-(CBPeripheralManager *)connectablePeripheralManager;
-(void)setRangingClients:(NSMutableSet *)arg1 ;
-(void)updateAdvertiser;
-(void)setCurrentAdvertisers:(NSMutableIndexSet *)arg1 ;
-(BOOL)isAdvertiserTestMode;
@end

