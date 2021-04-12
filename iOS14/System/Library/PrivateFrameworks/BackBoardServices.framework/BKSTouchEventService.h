/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
*/


@class BSCompoundAssertion;

@interface BKSTouchEventService : NSObject {

	BSCompoundAssertion* _authenticationSpecificationAssertion;

}

@property (nonatomic,retain) BSCompoundAssertion * authenticationSpecificationAssertion;              //@synthesize authenticationSpecificationAssertion=_authenticationSpecificationAssertion - In the implementation block
+(id)sharedInstance;
-(BSCompoundAssertion *)authenticationSpecificationAssertion;
-(id)addAuthenticationSpecifications:(id)arg1 forReason:(id)arg2 ;
-(void)setAuthenticationSpecificationAssertion:(BSCompoundAssertion *)arg1 ;
@end

