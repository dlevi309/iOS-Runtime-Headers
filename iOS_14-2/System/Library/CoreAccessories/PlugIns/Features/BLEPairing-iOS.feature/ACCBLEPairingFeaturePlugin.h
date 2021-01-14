/*
* Generated on Thursday, January 14, 2021 at 2:26:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/CoreAccessories/PlugIns/Features/BLEPairing-iOS.feature/BLEPairing-iOS
*/

#import <libobjc.A.dylib/ACCBLEPairingProviderProtocol.h>
#import <libobjc.A.dylib/ACCBLEPairingShimProtocol.h>
#import <libobjc.A.dylib/ACCFeaturePluginProtocol.h>

@protocol OS_dispatch_queue;
@class ACCiAP2ShimServer, ACCBLEPairingProvider, NSObject, ACCBLEPairingShim, NSMutableDictionary, NSString;

@interface ACCBLEPairingFeaturePlugin : NSObject <ACCBLEPairingProviderProtocol, ACCBLEPairingShimProtocol, ACCFeaturePluginProtocol> {

	BOOL _isRunning;
	ACCiAP2ShimServer* _iap2server;
	ACCBLEPairingProvider* _blePairingProvider;
	NSObject*<OS_dispatch_queue> _blePairingQueue;
	ACCBLEPairingShim* _blePairingShim;
	NSMutableDictionary* _blePairingAccessoryList;

}

@property (assign,nonatomic) BOOL isRunning;                                             //@synthesize isRunning=_isRunning - In the implementation block
@property (nonatomic,retain) ACCiAP2ShimServer * iap2server;                             //@synthesize iap2server=_iap2server - In the implementation block
@property (nonatomic,retain) ACCBLEPairingProvider * blePairingProvider;                 //@synthesize blePairingProvider=_blePairingProvider - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> blePairingQueue;               //@synthesize blePairingQueue=_blePairingQueue - In the implementation block
@property (nonatomic,retain) ACCBLEPairingShim * blePairingShim;                         //@synthesize blePairingShim=_blePairingShim - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * blePairingAccessoryList;              //@synthesize blePairingAccessoryList=_blePairingAccessoryList - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * pluginName; 
-(void)setIsRunning:(BOOL)arg1 ;
-(NSString *)pluginName;
-(void)blePairingInfoUpdate:(id)arg1 pairType:(int)arg2 pairInfoList:(id)arg3 accessory:(id)arg4 blePairingUUID:(id)arg5 ;
-(void)blePairingStateUpdate:(id)arg1 validMask:(unsigned)arg2 btRadioOn:(BOOL)arg3 pairingState:(int)arg4 pairingModeOn:(BOOL)arg5 accessory:(id)arg6 blePairingUUID:(id)arg7 ;
-(void)setBlePairingAccessoryList:(NSMutableDictionary *)arg1 ;
-(void)setIap2server:(ACCiAP2ShimServer *)arg1 ;
-(NSObject*<OS_dispatch_queue>)blePairingQueue;
-(void)deviceUpdate:(id)arg1 pairType:(int)arg2 pairInfo:(id)arg3 ;
-(void)deviceSend:(id)arg1 pairType:(int)arg2 pairingData:(id)arg3 ;
-(void)deviceStartBLEUpdates:(id)arg1 pairType:(int)arg2 btRadio:(BOOL)arg3 pairInfo:(BOOL)arg4 ;
-(void)setBlePairingShim:(ACCBLEPairingShim *)arg1 ;
-(void)blePairing:(id)arg1 accessoryDetached:(id)arg2 blePairingUUID:(id)arg3 ;
-(ACCBLEPairingProvider *)blePairingProvider;
-(void)deviceStopBLEUpdates:(id)arg1 ;
-(void)deviceStateUpdate:(id)arg1 btRadio:(unsigned char)arg2 pairStatus:(int)arg3 pairModeOn:(BOOL)arg4 forceUpdates:(BOOL)arg5 ;
-(NSString *)description;
-(void)blePairing:(id)arg1 accessoryAttached:(id)arg2 blePairingUUID:(id)arg3 accInfoDict:(id)arg4 supportedPairTypes:(id)arg5 ;
-(ACCBLEPairingShim *)blePairingShim;
-(void)setBlePairingProvider:(ACCBLEPairingProvider *)arg1 ;
-(NSMutableDictionary *)blePairingAccessoryList;
-(BOOL)isRunning;
-(void)stopPlugin;
-(void)blePairingDataUpdate:(id)arg1 pairType:(int)arg2 pairData:(id)arg3 accessory:(id)arg4 blePairingUUID:(id)arg5 ;
-(void)initPlugin;
-(ACCiAP2ShimServer *)iap2server;
-(void)startPlugin;
-(BOOL)_isSupportedType:(unsigned char)arg1 supportedListData:(id)arg2 ;
-(id)bleAccessoryForConnectionID:(unsigned)arg1 ;
-(void)setBlePairingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

