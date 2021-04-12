/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@protocol WBSURLCompletionSessionProtocol, OS_dispatch_queue;
@class WBSHistoryConnectionProxy, NSObject;

@interface WBSURLCompletionSessionProxy : NSObject {

	WBSHistoryConnectionProxy* _historyConnectionProxy;
	id<WBSURLCompletionSessionProtocol> _completionSession;
	NSObject*<OS_dispatch_queue> _completionSessionAccessQueue;

}
-(id)init;
-(void)getBestMatchesForTypedString:(id)arg1 limit:(unsigned long long)arg2 forQueryID:(long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_completionSessionWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)userDidSelectCompletionMatch:(id)arg1 forTypedString:(id)arg2 ;
@end

