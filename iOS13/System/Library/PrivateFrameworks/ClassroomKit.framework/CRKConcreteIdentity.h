/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <ClassroomKit/ClassroomKit-Structs.h>
#import <libobjc.A.dylib/CRKIdentity.h>

@class NSString;

@interface CRKConcreteIdentity : NSObject <CRKIdentity> {

	SecIdentityRef _underlyingIdentity;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<CRKCertificate> certificate; 
@property (nonatomic,readonly) id<CRKPrivateKey> privateKey; 
@property (nonatomic,readonly) SecIdentityRef underlyingIdentity;              //@synthesize underlyingIdentity=_underlyingIdentity - In the implementation block
+(id)identityWithCertificate:(id)arg1 privateKey:(id)arg2 ;
+(id)identityWithConfiguration:(id)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(id)initWithIdentity:(SecIdentityRef)arg1 ;
-(id<CRKCertificate>)certificate;
-(id<CRKPrivateKey>)privateKey;
-(SecIdentityRef)underlyingIdentity;
@end

