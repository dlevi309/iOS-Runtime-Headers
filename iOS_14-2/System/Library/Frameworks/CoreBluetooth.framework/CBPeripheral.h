/*
* Generated on Thursday, January 14, 2021 at 2:23:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
*/

#import <CoreBluetooth/CoreBluetooth-Structs.h>
#import <CoreBluetooth/CBPeer.h>

@protocol CBPeripheralDelegate;
@class NSMutableDictionary, NSString, NSNumber, NSArray, NSHashTable;

@interface CBPeripheral : CBPeer {

	struct {
		unsigned didUpdateName : 1;
		unsigned didModifyServices : 1;
		unsigned didReadRSSI : 1;
		unsigned didUpdateRSSI : 1;
		unsigned didDiscoverServices : 1;
		unsigned didDiscoverIncludedServices : 1;
		unsigned didDiscoverCharacteristics : 1;
		unsigned didUpdateCharacteristicValue : 1;
		unsigned didWriteCharacteristicValue : 1;
		unsigned didNotifyCharacteristicValue : 1;
		unsigned didDiscoverDescriptors : 1;
		unsigned didUpdateDescriptorValue : 1;
		unsigned didWriteDescriptorValue : 1;
		unsigned didReceiveTimeSync : 1;
		unsigned didOpenL2CAPChannel : 1;
	}  _delegateFlags;
	NSMutableDictionary* _attributes;
	BOOL _canSendWriteWithoutResponse;
	BOOL _ancsAuthorized;
	BOOL _isConnectedToSystem;
	BOOL _visibleInSettings;
	BOOL _connectedToSystem;
	unsigned short _appearance;
	unsigned _writesPending;
	id<CBPeripheralDelegate> _delegate;
	NSString* _name;
	NSNumber* _RSSI;
	long long _state;
	NSArray* _services;
	NSHashTable* _l2capChannels;
	NSString* _BDAddress;

}

