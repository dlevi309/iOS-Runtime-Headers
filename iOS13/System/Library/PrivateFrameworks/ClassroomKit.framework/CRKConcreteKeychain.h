/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <libobjc.A.dylib/CRKKeychain.h>

@class NSDictionary;

@interface CRKConcreteKeychain : NSObject <CRKKeychain> {

	NSDictionary* _baseQueryAttributes;

}

@property (nonatomic,copy,readonly) NSDictionary * baseQueryAttributes;              //@synthesize baseQueryAttributes=_baseQueryAttributes - In the implementation block
+(id)defaultKeychain;
-(id)description;
-(const void*)copyItemWithPersistentID:(id)arg1 ;
-(void)removeItemWithPersistentID:(id)arg1 ;
-(id)initWithBaseQueryAttributes:(id)arg1 ;
-(id)addItem:(void*)arg1 toAccessGroup:(id)arg2 ;
-(id)makeItemWithPersistentID:(id)arg1 expectedTypeID:(unsigned long long)arg2 creationBlock:(/*^block*/id)arg3 ;
-(NSDictionary *)baseQueryAttributes;
-(id)addCertificate:(id)arg1 toAccessGroup:(id)arg2 ;
-(id)addIdentity:(id)arg1 toAccessGroup:(id)arg2 ;
-(id)addPrivateKey:(id)arg1 toAccessGroup:(id)arg2 ;
-(id)certificateWithPersistentID:(id)arg1 ;
-(id)identityWithPersistentID:(id)arg1 ;
-(id)privateKeyWithPersistentID:(id)arg1 ;
-(id)makeIdentityWithConfiguration:(id)arg1 ;
-(id)makeIdentityWithCertificate:(id)arg1 privateKey:(id)arg2 ;
-(id)makeCertificateWithData:(id)arg1 ;
-(id)makePrivateKeyWithData:(id)arg1 ;
@end

