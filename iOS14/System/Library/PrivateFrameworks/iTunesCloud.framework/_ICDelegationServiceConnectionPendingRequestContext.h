/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/


@class ICPBDGSRequest;

@interface _ICDelegationServiceConnectionPendingRequestContext : NSObject {

	ICPBDGSRequest* _request;
	/*^block*/id _responseHandler;

}

@property (nonatomic,readonly) ICPBDGSRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,copy,readonly) id responseHandler;               //@synthesize responseHandler=_responseHandler - In the implementation block
-(id)initWithRequest:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(id)responseHandler;
-(ICPBDGSRequest *)request;
@end

