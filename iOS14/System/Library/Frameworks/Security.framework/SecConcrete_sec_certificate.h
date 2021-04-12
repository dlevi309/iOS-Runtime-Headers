/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Security.framework/Security
*/

#import <Security/Security-Structs.h>
#import <libobjc.A.dylib/OS_sec_certificate.h>

@class NSString;

@interface SecConcrete_sec_certificate : NSObject <OS_sec_certificate> {

	SecCertificateRef certificate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCertificate:(SecCertificateRef)arg1 ;
-(void)dealloc;
@end

