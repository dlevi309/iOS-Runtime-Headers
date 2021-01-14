/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKWebServiceContext.h>

@class NSURL, NSString, NSData;

@interface PKPeerPaymentWebServiceContext : PKWebServiceContext {

	BOOL _devSigned;
	NSURL* _serviceURL;
	NSString* _deviceIdentifier;
	NSString* _pushTopic;
	NSString* _pushToken;
	NSString* _companionSerialNumber;
	NSData* _signedEnrollmentDataSignature;

}

@property (nonatomic,copy,readonly) NSURL * serviceURL;                            //@synthesize serviceURL=_serviceURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * deviceIdentifier;                   //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * pushTopic;                          //@synthesize pushTopic=_pushTopic - In the implementation block
@property (nonatomic,copy) NSString * pushToken;                                   //@synthesize pushToken=_pushToken - In the implementation block
@property (assign,nonatomic) BOOL devSigned;                                       //@synthesize devSigned=_devSigned - In the implementation block
@property (nonatomic,copy,readonly) NSString * companionSerialNumber;              //@synthesize companionSerialNumber=_companionSerialNumber - In the implementation block
@property (nonatomic,copy) NSData * signedEnrollmentDataSignature;                 //@synthesize signedEnrollmentDataSignature=_signedEnrollmentDataSignature - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)contextWithArchive:(id)arg1 ;
-(NSString *)pushTopic;
-(NSString *)deviceIdentifier;
-(void)setPushToken:(NSString *)arg1 ;
-(void)updateContextWithDeviceRegistrationData:(id)arg1 registrationResponse:(id)arg2 ;
-(NSString *)pushToken;
-(NSData *)signedEnrollmentDataSignature;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)companionSerialNumber;
-(NSURL *)serviceURL;
-(void)setSignedEnrollmentDataSignature:(NSData *)arg1 ;
-(BOOL)devSigned;
-(id)initWithCoder:(id)arg1 ;
-(void)setDevSigned:(BOOL)arg1 ;
@end

