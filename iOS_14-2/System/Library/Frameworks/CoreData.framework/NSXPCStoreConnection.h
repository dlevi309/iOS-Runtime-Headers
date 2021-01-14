/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@class NSXPCStore, NSXPCConnection;

@interface NSXPCStoreConnection : NSObject {

	NSXPCStore* _store;
	NSXPCConnection* _connection;

}
-(void)reconnect;
-(void)disconnect;
-(id)createConnectionWithOptions:(id)arg1 ;
-(void)sendMessageWithContext:(id)arg1 ;
-(id)sendMessage:(id)arg1 store:(id)arg2 error:(id*)arg3 ;
-(id)initForStore:(id)arg1 ;
-(void)dealloc;
@end

