/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@protocol WBSHistoryAccessSessionProtocol, OS_dispatch_queue;
@class WBSHistoryConnectionProxy, NSObject;

@interface WBSHistoryAccessSessionProxy : NSObject {

	WBSHistoryConnectionProxy* _historyConnectionProxy;
	id<WBSHistoryAccessSessionProtocol> _historyAccessSession;
	NSObject*<OS_dispatch_queue> _historyAccessSessionAccessQueue;

}
-(id)init;
-(void)getHistoryItemsVisitedAfterDate:(id)arg1 beforeDate:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)getHistoryVisitsAfterDate:(id)arg1 beforeDate:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_getHistoryAccessSessionWithCompletionHandler:(/*^block*/id)arg1 ;
@end