@property (retain) NSString * name;                                                            //@synthesize name=_name - In the implementation block
@property (assign) unsigned short appearance;                                                  //@synthesize appearance=_appearance - In the implementation block
@property (retain) NSNumber * RSSI;                                                            //@synthesize RSSI=_RSSI - In the implementation block
@property (assign) long long state;                                                            //@synthesize state=_state - In the implementation block
@property (retain) NSArray * services;                                                         //@synthesize services=_services - In the implementation block
@property (assign) unsigned writesPending;                                                     //@synthesize writesPending=_writesPending - In the implementation block
@property (assign) BOOL canSendWriteWithoutResponse;                                           //@synthesize canSendWriteWithoutResponse=_canSendWriteWithoutResponse - In the implementation block
@property (assign) BOOL ancsAuthorized;                                                        //@synthesize ancsAuthorized=_ancsAuthorized - In the implementation block
@property (nonatomic,readonly) BOOL isConnectedToSystem;                                       //@synthesize isConnectedToSystem=_isConnectedToSystem - In the implementation block
@property (nonatomic,retain,readonly) NSHashTable * l2capChannels;                             //@synthesize l2capChannels=_l2capChannels - In the implementation block
@property (retain) NSString * BDAddress;                                                       //@synthesize BDAddress=_BDAddress - In the implementation block
@property (readonly) BOOL visibleInSettings;                                                   //@synthesize visibleInSettings=_visibleInSettings - In the implementation block
@property (getter=isConnectedToSystem,nonatomic,readonly) BOOL connectedToSystem;              //@synthesize connectedToSystem=_connectedToSystem - In the implementation block
@property (assign,nonatomic,__weak) id<CBPeripheralDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
-(id)sendSyncMsg:(int)arg1 args:(id)arg2 ;
-(void)handleL2CAPChannelClosed:(id)arg1 ;
-(void)handleL2CAPChannelOpened:(id)arg1 ;
-(BOOL)isConnected;
-(NSArray *)services;
-(void)setNotifyValue:(BOOL)arg1 forCharacteristic:(id)arg2 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setHighPriorityStream:(BOOL)arg1 duration:(id)arg2 ;
-(void)handleNameUpdated:(id)arg1 ;
-(void)setServices:(NSArray *)arg1 ;
-(void)handleCharacteristicValueNotifying:(id)arg1 ;
-(void)getTimeSyncData;
-(id<CBPeripheralDelegate>)delegate;
-(void)handleDescriptorValueWritten:(id)arg1 ;
-(void)handleSuccessfulConnection:(id)arg1 ;
-(void)setAppearance:(unsigned short)arg1 ;
-(void)setBDAddress:(NSString *)arg1 ;
-(NSString *)BDAddress;
-(void)invalidateAllAttributes;
-(void)setPeripheralName:(id)arg1 ;
-(void)setOrphan;
-(void)discoverDescriptorsForCharacteristic:(id)arg1 ;
-(BOOL)ancsAuthorized;
-(void)handleServiceCharacteristicsDiscovered:(id)arg1 ;
-(void)handleRSSIUpdated:(id)arg1 ;
-(void)readRSSI;
-(NSNumber *)RSSI;
-(id)attributeForHandle:(id)arg1 ;
-(unsigned)writesPending;
-(void)handleVisibilityChanged:(id)arg1 ;
-(void)removeAttributeForHandle:(id)arg1 ;
-(NSString *)name;
-(void)handleDisconnection;
-(void)handleTimeSyncResponse:(id)arg1 ;
-(void)setDelegate:(id<CBPeripheralDelegate>)arg1 ;
-(id)description;
-(void)writeValue:(id)arg1 forDescriptor:(id)arg2 ;
-(BOOL)visibleInSettings;
-(void)handleServicesChanged:(id)arg1 ;
-(void)writeValue:(id)arg1 forCharacteristic:(id)arg2 type:(long long)arg3 ;
-(void)sendMsg:(int)arg1 args:(id)arg2 ;
-(void)discoverServices:(id)arg1 ;
-(void)readValueForDescriptor:(id)arg1 ;
-(void)handleServiceIncludedServicesDiscovered:(id)arg1 ;
-(id)l2capChannelForPeer:(id)arg1 withPsm:(unsigned short)arg2 ;
-(void)handleDescriptorEvent:(id)arg1 descriptorSelector:(SEL)arg2 delegateSelector:(SEL)arg3 delegateFlag:(BOOL)arg4 ;
-(void)setAncsAuthorized:(BOOL)arg1 ;
-(id)initWithCentralManager:(id)arg1 info:(id)arg2 ;
-(void)removeAllL2CAPChannels;
-(void)setState:(long long)arg1 ;
-(void)readValueForCharacteristic:(id)arg1 ;
-(NSHashTable *)l2capChannels;
-(void)setAttribute:(id)arg1 forHandle:(id)arg2 ;
-(long long)state;
-(void)setCanSendWriteWithoutResponse:(BOOL)arg1 ;
-(void)handleConnectionStateUpdated:(BOOL)arg1 ;
-(unsigned long long)maximumWriteValueLengthForType:(long long)arg1 ;
-(void)handleCharacteristicValueWritten:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)handleServicesDiscovered:(id)arg1 ;
-(void)handleFailedConnection;
-(unsigned short)appearance;
-(void)handleMsg:(int)arg1 args:(id)arg2 ;
-(void)handleCharacteristicValueUpdated:(id)arg1 ;
-(void)discoverIncludedServices:(id)arg1 forService:(id)arg2 ;
-(void)setWritesPending:(unsigned)arg1 ;
-(void)openL2CAPChannel:(unsigned short)arg1 options:(id)arg2 ;
-(void)setBroadcastValue:(BOOL)arg1 forCharacteristic:(id)arg2 ;
-(BOOL)isConnectedToSystem;
-(BOOL)isConnectedToSystem;
-(void)handleServiceEvent:(id)arg1 serviceSelector:(SEL)arg2 delegateSelector:(SEL)arg3 delegateFlag:(BOOL)arg4 ;
-(void)handleCharacteristicEvent:(id)arg1 characteristicSelector:(SEL)arg2 delegateSelector:(SEL)arg3 delegateFlag:(BOOL)arg4 ;
-(void)setVisibleInSettings:(BOOL)arg1 ;
-(void)discoverCharacteristics:(id)arg1 forService:(id)arg2 ;
-(void)handleDescriptorValueUpdated:(id)arg1 ;
-(void)handleAttributeEvent:(id)arg1 args:(id)arg2 attributeSelector:(SEL)arg3 delegateSelector:(SEL)arg4 delegateFlag:(BOOL)arg5 ;
-(void)handleCharacteristicDescriptorsDiscovered:(id)arg1 ;
-(void)dealloc;
-(void)sendMsg:(int)arg1 requiresConnected:(BOOL)arg2 args:(id)arg3 ;
-(void)setRSSI:(NSNumber *)arg1 ;
-(void)openL2CAPChannel:(unsigned short)arg1 ;
-(BOOL)canSendWriteWithoutResponse;
-(void)isReadyForUpdates;
@end

