/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@protocol OS_dispatch_queue;
@class CKContextResponse, NSURL, NSObject, CKContextClient, WBSHistory;

@interface WBSHistoryContextController : NSObject {

	CKContextResponse* _cachedResponse;
	NSURL* _pageURLForCachedResponse;
	NSObject*<OS_dispatch_queue> _internalQueue;
	CKContextClient* _client;
	WBSHistory* _history;

}

@property (nonatomic,readonly) WBSHistory * history;              //@synthesize history=_history - In the implementation block
-(WBSHistory *)history;
-(id)initWithHistory:(id)arg1 contextClient:(id)arg2 qualityOfService:(unsigned)arg3 ;
-(void)_persistTopicsFromContextResult:(id)arg1 forPageURL:(id)arg2 ;
-(void)cachedResponseForURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)invalidateCachedResults;
-(void)contextForPageURL:(id)arg1 content:(id)arg2 contentType:(long long)arg3 metadata:(id)arg4 isPrivate:(BOOL)arg5 isReaderAvailable:(BOOL)arg6 withCompletionHandler:(/*^block*/id)arg7 ;
-(id)initWithHistory:(id)arg1 contextClient:(id)arg2 ;
@end

