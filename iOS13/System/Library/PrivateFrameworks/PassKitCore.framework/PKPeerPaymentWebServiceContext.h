/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)deviceIdentifier;
-(NSString *)pushToken;
-(void)setPushToken:(NSString *)arg1 ;
-(NSString *)pushTopic;
-(BOOL)devSigned;
-(void)setDevSigned:(BOOL)arg1 ;
-(NSString *)companionSerialNumber;
-(NSData *)signedEnrollmentDataSignature;
-(void)setSignedEnrollmentDataSignature:(NSData *)arg1 ;
-(NSURL *)serviceURL;
-(void)updateContextWithDeviceRegistrationData:(id)arg1 registrationResponse:(id)arg2 ;
@end

