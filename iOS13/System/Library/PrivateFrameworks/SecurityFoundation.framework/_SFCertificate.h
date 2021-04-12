/*
* Generated on Monday, March 1, 2021 at 2:33:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(long long)certificateType;
-(NSString *)issuerName;
-(SecCertificateRef)secCertificate;
-(id)initWithSecCertificate:(SecCertificateRef)arg1 ;
@end

