/*
* Generated on Thursday, January 14, 2021 at 2:25:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <CoreHAP/HAPAccessoryServer.h>

@class NSNumber, NSDictionary, HMDDAccessoryServerBrowserDemo;

@interface HMDDAccessoryServerDemo : HAPAccessoryServer {

	BOOL __paired;
	BOOL __hasPairings;
	NSNumber* _category;
	NSDictionary* _accessoryInfo;
	HMDDAccessoryServerBrowserDemo* _browser;

}

@property (assign,nonatomic,__weak) HMDDAccessoryServerBrowserDemo * browser;              //@synthesize browser=_browser - In the implementation block
@property (assign,nonatomic) BOOL _paired;                                                 //@synthesize _paired=__paired - In the implementation block
@property (assign,nonatomic) BOOL _hasPairings;                                            //@synthesize _hasPairings=__hasPairings - In the implementation block
@property (nonatomic,retain) NSDictionary * accessoryInfo;                                 //@synthesize accessoryInfo=_accessoryInfo - In the implementation block
-(BOOL)isPaired;
-(void)setCategory:(id)arg1 ;
-(HMDDAccessoryServerBrowserDemo *)browser;
-(long long)linkType;
-(id)category;
-(BOOL)_paired;
-(void)setBrowser:(HMDDAccessoryServerBrowserDemo *)arg1 ;
-(BOOL)_delegateRespondsToSelector:(SEL)arg1 ;
-(id)initWithName:(id)arg1 identifier:(id)arg2 deviceInfo:(id)arg3 paired:(BOOL)arg4 keyStore:(id)arg5 browser:(id)arg6 ;
-(NSDictionary *)accessoryInfo;
-(void)listPairingsWithCompletionQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)writeCharacteristicValues:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)readCharacteristicValues:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)enableEvents:(BOOL)arg1 forCharacteristics:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 queue:(id)arg4 ;
-(void)identifyWithCompletion:(/*^block*/id)arg1 ;
-(id)initCommon:(id)arg1 browser:(id)arg2 ;
-(void)_parseAttributeDatabase:(id)arg1 ;
-(void)processCharacteristicWrite:(id)arg1 value:(id)arg2 ;
-(BOOL)hasPairings;
-(void)discoverAccessories;
-(void)startPairingWithConsentRequired:(BOOL)arg1 config:(id)arg2 ownershipToken:(id)arg3 ;
-(void)continuePairingAfterAuthPrompt;
-(BOOL)stopPairingWithError:(id*)arg1 ;
-(BOOL)tryPairingPassword:(id)arg1 error:(id*)arg2 ;
-(void)addPairing:(id)arg1 completionQueue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)removePairing:(id)arg1 completionQueue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)removePairingForCurrentControllerOnQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)handleUpdatesForCharacteristics:(id)arg1 ;
-(void)setAccessoryInfo:(NSDictionary *)arg1 ;
-(void)set_paired:(BOOL)arg1 ;
-(BOOL)_hasPairings;
-(void)set_hasPairings:(BOOL)arg1 ;
@end

