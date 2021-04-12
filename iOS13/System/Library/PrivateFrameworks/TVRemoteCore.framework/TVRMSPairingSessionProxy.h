/*
* Generated on Monday, March 1, 2021 at 2:35:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
*/

#import <TVRemoteCore/TVRMSSessionProxy.h>
#import <TVRemoteCore/TVRMSPairingSession.h>

@protocol TVRMSPairingSessionDelegate;
@class TVRMSIDSClient, NSString;

@interface TVRMSPairingSessionProxy : TVRMSSessionProxy <TVRMSPairingSession> {

	TVRMSIDSClient* _idsClient;
	BOOL _pairing;
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
-(id)init;
-(void)dealloc;
-(id<TVRMSPairingSessionDelegate>)delegate;
-(void)setDelegate:(id<TVRMSPairingSessionDelegate>)arg1 ;
-(void)endPairing;
-(NSString *)passcode;
-(void)setPasscode:(NSString *)arg1 ;
-(void)beginPairing;
-(void)_handleSessionDidEndNotification:(id)arg1 ;
-(void)heartbeatDidFail;
-(void)_handleDidPairWithServiceNotification:(id)arg1 ;
-(void)_handlePairingDidFailNotification:(id)arg1 ;
-(void)_notifyDelegatePairingFailed;
-(NSString *)advertisedAppName;
-(void)setAdvertisedAppName:(NSString *)arg1 ;
-(NSString *)advertisedDeviceName;
-(void)setAdvertisedDeviceName:(NSString *)arg1 ;
-(NSString *)advertisedDeviceModel;
-(void)setAdvertisedDeviceModel:(NSString *)arg1 ;
@end

