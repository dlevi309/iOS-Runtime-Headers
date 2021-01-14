/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@protocol WBSHistoryConnectionProtocol
@required
-(void)finishClearingHistoryIfNecessaryWithCompletionHandler:(/*^block*/id)arg1;
-(void)groupVisitsIntoSessionsBetweenStartDate:(id)arg1 endDate:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)initializeCloudHistoryWithConfiguration:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)queryMemoryFootprint:(/*^block*/id)arg1;
-(void)debugGetDatabaseURLWithCompletionHandler:(/*^block*/id)arg1;
-(void)releaseCloudHistory:(/*^block*/id)arg1;
-(void)disconnectWithCompletionHandler:(/*^block*/id)arg1;
-(void)ensureConnected:(/*^block*/id)arg1;
-(void)getVisitedLinksWithCompletionHandler:(/*^block*/id)arg1;
-(void)beginHistoryAccessSession:(/*^block*/id)arg1;
-(void)getServiceInfo:(/*^block*/id)arg1;
-(void)beginURLCompletionSession:(/*^block*/id)arg1;
-(void)connectWithOptions:(id)arg1 delegate:(id)arg2 completionHandler:(/*^block*/id)arg3;

@end

