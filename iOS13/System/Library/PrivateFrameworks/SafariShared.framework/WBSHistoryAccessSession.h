/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

#import <libobjc.A.dylib/WBSHistoryAccessSessionProtocol.h>

@protocol OS_dispatch_queue;
@class WBSHistoryService, NSObject;

@interface WBSHistoryAccessSession : NSObject <WBSHistoryAccessSessionProtocol> {

	WBSHistoryService* _historyService;
	NSObject*<OS_dispatch_queue> _queue;

}
-(void)getHistoryItemsVisitedAfterDate:(id)arg1 beforeDate:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)getHistoryVisitsAfterDate:(id)arg1 beforeDate:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithHistoryService:(id)arg1 ;
@end

