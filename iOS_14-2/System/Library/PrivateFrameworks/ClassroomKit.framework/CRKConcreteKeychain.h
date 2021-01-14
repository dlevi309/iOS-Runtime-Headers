/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <libobjc.A.dylib/CRKKeychain.h>

@class NSDictionary, NSString;

@interface CRKConcreteKeychain : NSObject <CRKKeychain> {

	NSDictionary* _baseQueryAttributes;

}

@property (nonatomic,copy,readonly) NSDictionary * baseQueryAttributes;              //@synthesize baseQueryAttributes=_baseQueryAttributes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultKeychain;
-(NSString *)description;
-(void)removeItemWithPersistentID:(id)arg1 ;
-(id)addCertificate:(id)arg1 toAccessGroup:(id)arg2 ;
-(id)certificateWithPersistentID:(id)arg1 ;
-(id)addIdentity:(id)arg1 toAccessGroup:(id)arg2 ;
-(id)identityWithPersistentID:(id)arg1 ;
-(void)setPassword:(id)arg1 forService:(id)arg2 accessGroup:(id)arg3 ;
-(id)passwordForService:(id)arg1 ;
-(id)makeIdentityWithConfiguration:(id)arg1 ;
-(id)initWithBaseQueryAttributes:(id)arg1 ;
-(id)addItem:(void*)arg1 toAccessGroup:(id)arg2 ;
-(id)makePasswordFacade;
-(id)makeItemWithPersistentID:(id)arg1 itemClass:(id)arg2 creationBlock:(/*^block*/id)arg3 ;
-(NSDictionary *)baseQueryAttributes;
-(const void*)copyItemWithPersistentID:(id)arg1 itemClass:(id)arg2 ;
-(id)addPrivateKey:(id)arg1 toAccessGroup:(id)arg2 ;
-(id)privateKeyWithPersistentID:(id)arg1 ;
-(id)makeIdentityWithCertificate:(id)arg1 privateKey:(id)arg2 ;
-(id)makeCertificateWithData:(id)arg1 ;
-(id)makePrivateKeyWithData:(id)arg1 ;
@end

