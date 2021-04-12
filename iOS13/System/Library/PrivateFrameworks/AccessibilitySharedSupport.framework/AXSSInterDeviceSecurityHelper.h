/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)_certificateChain;
-(SecIdentityRef)_appleIDIdentity;
-(id)securityIdentity;
-(void)_appleIDsDidChange;
-(BOOL)shouldTrustCertificate:(id)arg1 ;
@end

