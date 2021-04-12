/*
* Generated on Thursday, January 14, 2021 at 2:27:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessoryComponentAuth.framework/AccessoryComponentAuth
*/

#import <libobjc.A.dylib/ACCHWComponentAuthServiceProtocol.h>

@interface ACCHWComponentAuthService : NSObject <ACCHWComponentAuthServiceProtocol>
-(void)signVeridianChallenge:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_notifyComponentAuthFailure;
-(unsigned)_findModuleAuthService:(int)arg1 withAuthFlags:(unsigned*)arg2 ;
-(BOOL)_verifyDeviceIDSN:(unsigned)arg1 ;
-(void)_authenticateModuleWithChallenge:(id)arg1 completionHandler:(/*^block*/id)arg2 moduleType:(int)arg3 updateRegistry:(BOOL)arg4 ;
-(BOOL)_verifyDeviceInfo:(unsigned)arg1 ;
-(void)authenticateTouchControllerWithChallenge:(id)arg1 completionHandler:(/*^block*/id)arg2 updateRegistry:(BOOL)arg3 ;
-(int)_verifyModuleCertificate:(id)arg1 forModuleType:(int)arg2 ;
-(void)authenticateBatteryWithChallenge:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)_getForVeridianFDRData:(id)arg1 intermediateCert:(id*)arg2 leafCert:(id*)arg3 ;
-(BOOL)_verifyModuleFDR:(id)arg1 forModuleType:(int)arg2 ;
-(void)authenticateVeridianWithChallenge:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(int)_signChallenge:(id)arg1 ;
-(int)_verifySignature:(id)arg1 ;
-(int)_verifyCertificate:(id)arg1 ;
@end

