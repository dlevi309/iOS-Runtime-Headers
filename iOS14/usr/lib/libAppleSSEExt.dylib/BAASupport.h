/*
* Generated on Thursday, January 14, 2021 at 2:29:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAppleSSEExt.dylib
*/


@interface BAASupport : NSObject
+(void)initialize;
+(void)setDelegate:(id)arg1 ;
+(int)getCertificates:(id*)arg1 ;
+(void)setBlessedUser:(unsigned)arg1 keybagUUID:(unsigned char)arg2 ;
+(int)getCertificateExpirationDate:(double*)arg1 ;
+(int)issueNewCertificate;
+(int)prepare;
@end

