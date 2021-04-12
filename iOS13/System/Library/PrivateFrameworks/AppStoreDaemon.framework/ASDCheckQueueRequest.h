/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/

#import <AppStoreDaemon/ASDBaseClient.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSXPCConnection, ASDCheckQueueRequestOptions, NSString;

@interface ASDCheckQueueRequest : ASDBaseClient <NSXPCListenerDelegate> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _calloutQueue;
	NSXPCConnection* _connection;
	ASDCheckQueueRequestOptions* _options;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithOptions:(id)arg1 ;
-(void)_setupConnection;
-(void)_makeAutomaticQueueRequestWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_makeRequestWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_sendRequestWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)checkAutomaticCheckWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)checkPendingCheckWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)sendRequestCompletionBlock:(/*^block*/id)arg1 ;
@end

