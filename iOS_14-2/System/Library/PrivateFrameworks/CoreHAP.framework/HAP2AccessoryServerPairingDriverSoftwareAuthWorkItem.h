/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <CoreHAP/HAP2AccessoryServerPairingDriverWorkItem.h>
#import <libobjc.A.dylib/HAPAuthSessionDelegate.h>

@protocol HAP2AccessoryServerSecureTransport, HAP2AccessoryServerEncoding;
@class HAPPairSetupSession, HAPAccessoryProtocolInfo, NSError, HAPAuthSession, NSString;

@interface HAP2AccessoryServerPairingDriverSoftwareAuthWorkItem : HAP2AccessoryServerPairingDriverWorkItem <HAPAuthSessionDelegate> {

	BOOL _sendPDUHeader;
	id<HAP2AccessoryServerSecureTransport> _transport;
	id<HAP2AccessoryServerEncoding> _encoding;
	HAPPairSetupSession* _pairingSession;
	HAPAccessoryProtocolInfo* _authenticatedProtocolInfo;
	NSError* _cancelError;
	HAPAuthSession* _authSession;

}

@property (nonatomic,readonly) id<HAP2AccessoryServerSecureTransport> transport;                //@synthesize transport=_transport - In the implementation block
@property (nonatomic,readonly) id<HAP2AccessoryServerEncoding> encoding;                        //@synthesize encoding=_encoding - In the implementation block
@property (nonatomic,retain) HAPPairSetupSession * pairingSession;                              //@synthesize pairingSession=_pairingSession - In the implementation block
@property (nonatomic,retain) HAPAccessoryProtocolInfo * authenticatedProtocolInfo;              //@synthesize authenticatedProtocolInfo=_authenticatedProtocolInfo - In the implementation block
@property (nonatomic,retain) NSError * cancelError;                                             //@synthesize cancelError=_cancelError - In the implementation block
@property (nonatomic,retain) HAPAuthSession * authSession;                                      //@synthesize authSession=_authSession - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)doSoftwareAuth;
-(id<HAP2AccessoryServerSecureTransport>)transport;
-(void)cancelWithError:(id)arg1 ;
-(void)setCancelError:(NSError *)arg1 ;
-(id<HAP2AccessoryServerEncoding>)encoding;
-(void)setPairingSession:(HAPPairSetupSession *)arg1 ;
-(NSError *)cancelError;
-(HAPPairSetupSession *)pairingSession;
-(void)authSession:(id)arg1 sendAuthExchangeData:(id)arg2 ;
-(void)authSession:(id)arg1 validateUUID:(id)arg2 token:(id)arg3 ;
-(void)authSession:(id)arg1 authenticateUUID:(id)arg2 token:(id)arg3 ;
-(void)authSession:(id)arg1 confirmUUID:(id)arg2 token:(id)arg3 ;
-(void)authSession:(id)arg1 authComplete:(id)arg2 ;
-(HAPAuthSession *)authSession;
-(HAPAccessoryProtocolInfo *)authenticatedProtocolInfo;
-(void)setAuthenticatedProtocolInfo:(HAPAccessoryProtocolInfo *)arg1 ;
-(void)runForPairingDriver:(id)arg1 ;
-(void)setAuthSession:(HAPAuthSession *)arg1 ;
-(void)_startSoftwareAuth;
-(void)_validateAccessoryInfoWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)_isProtocolInfoValid:(id)arg1 ;
-(void)_sendSoftwareAuthMessageWithData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_handleAuthCompleteWithError:(id)arg1 ;
-(void)_softwareAuthFinished;
@end

