/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WPDaemon.framework/WPDaemon
*/

#import <libobjc.A.dylib/CBPeripheralDelegate.h>

@protocol OS_voucher;
@class WPDClient, NSMutableSet, CBPeripheral, CBCentral, NSDictionary, WPCharacteristic, NSString, CBCharacteristic, CBService, CBPeripheralManager, NSObject;

@interface WPDConnection : NSObject <CBPeripheralDelegate> {

	BOOL _didConnectSent;
	BOOL _connectablePacket;
	WPDClient* _client;
	NSMutableSet* _subscribedCharacteristics;
	long long _connectionType;
	long long _recentRole;
	CBPeripheral* _peripheral;
	CBCentral* _central;
	NSDictionary* _charsAndServicesToDiscover;
	WPCharacteristic* _characteristicToSend;
	NSString* _characteristicService;
	unsigned long long _dataLeftToSend;
	CBCharacteristic* _centralCharacteristic;
	CBService* _centralService;
	CBPeripheralManager* _sendDataManager;
	NSObject*<OS_voucher> _voucher;

}

@property (retain) CBPeripheral * peripheral;                                                  //@synthesize peripheral=_peripheral - In the implementation block
@property (retain) CBCentral * central;                                                        //@synthesize central=_central - In the implementation block
@property (retain) NSDictionary * charsAndServicesToDiscover;                                  //@synthesize charsAndServicesToDiscover=_charsAndServicesToDiscover - In the implementation block
@property (retain) WPCharacteristic * characteristicToSend;                                    //@synthesize characteristicToSend=_characteristicToSend - In the implementation block
@property (retain) NSString * characteristicService;                                           //@synthesize characteristicService=_characteristicService - In the implementation block
@property (assign) unsigned long long dataLeftToSend;                                          //@synthesize dataLeftToSend=_dataLeftToSend - In the implementation block
@property (retain) CBCharacteristic * centralCharacteristic;                                   //@synthesize centralCharacteristic=_centralCharacteristic - In the implementation block
@property (retain) CBService * centralService;                                                 //@synthesize centralService=_centralService - In the implementation block
@property (retain) CBPeripheralManager * sendDataManager;                                      //@synthesize sendDataManager=_sendDataManager - In the implementation block
@property (assign) BOOL connectablePacket;                                                     //@synthesize connectablePacket=_connectablePacket - In the implementation block
@property (retain) NSObject*<OS_voucher> voucher;                                              //@synthesize voucher=_voucher - In the implementation block
@property (assign,nonatomic,__weak) WPDClient * client;                                        //@synthesize client=_client - In the implementation block
@property (nonatomic,retain) NSMutableSet * subscribedCharacteristics;                         //@synthesize subscribedCharacteristics=_subscribedCharacteristics - In the implementation block
@property (assign,getter=fetchConnectionType,nonatomic) long long connectionType;              //@synthesize connectionType=_connectionType - In the implementation block
@property (assign,nonatomic) BOOL didConnectSent;                                              //@synthesize didConnectSent=_didConnectSent - In the implementation block
@property (assign,nonatomic) long long recentRole;                                             //@synthesize recentRole=_recentRole - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(WPDClient *)client;
-(void)setClient:(WPDClient *)arg1 ;
-(long long)connectionType;
-(void)setConnectionType:(long long)arg1 ;
-(NSObject*<OS_voucher>)voucher;
-(void)setVoucher:(NSObject*<OS_voucher>)arg1 ;
-(void)peripheral:(id)arg1 didModifyServices:(id)arg2 ;
-(void)peripheral:(id)arg1 didDiscoverServices:(id)arg2 ;
-(void)peripheral:(id)arg1 didDiscoverCharacteristicsForService:(id)arg2 error:(id)arg3 ;
-(void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 error:(id)arg3 ;
-(void)peripheral:(id)arg1 didWriteValueForCharacteristic:(id)arg2 error:(id)arg3 ;
-(void)peripheral:(id)arg1 didUpdateNotificationStateForCharacteristic:(id)arg2 error:(id)arg3 ;
-(CBPeripheral *)peripheral;
-(void)setPeripheral:(CBPeripheral *)arg1 ;
-(CBCentral *)central;
-(id)sendDataToCharacteristic:(id)arg1 inService:(id)arg2 forPeer:(id)arg3 ;
-(void)discoverCharacteristicsAndServices:(id)arg1 forPeripheral:(id)arg2 ;
-(id)initWithPeripheral:(id)arg1 ;
-(void)resetData;
-(void)updateWithPeripheral:(id)arg1 ;
-(void)setCentral:(CBCentral *)arg1 ;
-(id)getPeripheral;
-(BOOL)didConnectSent;
-(void)setDidConnectSent:(BOOL)arg1 ;
-(NSMutableSet *)subscribedCharacteristics;
-(long long)fetchConnectionType;
-(id)getPeripheralUUID;
-(void)holdVoucher;
-(long long)recentRole;
-(id)subscribe:(BOOL)arg1 toPeer:(id)arg2 withCharacteristic:(id)arg3 inService:(id)arg4 ;
-(void)readyForDataTransfer;
-(void)updateWithCentral:(id)arg1 characteristic:(id)arg2 ;
-(void)setRecentRole:(long long)arg1 ;
-(void)setCharsAndServicesToDiscover:(NSDictionary *)arg1 ;
-(void)setSubscribedCharacteristics:(NSMutableSet *)arg1 ;
-(void)setCentralCharacteristic:(CBCharacteristic *)arg1 ;
-(void)setCentralService:(CBService *)arg1 ;
-(NSDictionary *)charsAndServicesToDiscover;
-(id)getCharacteristicWithUUID:(id)arg1 inService:(id)arg2 forPeripheral:(id)arg3 ;
-(WPCharacteristic *)characteristicToSend;
-(void)setDataLeftToSend:(unsigned long long)arg1 ;
-(void)setCharacteristicToSend:(WPCharacteristic *)arg1 ;
-(void)setCharacteristicService:(NSString *)arg1 ;
-(void)sendDataToCentral;
-(void)sendDataToPeripheral;
-(unsigned long long)dataLeftToSend;
-(CBCharacteristic *)centralCharacteristic;
-(CBService *)centralService;
-(NSString *)characteristicService;
-(id)initWithCentral:(id)arg1 characteristic:(id)arg2 ;
-(id)getCentral;
-(CBPeripheralManager *)sendDataManager;
-(void)setSendDataManager:(CBPeripheralManager *)arg1 ;
-(BOOL)connectablePacket;
-(void)setConnectablePacket:(BOOL)arg1 ;
@end

