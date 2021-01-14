/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

