/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP
*/

#import <CoreCDP/CoreCDP-Structs.h>
#import <libobjc.A.dylib/CDPProtectedCloudStorageProxy.h>

@class NSString;

@interface CDPProtectedCloudStorageProxyImpl : NSObject <CDPProtectedCloudStorageProxy>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)_performPCSBlock:(/*^block*/id)arg1 error:(id*)arg2 ;
-(PCSIdentitySetDataRef)pcsIdentityCreateWithInfo:(id)arg1 error:(id*)arg2 ;
-(PCSIdentitySetDataRef)pcsIdentitySetupWithInfo:(id)arg1 error:(id*)arg2 ;
-(BOOL)pcsIdentitySetIsInICDPNetwork:(PCSIdentitySetDataRef)arg1 options:(id)arg2 error:(id*)arg3 ;
-(BOOL)pcsIdentitySetIsInICDPLocal:(PCSIdentitySetDataRef)arg1 error:(id*)arg2 ;
-(BOOL)pcsIdentitySetCompanionInCircle:(PCSIdentitySetDataRef)arg1 error:(id*)arg2 ;
-(BOOL)pcsIdentityMigrateToiCDPWithInfo:(id)arg1 error:(id*)arg2 ;
-(BOOL)pcsIdentityMigrateToStingrayWithInfo:(id)arg1 error:(id*)arg2 ;
-(BOOL)pcsSynchronizeKeysWithInfo:(id)arg1 error:(id*)arg2 ;
-(BOOL)pcsRestoreLocalBackup:(id)arg1 error:(id*)arg2 ;
@end

