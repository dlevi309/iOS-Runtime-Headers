/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithUserIdentityStore:(id)arg1 requestContext:(id)arg2 ;
-(void)getFinishDelegationRequestsWithStartDelegationResponse:(id)arg1 streamContexts:(id)arg2 replyHandler:(/*^block*/id)arg3 ;
-(void)getStartDelegationRequestForAccountIDs:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_getPlayInfoRequestWithStartDelegationResponse:(id)arg1 streamContexts:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(unsigned long long)_nextSessionUniqueID;
@end

