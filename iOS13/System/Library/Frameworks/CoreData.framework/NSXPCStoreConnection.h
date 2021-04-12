/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@class NSXPCStore, NSXPCConnection;

@interface NSXPCStoreConnection : NSObject {

	NSXPCStore* _store;
	NSXPCConnection* _connection;

}
-(void)dealloc;
-(void)disconnect;
-(id)initForStore:(id)arg1 ;
-(void)sendMessageWithContext:(id)arg1 ;
-(id)createConnectionWithOptions:(id)arg1 ;
-(id)sendMessage:(id)arg1 store:(id)arg2 error:(id*)arg3 ;
-(void)reconnect;
@end

