/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
*/


@class NSXPCConnection, NSLock;

@interface ACDDataclassOwnersManager : NSObject {

	NSXPCConnection* _connection;
	NSLock* _connectionLock;

}
-(id)init;
-(BOOL)isPerformingDataclassActionsForAccount:(id)arg1 ;
-(BOOL)performDataclassActions:(id)arg1 forAccount:(id)arg2 withChildren:(id)arg3 withError:(id*)arg4 ;
-(void)preloadDataclassOwnersWithError:(id*)arg1 ;
-(id)actionsForEnablingDataclass:(id)arg1 onAccount:(id)arg2 withError:(id*)arg3 ;
-(id)actionsForDisablingDataclass:(id)arg1 onAccount:(id)arg2 withError:(id*)arg3 ;
-(id)actionsForDeletingAccount:(id)arg1 affectingDataclass:(id)arg2 withError:(id*)arg3 ;
-(id)_dataclassOwnersManagerConnection;
-(id)actionsForAddingAccount:(id)arg1 affectingDataclass:(id)arg2 withError:(id*)arg3 ;
@end

