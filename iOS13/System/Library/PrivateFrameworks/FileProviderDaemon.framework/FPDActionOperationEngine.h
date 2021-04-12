/*
* Generated on Monday, March 1, 2021 at 2:34:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
*/


@protocol OS_dispatch_queue;
@class FPDServer, NSObject, NSOperationQueue;

@interface FPDActionOperationEngine : NSObject {

	FPDServer* _server;
	NSObject*<OS_dispatch_queue> _queue;
	NSOperationQueue* _operationQueue;

}
-(id)init;
-(id)initWithServer:(id)arg1 ;
-(void)dumpStateTo:(id)arg1 ;
-(void)scheduleActionOperationWithInfo:(id)arg1 request:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)inFlightOperations;
@end

