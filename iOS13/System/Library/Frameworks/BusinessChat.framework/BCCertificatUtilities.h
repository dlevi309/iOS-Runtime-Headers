/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/BusinessChat.framework/BusinessChat
*/


#import <BusinessChat/BusinessChat-Structs.h>
@interface BCCertificatUtilities : NSObject
+(SecPolicyRef)sslPolicyForHost:(id)arg1 client:(BOOL)arg2 ;
+(BOOL)trustIncludesRevokedCertificate:(SecTrustRef)arg1 ;
+(SecTrustRef)trustReferenceWithCertificates:(id)arg1 forPolicy:(SecPolicyRef)arg2 ;
@end

