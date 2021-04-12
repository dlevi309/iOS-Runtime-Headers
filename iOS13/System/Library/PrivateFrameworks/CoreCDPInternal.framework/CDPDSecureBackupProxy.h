/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
*/

@class CDPContext;


@protocol CDPDSecureBackupProxy <NSObject>
@property (nonatomic,retain) CDPContext * cdpContext; 
@required
-(id)init;
-(id)initWithContext:(id)arg1;
-(void)disableWithInfo:(id)arg1 completionBlock:(/*^block*/id)arg2;
-(void)enableWithInfo:(id)arg1 completionBlock:(/*^block*/id)arg2;
-(CDPContext *)cdpContext;
-(id)accountInfoWithInfo:(id)arg1 error:(id*)arg2;
-(BOOL)disableWithInfo:(id)arg1 error:(id*)arg2;
-(BOOL)enableWithInfo:(id)arg1 error:(id*)arg2;
-(id)recoverWithInfo:(id)arg1 error:(id*)arg2;
-(void)cacheRecoveryKey:(id)arg1 completionBlock:(/*^block*/id)arg2;
-(void)uncacheAllSecrets;
-(void)setCdpContext:(id)arg1;

@end

