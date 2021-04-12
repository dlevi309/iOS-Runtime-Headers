/*
* Generated on Thursday, January 14, 2021 at 2:27:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)scheduleActionOperationWithInfo:(id)arg1 request:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)inFlightOperations;
-(void)dumpStateTo:(id)arg1 ;
@end

