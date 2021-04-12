/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileActivation.framework/MobileActivation
*/


#import <MobileActivation/MobileActivation-Structs.h>
@class NSXPCConnection;

@interface MadGate : NSObject {

	NSXPCConnection* _connection;

}

@property (nonatomic,readonly) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
-(id)init;
-(void)dealloc;
-(NSXPCConnection *)connection;
-(id)getUCRTActivationLockState:(id*)arg1 ;
-(id)getActivationState:(id*)arg1 ;
-(id)getActivationBuild:(id*)arg1 ;
-(BOOL)isUCRTAvailable:(id*)arg1 ;
-(id)copyPCRTToken:(id*)arg1 ;
-(BOOL)isDeviceABrick:(id*)arg1 ;
-(id)createTunnel1SessionInfo:(id*)arg1 ;
-(id)createTunnel1ActivationInfo:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)createActivationInfo:(id*)arg1 ;
-(BOOL)handleActivationInfo:(id)arg1 withError:(id*)arg2 ;
-(BOOL)handleActivationInfoWithSession:(id)arg1 activationSignature:(id)arg2 error:(id*)arg3 ;
-(BOOL)deactivateDevice:(id*)arg1 ;
-(BOOL)reactivateDevice:(id*)arg1 ;
-(id)copyActivationRecord:(id*)arg1 ;
-(BOOL)unbrickDevice:(id*)arg1 ;
-(BOOL)recertifyDeviceWithError:(id*)arg1 ;
-(id)issueClientCertificateLegacy:(id)arg1 error:(id*)arg2 ;
-(BOOL)isInFieldCollected:(id*)arg1 ;
-(void)updateBasebandTicket:(SecKeyRef)arg1 baaCert:(SecCertificateRef)arg2 options:(id)arg3 withCompletion:(/*^block*/id)arg4 ;
@end

