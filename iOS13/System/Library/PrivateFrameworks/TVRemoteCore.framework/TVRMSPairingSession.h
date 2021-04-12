/*
* Generated on Monday, March 1, 2021 at 2:35:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
*/

#import <libobjc.A.dylib/NSNetServiceDelegate.h>
#import <TVRemoteCore/TVRMSPairingServerDelegate.h>
#import <TVRemoteCore/TVRMSPairingSession.h>
@class NSString;


@protocol TVRMSPairingSession <NSObject>
@property (assign,nonatomic,__weak) id<TVRMSPairingSessionDelegate> delegate; 
@property (nonatomic,retain) NSString * passcode; 
@property (nonatomic,retain) NSString * advertisedAppName; 
@property (nonatomic,retain) NSString * advertisedDeviceName; 
@property (nonatomic,retain) NSString * advertisedDeviceModel; 
@required
-(id<TVRMSPairingSessionDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)endPairing;
-(NSString *)passcode;
-(void)setPasscode:(id)arg1;
-(void)beginPairing;
-(NSString *)advertisedAppName;
-(void)setAdvertisedAppName:(id)arg1;
-(NSString *)advertisedDeviceName;
-(void)setAdvertisedDeviceName:(id)arg1;
-(NSString *)advertisedDeviceModel;
-(void)setAdvertisedDeviceModel:(id)arg1;

@end


@protocol TVRMSPairingSessionDelegate;
@class NSString, TVRMSPairingServer;

@interface TVRMSPairingSession : NSObject <NSNetServiceDelegate, TVRMSPairingServerDelegate, TVRMSPairingSession> {

	TVRMSPairingServer* _pairingServer;
	id<TVRMSPairingSessionDelegate> _delegate;
	NSString* _passcode;
	NSString* _advertisedAppName;
	NSString* _advertisedDeviceName;
	NSString* _advertisedDeviceModel;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<TVRMSPairingSessionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSString * passcode;                                          //@synthesize passcode=_passcode - In the implementation block
@property (nonatomic,retain) NSString * advertisedAppName;                                 //@synthesize advertisedAppName=_advertisedAppName - In the implementation block
@property (nonatomic,retain) NSString * advertisedDeviceName;                              //@synthesize advertisedDeviceName=_advertisedDeviceName - In the implementation block
@property (nonatomic,retain) NSString * advertisedDeviceModel;                             //@synthesize advertisedDeviceModel=_advertisedDeviceModel - In the implementation block
+(id)localPairingSession;
+(id)proxyPairingSession;
-(id)init;
-(void)dealloc;
-(id<TVRMSPairingSessionDelegate>)delegate;
-(void)setDelegate:(id<TVRMSPairingSessionDelegate>)arg1 ;
-(void)netService:(id)arg1 didNotPublish:(id)arg2 ;
-(void)netServiceDidStop:(id)arg1 ;
-(void)netServiceDidPublish:(id)arg1 ;
-(void)endPairing;
-(NSString *)passcode;
-(void)setPasscode:(NSString *)arg1 ;
-(void)beginPairing;
-(NSString *)advertisedAppName;
-(void)setAdvertisedAppName:(NSString *)arg1 ;
-(NSString *)advertisedDeviceName;
-(void)setAdvertisedDeviceName:(NSString *)arg1 ;
-(NSString *)advertisedDeviceModel;
-(void)setAdvertisedDeviceModel:(NSString *)arg1 ;
-(id)_generatePublicKey;
-(id)_expectedPasscodeHashForPasscode:(id)arg1 publicKey:(id)arg2 ;
-(void)_startBonjourAdvertisingWithPublicKey:(id)arg1 httpServerPort:(unsigned short)arg2 ;
-(id)_pairingNetServiceName;
-(void)pairingServer:(id)arg1 didPairWithService:(id)arg2 pairingGUID:(id)arg3 ;
-(void)pairingServerDidFail:(id)arg1 ;
@end

