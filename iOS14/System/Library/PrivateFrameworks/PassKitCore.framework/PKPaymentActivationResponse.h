/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSString, NSDictionary, NSArray, NSURL;

@interface PKPaymentActivationResponse : PKPaymentWebServiceResponse {

	NSString* _stepIdentifier;
	NSString* _previousStepIdentifier;
	long long _verificationStatus;
	NSDictionary* _requiredVerificationFieldData;
	NSArray* _verificationChannels;
	NSURL* _passURL;

}

@property (nonatomic,copy) NSArray * verificationChannels;                                     //@synthesize verificationChannels=_verificationChannels - In the implementation block
@property (assign,nonatomic) long long verificationStatus;                                     //@synthesize verificationStatus=_verificationStatus - In the implementation block
@property (nonatomic,copy,readonly) NSString * stepIdentifier;                                 //@synthesize stepIdentifier=_stepIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * previousStepIdentifier;                         //@synthesize previousStepIdentifier=_previousStepIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * requiredVerificationFieldData;              //@synthesize requiredVerificationFieldData=_requiredVerificationFieldData - In the implementation block
@property (nonatomic,copy,readonly) NSURL * passURL;                                           //@synthesize passURL=_passURL - In the implementation block
+(id)responseWithData:(id)arg1 forPass:(id)arg2 ;
-(void)setVerificationStatus:(long long)arg1 ;
-(NSString *)previousStepIdentifier;
-(NSDictionary *)requiredVerificationFieldData;
-(NSArray *)verificationChannels;
-(NSURL *)passURL;
-(long long)verificationStatus;
-(id)initWithData:(id)arg1 forPass:(id)arg2 ;
-(void)setVerificationChannels:(NSArray *)arg1 ;
-(NSString *)stepIdentifier;
@end

