/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/


@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject;

@interface REUpNextSiriClient : NSObject {

	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _queue;

}
-(id)init;
-(void)dealloc;
-(void)completedRequestWithDomain:(id)arg1 ;
-(void)_performOnRemoteObject:(/*^block*/id)arg1 ;
@end

