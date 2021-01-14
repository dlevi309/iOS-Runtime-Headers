/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary, NSData;

@interface PKPeerPaymentDeviceRegistrationData : NSObject <NSSecureCoding> {

	BOOL _devSigned;
	NSString* _signedAuthToken;
	NSDictionary* _enrollmentData;
	NSData* _signedEnrollmentDataSignature;
	NSString* _companionSerialNumber;

}

@property (nonatomic,copy) NSString * signedAuthToken;                          //@synthesize signedAuthToken=_signedAuthToken - In the implementation block
@property (nonatomic,copy) NSDictionary * enrollmentData;                       //@synthesize enrollmentData=_enrollmentData - In the implementation block
@property (nonatomic,copy) NSData * signedEnrollmentDataSignature;              //@synthesize signedEnrollmentDataSignature=_signedEnrollmentDataSignature - In the implementation block
@property (assign,nonatomic) BOOL devSigned;                                    //@synthesize devSigned=_devSigned - In the implementation block
@property (nonatomic,copy) NSString * companionSerialNumber;                    //@synthesize companionSerialNumber=_companionSerialNumber - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSData *)signedEnrollmentDataSignature;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)companionSerialNumber;
-(id)description;
-(void)setSignedEnrollmentDataSignature:(NSData *)arg1 ;
-(BOOL)devSigned;
-(void)setCompanionSerialNumber:(NSString *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)signedAuthToken;
-(void)setSignedAuthToken:(NSString *)arg1 ;
-(NSDictionary *)enrollmentData;
-(void)setEnrollmentData:(NSDictionary *)arg1 ;
-(BOOL)isEqualToPeerPaymentDeviceRegistrationData:(id)arg1 ;
-(void)setDevSigned:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

