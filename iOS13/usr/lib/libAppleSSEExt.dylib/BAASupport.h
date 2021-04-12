/*
* Generated on Monday, March 1, 2021 at 2:35:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libAppleSSEExt.dylib
*/


@interface BAASupport : NSObject
+(void)initialize;
+(void)setDelegate:(id)arg1 ;
+(int)prepare;
+(void)setBlessedUser:(unsigned)arg1 keybagUUID:(unsigned char)arg2 ;
+(int)getCertificateExpirationDate:(double*)arg1 ;
+(int)getCertificates:(id*)arg1 ;
+(int)issueNewCertificate;
@end

