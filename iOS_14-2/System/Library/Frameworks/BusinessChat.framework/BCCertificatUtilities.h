/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/BusinessChat.framework/BusinessChat
*/


#import <BusinessChat/BusinessChat-Structs.h>
@interface BCCertificatUtilities : NSObject
+(SecPolicyRef)sslPolicyForHost:(id)arg1 client:(BOOL)arg2 ;
+(BOOL)trustIncludesRevokedCertificate:(SecTrustRef)arg1 ;
+(SecTrustRef)trustReferenceWithCertificates:(id)arg1 forPolicy:(SecPolicyRef)arg2 ;
@end

