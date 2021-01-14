/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@protocol OS_dispatch_queue;
@class NSURL, NSObject;

@interface WBSHistoryDatabaseAccessBroker : NSObject {

	NSURL* _historyDatabaseURL;
	NSObject*<OS_dispatch_queue> _writeRequestQueue;

}
-(id)databaseLastModifiedDate;
-(id)init;
-(void)_requestReadOnlyAccessOnQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithHistoryDatabaseURL:(id)arg1 ;
-(void)requestAccessType:(long long)arg1 onQueue:(id)arg2 completionHandlerWithInvalidationHandler:(/*^block*/id)arg3 ;
-(void)_requestReadWriteAccessOnQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_requestAccessType:(long long)arg1 onQueue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)requestAccessType:(long long)arg1 onQueue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_openDatabaseWithAccessType:(long long)arg1 onQueue:(id)arg2 error:(id*)arg3 ;
@end

