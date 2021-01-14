/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsDonation.framework/ContactsDonation
*/


@protocol DonationAgentProtocol;
@class CNPromise;

@interface _CNDonationAgentXPCMethodScope : NSObject {

	id<DonationAgentProtocol> _proxy;
	CNPromise* _promise;

}

@property (nonatomic,readonly) id<DonationAgentProtocol> proxy;              //@synthesize proxy=_proxy - In the implementation block
@property (nonatomic,readonly) CNPromise * promise;                          //@synthesize promise=_promise - In the implementation block
-(id<DonationAgentProtocol>)proxy;
-(id)init;
-(CNPromise *)promise;
-(id)initWithConnection:(id)arg1 promise:(id)arg2 proxy:(id)arg3 ;
-(id)initWithPromise:(id)arg1 proxy:(id)arg2 ;
@end

