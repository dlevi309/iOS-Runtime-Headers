/*
* Generated on Thursday, January 14, 2021 at 2:28:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)endPairing;
-(void)setDelegate:(id)arg1;
-(void)setPasscode:(id)arg1;
-(NSString *)passcode;
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
-(id<TVRMSPairingSessionDelegate>)delegate;
-(void)netServiceDidPublish:(id)arg1 ;
-(void)netService:(id)arg1 didNotPublish:(id)arg2 ;
-(void)netServiceDidStop:(id)arg1 ;
-(void)endPairing;
-(void)setDelegate:(id<TVRMSPairingSessionDelegate>)arg1 ;
-(void)setPasscode:(NSString *)arg1 ;
-(NSString *)passcode;
-(void)dealloc;
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

