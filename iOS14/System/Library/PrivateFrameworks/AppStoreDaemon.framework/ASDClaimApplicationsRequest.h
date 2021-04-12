/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/

#import <AppStoreDaemon/ASDBaseClient.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSXPCConnection, ASDClaimApplicationsRequestOptions, NSString;

@interface ASDClaimApplicationsRequest : ASDBaseClient <NSXPCListenerDelegate> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _calloutQueue;
	NSXPCConnection* _connection;
	ASDClaimApplicationsRequestOptions* _options;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_setupConnection;
-(id)initWithOptions:(id)arg1 ;
-(void)_sendRequestWithOptions:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)sendRequestWithCompletionBlock:(/*^block*/id)arg1 ;
@end

