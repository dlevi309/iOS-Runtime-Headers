/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

#import <libobjc.A.dylib/WBSHistoryConnectionProtocol.h>

@class WBSHistoryService;

@interface WBSHistoryConnection : NSObject <WBSHistoryConnectionProtocol> {

	WBSHistoryService* _historyService;

}
-(void)queryMemoryFootprint:(/*^block*/id)arg1 ;
-(void)ensureConnected:(/*^block*/id)arg1 ;
-(id)initWithHistoryService:(id)arg1 ;
-(void)beginHistoryAccessSession:(/*^block*/id)arg1 ;
-(void)getServiceInfo:(/*^block*/id)arg1 ;
-(void)beginURLCompletionSession:(/*^block*/id)arg1 ;
-(void)getVisitedLinksWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)groupVisitsIntoSessionsBetweenStartDate:(id)arg1 endDate:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)debugGetDatabaseURLWithCompletionHandler:(/*^block*/id)arg1 ;
@end

