/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPeerPaymentWebServiceRequest.h>

@class NSArray, NSString;

@interface PKPeerPaymentIdentityVerificationRequest : PKPeerPaymentWebServiceRequest {

	BOOL _devSigned;
	NSArray* _certificates;
	NSString* _prerequisiteIdentifier;

}

@property (nonatomic,copy) NSArray * certificates;                         //@synthesize certificates=_certificates - In the implementation block
@property (assign,nonatomic) BOOL devSigned;                               //@synthesize devSigned=_devSigned - In the implementation block
@property (nonatomic,copy) NSString * prerequisiteIdentifier;              //@synthesize prerequisiteIdentifier=_prerequisiteIdentifier - In the implementation block
-(NSString *)prerequisiteIdentifier;
-(void)setPrerequisiteIdentifier:(NSString *)arg1 ;
-(id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2 deviceIdentifier:(id)arg3 deviceScore:(id)arg4 deviceMetadata:(id)arg5 ;
-(NSArray *)certificates;
-(BOOL)devSigned;
-(void)setCertificates:(NSArray *)arg1 ;
-(void)setDevSigned:(BOOL)arg1 ;
@end

