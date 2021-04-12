/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
*/

#import <libobjc.A.dylib/CDPDSecureBackupProxy.h>

@class CDPContext, NSString;

@interface CDPDSecureBackupProxyImpl : NSObject <CDPDSecureBackupProxy> {

	CDPContext* _cdpContext;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) CDPContext * cdpContext;               //@synthesize cdpContext=_cdpContext - In the implementation block
-(id)initWithContext:(id)arg1 ;
-(void)recoverWithInfo:(id)arg1 completionBlockWithResults:(/*^block*/id)arg2 ;
-(void)disableWithInfo:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)enableWithInfo:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(CDPContext *)cdpContext;
-(void)getAccountInfoWithInfo:(id)arg1 completionBlockWithResults:(/*^block*/id)arg2 ;
-(id)_secureBackup;
-(id)accountInfoWithInfo:(id)arg1 error:(id*)arg2 ;
-(BOOL)disableWithInfo:(id)arg1 error:(id*)arg2 ;
-(BOOL)enableWithInfo:(id)arg1 error:(id*)arg2 ;
-(id)recoverWithInfo:(id)arg1 error:(id*)arg2 ;
-(void)cacheRecoveryKey:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)uncacheAllSecrets;
-(void)setCdpContext:(CDPContext *)arg1 ;
@end

