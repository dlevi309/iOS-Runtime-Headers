/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id<DonationAgentProtocol>)proxy;
-(CNPromise *)promise;
-(id)initWithConnection:(id)arg1 promise:(id)arg2 proxy:(id)arg3 ;
-(id)initWithPromise:(id)arg1 proxy:(id)arg2 ;
@end

