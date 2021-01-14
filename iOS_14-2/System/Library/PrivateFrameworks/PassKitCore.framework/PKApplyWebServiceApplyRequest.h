/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKApplyWebServiceRequest.h>

@class NSString, NSArray, NSURL, PKPaymentInstallmentConfiguration;

@interface PKApplyWebServiceApplyRequest : PKApplyWebServiceRequest {

	NSString* _applicationIdentifier;
	unsigned long long _featureIdentifier;
	NSArray* _certificates;
	NSURL* _baseURL;
	NSString* _coreIDVNextStepToken;
	NSString* _previousContextIdentifier;
	NSString* _actionIdentifier;
	PKPaymentInstallmentConfiguration* _installmentConfiguration;

}

@property (nonatomic,copy) NSString * applicationIdentifier;                                            //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long featureIdentifier;                                      //@synthesize featureIdentifier=_featureIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * certificates;                                                      //@synthesize certificates=_certificates - In the implementation block
@property (nonatomic,retain) NSURL * baseURL;                                                           //@synthesize baseURL=_baseURL - In the implementation block
@property (nonatomic,copy) NSString * coreIDVNextStepToken;                                             //@synthesize coreIDVNextStepToken=_coreIDVNextStepToken - In the implementation block
@property (nonatomic,copy) NSString * previousContextIdentifier;                                        //@synthesize previousContextIdentifier=_previousContextIdentifier - In the implementation block
@property (nonatomic,copy) NSString * actionIdentifier;                                                 //@synthesize actionIdentifier=_actionIdentifier - In the implementation block
@property (nonatomic,retain) PKPaymentInstallmentConfiguration * installmentConfiguration;              //@synthesize installmentConfiguration=_installmentConfiguration - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setApplicationIdentifier:(NSString *)arg1 ;
-(NSURL *)baseURL;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)certificates;
-(NSString *)applicationIdentifier;
-(unsigned long long)featureIdentifier;
-(id)_urlRequestWithAppleAccountInformation:(id)arg1 ;
-(void)setFeatureIdentifier:(unsigned long long)arg1 ;
-(PKPaymentInstallmentConfiguration *)installmentConfiguration;
-(void)setInstallmentConfiguration:(PKPaymentInstallmentConfiguration *)arg1 ;
-(NSString *)coreIDVNextStepToken;
-(void)setCoreIDVNextStepToken:(NSString *)arg1 ;
-(NSString *)previousContextIdentifier;
-(void)setPreviousContextIdentifier:(NSString *)arg1 ;
-(void)setActionIdentifier:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)actionIdentifier;
-(void)setCertificates:(NSArray *)arg1 ;
-(void)setBaseURL:(NSURL *)arg1 ;
@end

