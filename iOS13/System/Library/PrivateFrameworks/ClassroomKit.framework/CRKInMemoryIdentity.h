/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <ClassroomKit/ClassroomKit-Structs.h>
#import <libobjc.A.dylib/CRKIdentity.h>

@protocol CRKCertificate, CRKPrivateKey;
@class NSString;

@interface CRKInMemoryIdentity : NSObject <CRKIdentity> {

	id<CRKCertificate> _certificate;
	id<CRKPrivateKey> _privateKey;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<CRKCertificate> certificate;                 //@synthesize certificate=_certificate - In the implementation block
@property (nonatomic,readonly) id<CRKPrivateKey> privateKey;                   //@synthesize privateKey=_privateKey - In the implementation block
@property (nonatomic,readonly) SecIdentityRef underlyingIdentity; 
+(id)identityWithConfiguration:(id)arg1 ;
-(id<CRKCertificate>)certificate;
-(id<CRKPrivateKey>)privateKey;
-(SecIdentityRef)underlyingIdentity;
-(id)initWithCertificate:(id)arg1 privateKey:(id)arg2 ;
@end

