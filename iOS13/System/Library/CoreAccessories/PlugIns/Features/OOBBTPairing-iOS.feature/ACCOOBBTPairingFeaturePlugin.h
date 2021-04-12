/*
* Generated on Monday, March 1, 2021 at 2:35:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/CoreAccessories/PlugIns/Features/OOBBTPairing-iOS.feature/OOBBTPairing-iOS
*/

#import <libobjc.A.dylib/ACCOOBBTPairingProviderProtocol.h>
#import <libobjc.A.dylib/ACCOOBBTPairingShimProtocol.h>
#import <libobjc.A.dylib/ACCFeaturePluginProtocol.h>

@protocol OS_dispatch_queue;
@class ACCiAP2ShimServer, ACCOOBBTPairingProvider, NSObject, ACCOOBBTPairingShim, NSMutableDictionary, NSString;

@interface ACCOOBBTPairingFeaturePlugin : NSObject <ACCOOBBTPairingProviderProtocol, ACCOOBBTPairingShimProtocol, ACCFeaturePluginProtocol> {

	BOOL _isRunning;
	ACCiAP2ShimServer* _iap2server;
	ACCOOBBTPairingProvider* _oobBtPairingProvider;
	NSObject*<OS_dispatch_queue> _oobBtPairingQueue;
	ACCOOBBTPairingShim* _oobBtPairingShim;
	NSMutableDictionary* _oobBtPairingAccessoryList;

}

@property (assign,nonatomic) BOOL isRunning;                                               //@synthesize isRunning=_isRunning - In the implementation block
@property (nonatomic,retain) ACCiAP2ShimServer * iap2server;                               //@synthesize iap2server=_iap2server - In the implementation block
@property (nonatomic,retain) ACCOOBBTPairingProvider * oobBtPairingProvider;               //@synthesize oobBtPairingProvider=_oobBtPairingProvider - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> oobBtPairingQueue;               //@synthesize oobBtPairingQueue=_oobBtPairingQueue - In the implementation block
@property (nonatomic,retain) ACCOOBBTPairingShim * oobBtPairingShim;                       //@synthesize oobBtPairingShim=_oobBtPairingShim - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * oobBtPairingAccessoryList;              //@synthesize oobBtPairingAccessoryList=_oobBtPairingAccessoryList - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * pluginName; 
-(NSString *)description;
-(BOOL)isRunning;
-(void)setIsRunning:(BOOL)arg1 ;
-(NSString *)pluginName;
-(void)initPlugin;
-(void)startPlugin;
-(void)stopPlugin;
-(void)startOOBBTPairing:(id)arg1 ;
-(void)stopOOBBTPairing:(id)arg1 ;
-(void)oobBtPairing:(id)arg1 accessoryAttached:(id)arg2 accInfoDict:(id)arg3 ;
-(void)oobBtPairing:(id)arg1 accessoryDetached:(id)arg2 ;
-(void)oobBtPairing:(id)arg1 accessoryInfo:(id)arg2 oobBtPairingUID:(id)arg3 accessoryMacAddr:(id)arg4 deviceClass:(unsigned)arg5 ;
-(void)oobBtPairing:(id)arg1 completion:(id)arg2 oobBtPairingUID:(id)arg3 result:(unsigned char)arg4 ;
-(void)oobBtPairing:(id)arg1 legacyConnectionIDForAccessoryUID:(id)arg2 connectionID:(unsigned)arg3 ;
-(ACCiAP2ShimServer *)iap2server;
-(void)setIap2server:(ACCiAP2ShimServer *)arg1 ;
-(void)linkKey:(id)arg1 deviceMacAddr:(id)arg2 accessory:(id)arg3 ;
-(id)oobBtAccessoryForConnectionID:(unsigned)arg1 ;
-(ACCOOBBTPairingProvider *)oobBtPairingProvider;
-(void)setOobBtPairingProvider:(ACCOOBBTPairingProvider *)arg1 ;
-(NSObject*<OS_dispatch_queue>)oobBtPairingQueue;
-(void)setOobBtPairingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(ACCOOBBTPairingShim *)oobBtPairingShim;
-(void)setOobBtPairingShim:(ACCOOBBTPairingShim *)arg1 ;
-(NSMutableDictionary *)oobBtPairingAccessoryList;
-(void)setOobBtPairingAccessoryList:(NSMutableDictionary *)arg1 ;
@end

