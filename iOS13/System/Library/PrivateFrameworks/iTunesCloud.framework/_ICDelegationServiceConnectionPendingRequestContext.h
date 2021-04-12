/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/


@class ICPBDGSRequest;

@interface _ICDelegationServiceConnectionPendingRequestContext : NSObject {

	ICPBDGSRequest* _request;
	/*^block*/id _responseHandler;

}

@property (nonatomic,readonly) ICPBDGSRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,copy,readonly) id responseHandler;               //@synthesize responseHandler=_responseHandler - In the implementation block
-(ICPBDGSRequest *)request;
-(id)responseHandler;
-(id)initWithRequest:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
@end

