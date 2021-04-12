/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppSSO.framework/AppSSO
*/


@protocol SOServiceProtocol;
@class SOAuthorizationRequestParameters;

@interface SORequestQueueItem : NSObject {

	id<SOServiceProtocol> _service;
	SOAuthorizationRequestParameters* _requestParameters;
	/*^block*/id _completionBlock;

}

@property (nonatomic,readonly) id<SOServiceProtocol> service;                                     //@synthesize service=_service - In the implementation block
@property (nonatomic,readonly) SOAuthorizationRequestParameters * requestParameters;              //@synthesize requestParameters=_requestParameters - In the implementation block
@property (nonatomic,copy,readonly) id completionBlock;                                           //@synthesize completionBlock=_completionBlock - In the implementation block
-(id)description;
-(id)completionBlock;
-(id<SOServiceProtocol>)service;
-(SOAuthorizationRequestParameters *)requestParameters;
-(id)initWithService:(id)arg1 requestParameters:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
@end

