/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Security.framework/Security
*/

#import <Security/Security-Structs.h>
#import <libobjc.A.dylib/OS_sec_identity.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface SecConcrete_sec_identity : NSObject <OS_sec_identity> {

	SecIdentityRef identity;
	CFArrayRef certs;
	/*^block*/id sign_block;
	/*^block*/id decrypt_block;
	NSObject*<OS_dispatch_queue> operation_queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithIdentity:(SecIdentityRef)arg1 ;
-(id)initWithIdentityAndCertificates:(SecIdentityRef)arg1 certificates:(CFArrayRef)arg2 ;
-(id)initWithCertificates:(CFArrayRef)arg1 signBlock:(/*^block*/id)arg2 decryptBlock:(/*^block*/id)arg3 queue:(id)arg4 ;
@end

