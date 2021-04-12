/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(PKAccount *)account;
-(id)nextStepInfo;
-(PKFeatureApplication *)featureApplication;
@end

