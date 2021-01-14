/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_completionSessionWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)userDidSelectCompletionMatch:(id)arg1 forTypedString:(id)arg2 ;
-(void)getBestMatchesForTypedString:(id)arg1 limit:(unsigned long long)arg2 forQueryID:(long long)arg3 completionHandler:(/*^block*/id)arg4 ;
@end

