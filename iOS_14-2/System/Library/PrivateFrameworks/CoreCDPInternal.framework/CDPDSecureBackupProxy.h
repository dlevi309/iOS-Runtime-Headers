/*
* Generated on Thursday, January 14, 2021 at 2:25:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
*/

@class CDPContext;


@protocol CDPDSecureBackupProxy <NSObject>
@property (nonatomic,retain) CDPContext * cdpContext; 
@required
-(CDPContext *)cdpContext;
-(id)initWithContext:(id)arg1;
-(void)disableWithInfo:(id)arg1 completionBlock:(/*^block*/id)arg2;
-(void)enableWithInfo:(id)arg1 completionBlock:(/*^block*/id)arg2;
-(id)accountInfoWithInfo:(id)arg1 error:(id*)arg2;
-(BOOL)disableWithInfo:(id)arg1 error:(id*)arg2;
-(BOOL)enableWithInfo:(id)arg1 error:(id*)arg2;
-(id)recoverWithInfo:(id)arg1 error:(id*)arg2;
-(void)cacheRecoveryKey:(id)arg1 completionBlock:(/*^block*/id)arg2;
-(void)uncacheAllSecrets;
-(void)setCdpContext:(id)arg1;

@end

