/*
* Generated on Thursday, January 14, 2021 at 2:25:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport
*/


#import <AccessibilitySharedSupport/AccessibilitySharedSupport-Structs.h>
@class NSArray;

@interface AXSSInterDeviceSecurityHelper : NSObject {

	SecIdentityRef _cachedAppleIDIdentity;
	NSArray* _cachedCertificateChain;
	NSArray* _cachedSecurityIdentity;

}
-(id)init;
-(id)_certificateChain;
-(void)dealloc;
-(SecIdentityRef)_appleIDIdentity;
-(void)_appleIDsDidChange;
-(id)securityIdentity;
-(void)verifyCertificate:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

