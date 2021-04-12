/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

@property (nonatomic,readonly) id<CRKCertificate> certificate;                 //@synthesize certificate=_certificate - In the implementation block
@property (nonatomic,readonly) id<CRKPrivateKey> privateKey;                   //@synthesize privateKey=_privateKey - In the implementation block
@property (nonatomic,readonly) SecIdentityRef underlyingIdentity; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)identityWithConfiguration:(id)arg1 validityDateInterval:(id)arg2 ;
-(id<CRKPrivateKey>)privateKey;
-(id<CRKCertificate>)certificate;
-(SecIdentityRef)underlyingIdentity;
-(id)initWithCertificate:(id)arg1 privateKey:(id)arg2 ;
@end

