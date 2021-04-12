/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
*/

#import <BiometricKit/BKDevice.h>

@interface BKDevicePearl : BKDevice

@property (assign,nonatomic,__weak) id<BKDevicePearlDelegate> delegate; 
@property (nonatomic,readonly) long long pearlState; 
+(BOOL)deviceAvailableWithError:(id*)arg1 ;
-(void)statusMessage:(unsigned)arg1 client:(unsigned long long)arg2 ;
-(id)createEnrollOperationWithError:(id*)arg1 ;
-(id)createMatchOperationWithError:(id*)arg1 ;
-(id)createPresenceDetectOperationWithError:(id*)arg1 ;
-(long long)deviceStateWithStatus:(unsigned)arg1 ;
-(long long)deviceEventWithStatus:(unsigned)arg1 ;
-(long long)pearlState;
-(id)queryIdentityMigrationFailureForUser:(unsigned)arg1 error:(id*)arg2 ;
-(BOOL)clearIdentityMigrationFailureForUser:(unsigned)arg1 error:(id*)arg2 ;
-(id)eligibleForAugmentation:(id)arg1 error:(id*)arg2 ;
-(id)generateFieldDiagnosticsNonceWithError:(id*)arg1 ;
-(BOOL)enableFieldDiagnosticsWithTatsuManifest:(id)arg1 error:(id*)arg2 ;
-(BOOL)disableFieldDiagnosticsWithError:(id*)arg1 ;
-(id)fieldDiagnosticsRemainingTimeWithError:(id*)arg1 ;
-(id)fieldDiagnosticsEncryptionKeyWithError:(id*)arg1 ;
-(id)fieldDiagnosticsTatsuManifestWithError:(id*)arg1 ;
-(BOOL)setTemplate:(id)arg1 forIdentity:(id)arg2 error:(id*)arg3 ;
@end

