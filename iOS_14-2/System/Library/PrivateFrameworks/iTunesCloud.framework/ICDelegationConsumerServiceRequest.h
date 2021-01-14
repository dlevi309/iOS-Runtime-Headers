/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/


@class ICRequestContext, NSDictionary;

@interface ICDelegationConsumerServiceRequest : NSObject {

	ICRequestContext* _requestContext;
	double _timeoutInterval;
	NSDictionary* _userIdentityDelegationAccountUUIDs;

}

@property (nonatomic,copy,readonly) ICRequestContext * requestContext;                              //@synthesize requestContext=_requestContext - In the implementation block
@property (nonatomic,readonly) double timeoutInterval;                                              //@synthesize timeoutInterval=_timeoutInterval - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * userIdentityDelegationAccountUUIDs;              //@synthesize userIdentityDelegationAccountUUIDs=_userIdentityDelegationAccountUUIDs - In the implementation block
-(NSDictionary *)userIdentityDelegationAccountUUIDs;
-(ICRequestContext *)requestContext;
-(double)timeoutInterval;
-(id)initWithUserIdentityDelegationAccountUUIDs:(id)arg1 requestContext:(id)arg2 timeoutInterval:(double)arg3 ;
@end

