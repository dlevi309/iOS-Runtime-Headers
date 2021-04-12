/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKApplyWebServiceResponse.h>

@class PKFeatureApplication, PKAccount;

@interface PKApplyWebServiceApplyResponse : PKApplyWebServiceResponse {

	PKFeatureApplication* _featureApplication;
	PKAccount* _account;

}

@property (nonatomic,readonly) PKFeatureApplication * featureApplication;              //@synthesize featureApplication=_featureApplication - In the implementation block
@property (nonatomic,readonly) PKAccount * account;                                    //@synthesize account=_account - In the implementation block
+(BOOL)supportsSecureCoding;
-(PKAccount *)account;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)nextStepInfo;
-(PKFeatureApplication *)featureApplication;
@end

