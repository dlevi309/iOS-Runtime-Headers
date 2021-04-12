/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)completionBlock;
-(id)description;
-(id)initWithService:(id)arg1 requestParameters:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(SOAuthorizationRequestParameters *)requestParameters;
-(id<SOServiceProtocol>)service;
@end

