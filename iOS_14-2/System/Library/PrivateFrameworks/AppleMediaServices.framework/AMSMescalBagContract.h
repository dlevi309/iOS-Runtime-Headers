/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

@class AMSBagValue;


@protocol AMSMescalBagContract <AMSURLBagContract>
@property (nonatomic,readonly) AMSBagValue * mescalCertificateURL; 
@property (nonatomic,readonly) AMSBagValue * mescalSetupURL; 
@property (nonatomic,readonly) AMSBagValue * mescalPrimingURL; 
@property (nonatomic,readonly) AMSBagValue * mescalSignedActions; 
@property (nonatomic,readonly) AMSBagValue * mescalSignSapRequests; 
@property (nonatomic,readonly) AMSBagValue * mescalSignSapResponses; 
@optional
-(AMSBagValue *)mescalSignSapRequests;
-(AMSBagValue *)mescalSignSapResponses;
-(AMSBagValue *)mescalPrimingURL;
-(AMSBagValue *)mescalSignedActions;

@required
-(AMSBagValue *)mescalSetupURL;
-(AMSBagValue *)mescalCertificateURL;

@end

