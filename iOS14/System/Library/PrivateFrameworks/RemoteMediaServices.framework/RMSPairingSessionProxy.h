/*
* Generated on Thursday, January 14, 2021 at 2:28:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
*/

#import <RemoteMediaServices/RMSSessionProxy.h>
#import <libobjc.A.dylib/RMSPairingSession.h>

@protocol RMSPairingSessionDelegate;
@class NSString, RMSIDSClient;

@interface RMSPairingSessionProxy : RMSSessionProxy <RMSPairingSession> {

	RMSIDSClient* _idsClient;
	BOOL _pairing;
	id<RMSPairingSessionDelegate> _delegate;
	NSString* _passcode;
	NSString* _advertisedAppName;
	NSString* _advertisedDeviceName;
	NSString* _advertisedDeviceModel;

}

@property (assign,nonatomic,__weak) id<RMSPairingSessionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSString * passcode;                                        //@synthesize passcode=_passcode - In the implementation block
@property (nonatomic,retain) NSString * advertisedAppName;                               //@synthesize advertisedAppName=_advertisedAppName - In the implementation block
@property (nonatomic,retain) NSString * advertisedDeviceName;                            //@synthesize advertisedDeviceName=_advertisedDeviceName - In the implementation block
@property (nonatomic,retain) NSString * advertisedDeviceModel;                           //@synthesize advertisedDeviceModel=_advertisedDeviceModel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<RMSPairingSessionDelegate>)delegate;
-(void)endPairing;
-(void)setDelegate:(id<RMSPairingSessionDelegate>)arg1 ;
-(void)setPasscode:(NSString *)arg1 ;
-(NSString *)passcode;
-(void)dealloc;
-(void)beginPairing;
-(void)_handleSessionDidEndNotification:(id)arg1 ;
-(void)heartbeatDidFail;
-(void)_handleDidPairWithServiceNotification:(id)arg1 ;
-(void)_handlePairingDidFailNotification:(id)arg1 ;
-(void)_notifyDelegatePairingFailed;
-(void)unpairService:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSString *)advertisedAppName;
-(void)setAdvertisedAppName:(NSString *)arg1 ;
-(NSString *)advertisedDeviceName;
-(void)setAdvertisedDeviceName:(NSString *)arg1 ;
-(NSString *)advertisedDeviceModel;
-(void)setAdvertisedDeviceModel:(NSString *)arg1 ;
@end

