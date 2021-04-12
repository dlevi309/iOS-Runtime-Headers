/*
* Generated on Monday, March 1, 2021 at 2:34:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
*/


@interface BCSRemoteFetch : NSObject
+(id)cloudServerRequestHelper;
+(id)createSessionForClientBundleID:(id)arg1 ;
+(id)_completionPool;
+(id)_requestDispatchQueue;
-(void)enqueueCompletionBlock:(/*^block*/id)arg1 forRequest:(id)arg2 isDuplicateRequest:(BOOL*)arg3 ;
-(id)dequeueCompletionBlocksForRequest:(id)arg1 ;
-(id)_hashForRequest:(id)arg1 ;
-(void)_enqueueCompletionBlock:(/*^block*/id)arg1 forRequestHash:(id)arg2 inCompletionPool:(id)arg3 isDuplicateRequest:(BOOL*)arg4 ;
-(id)_dequeueCompletionBlocksForRequestHash:(id)arg1 inCompletionPool:(id)arg2 ;
@end

