/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/


@protocol CRKKeychain
@required
-(void)removeItemWithPersistentID:(id)arg1;
-(id)addCertificate:(id)arg1 toAccessGroup:(id)arg2;
-(id)addIdentity:(id)arg1 toAccessGroup:(id)arg2;
-(id)addPrivateKey:(id)arg1 toAccessGroup:(id)arg2;
-(id)certificateWithPersistentID:(id)arg1;
-(id)identityWithPersistentID:(id)arg1;
-(id)privateKeyWithPersistentID:(id)arg1;
-(id)makeIdentityWithConfiguration:(id)arg1;
-(id)makeIdentityWithCertificate:(id)arg1 privateKey:(id)arg2;
-(id)makeCertificateWithData:(id)arg1;
-(id)makePrivateKeyWithData:(id)arg1;

@end

