/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/


@protocol OS_dispatch_queue;
@class NSObject, ICUserIdentityStore, NSOperationQueue, ICRequestContext;

@interface ICDelegationProviderServiceProtocolHandler : NSObject {

	NSObject*<OS_dispatch_queue> _calloutQueue;
	ICUserIdentityStore* _identityStore;
	NSOperationQueue* _operationQueue;
	unsigned long long _nextSessionUniqueID;
	ICRequestContext* _requestContext;

}
-(void)_getPlayInfoRequestWithStartDelegationResponse:(id)arg1 streamContexts:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(unsigned long long)_nextSessionUniqueID;
-(id)initWithUserIdentityStore:(id)arg1 requestContext:(id)arg2 ;
-(void)getFinishDelegationRequestsWithStartDelegationResponse:(id)arg1 streamContexts:(id)arg2 replyHandler:(/*^block*/id)arg3 ;
-(void)getStartDelegationRequestForAccountIDs:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
@end

