/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <ClassroomKit/ClassroomKit-Structs.h>
#import <libobjc.A.dylib/CRKIdentity.h>

@class NSString;

@interface CRKConcreteIdentity : NSObject <CRKIdentity> {

	SecIdentityRef _underlyingIdentity;

}

@property (nonatomic,readonly) id<CRKCertificate> certificate; 
@property (nonatomic,readonly) id<CRKPrivateKey> privateKey; 
@property (nonatomic,readonly) SecIdentityRef underlyingIdentity;              //@synthesize underlyingIdentity=_underlyingIdentity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)identityWithCertificate:(id)arg1 privateKey:(id)arg2 ;
+(id)identityWithConfiguration:(id)arg1 ;
-(id)initWithIdentity:(SecIdentityRef)arg1 ;
-(id<CRKPrivateKey>)privateKey;
-(id<CRKCertificate>)certificate;
-(NSString *)description;
-(void)dealloc;
-(SecIdentityRef)underlyingIdentity;
@end

