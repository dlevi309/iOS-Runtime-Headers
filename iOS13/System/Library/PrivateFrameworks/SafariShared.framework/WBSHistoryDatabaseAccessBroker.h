/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@protocol OS_dispatch_queue;
@class NSURL, NSObject;

@interface WBSHistoryDatabaseAccessBroker : NSObject {

	NSURL* _historyDatabaseURL;
	NSObject*<OS_dispatch_queue> _writeRequestQueue;

}
-(id)init;
-(void)requestAccessType:(long long)arg1 onQueue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)requestAccessType:(long long)arg1 onQueue:(id)arg2 completionHandlerWithInvalidationHandler:(/*^block*/id)arg3 ;
-(void)_requestReadOnlyAccessOnQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_requestReadWriteAccessOnQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_requestAccessType:(long long)arg1 onQueue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_openDatabaseWithAccessType:(long long)arg1 onQueue:(id)arg2 error:(id*)arg3 ;
-(id)initWithHistoryDatabaseURL:(id)arg1 ;
-(id)databaseLastModifiedDate;
@end

