/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
*/


#import <SecurityFoundation/SecurityFoundation-Structs.h>
@class NSString, NSData;

@interface _SFCertificate : NSObject {

	id _certificateInternal;

}

@property (nonatomic,readonly) SecCertificateRef secCertificate; 
@property (nonatomic,readonly) long long certificateType; 
@property (nonatomic,readonly) NSString * subject; 
@property (nonatomic,readonly) NSString * issuerName; 
@property (nonatomic,readonly) NSData * serialNumber; 
+(BOOL)supportsSecureCoding;
-(NSString *)subject;
-(NSData *)serialNumber;
-(NSString *)issuerName;
-(long long)certificateType;
-(SecCertificateRef)secCertificate;
-(id)initWithSecCertificate:(SecCertificateRef)arg1 ;
@end

