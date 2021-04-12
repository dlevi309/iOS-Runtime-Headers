/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/


@protocol CRKKeychain <NSObject>
@required
-(void)removeItemWithPersistentID:(id)arg1;
-(id)addCertificate:(id)arg1 toAccessGroup:(id)arg2;
-(id)certificateWithPersistentID:(id)arg1;
-(id)addIdentity:(id)arg1 toAccessGroup:(id)arg2;
-(id)identityWithPersistentID:(id)arg1;
-(void)setPassword:(id)arg1 forService:(id)arg2 accessGroup:(id)arg3;
-(id)passwordForService:(id)arg1;
-(id)makeIdentityWithConfiguration:(id)arg1;
-(id)addPrivateKey:(id)arg1 toAccessGroup:(id)arg2;
-(id)privateKeyWithPersistentID:(id)arg1;
-(id)makeIdentityWithCertificate:(id)arg1 privateKey:(id)arg2;
-(id)makeCertificateWithData:(id)arg1;
-(id)makePrivateKeyWithData:(id)arg1;

@end

