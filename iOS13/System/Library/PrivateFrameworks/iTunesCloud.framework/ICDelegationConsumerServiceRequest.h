/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(double)timeoutInterval;
-(ICRequestContext *)requestContext;
-(NSDictionary *)userIdentityDelegationAccountUUIDs;
-(id)initWithUserIdentityDelegationAccountUUIDs:(id)arg1 requestContext:(id)arg2 timeoutInterval:(double)arg3 ;
@end

