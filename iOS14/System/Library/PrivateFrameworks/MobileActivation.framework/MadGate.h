/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileActivation.framework/MobileActivation
*/


#import <MobileActivation/MobileActivation-Structs.h>
@class NSXPCConnection;

@interface MadGate : NSObject {

	NSXPCConnection* _connection;

}

@property (nonatomic,readonly) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
-(id)createTunnel1SessionInfo:(id*)arg1 ;
-(id)init;
-(id)getActivationState:(id*)arg1 ;
-(id)copyPCRTToken:(id*)arg1 ;
-(void)updateBasebandTicket:(SecKeyRef)arg1 baaCert:(SecCertificateRef)arg2 baaIntermediateCert:(SecCertificateRef)arg3 options:(id)arg4 withCompletion:(/*^block*/id)arg5 ;
-(BOOL)isDeviceABrick:(id*)arg1 ;
-(BOOL)deactivateDevice:(id*)arg1 ;
-(BOOL)handleActivationInfo:(id)arg1 withError:(id*)arg2 ;
-(BOOL)reactivateDevice:(id*)arg1 ;
-(id)copyActivationRecord:(id*)arg1 ;
-(NSXPCConnection *)connection;
-(BOOL)recertifyDeviceWithError:(id*)arg1 ;
-(BOOL)isInFieldCollected:(id*)arg1 ;
-(id)getUCRTActivationLockState:(id*)arg1 ;
-(id)createActivationInfo:(id*)arg1 ;
-(BOOL)handleActivationInfoWithSession:(id)arg1 activationSignature:(id)arg2 error:(id*)arg3 ;
-(id)issueClientCertificateLegacy:(id)arg1 error:(id*)arg2 ;
-(BOOL)isUCRTAvailable:(id*)arg1 ;
-(BOOL)unbrickDevice:(id*)arg1 ;
-(id)createTunnel1ActivationInfo:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)getActivationBuild:(id*)arg1 ;
-(void)dealloc;
@end

