/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DADaemonSupport.framework/DADaemonSupport
*/

#import <DataAccessExpress/DADisableableObject.h>

@protocol OS_xpc_object;
@class NSObject, NSMutableArray;

@interface DADAccessManager : DADisableableObject {

	NSObject*<OS_xpc_object> _mainConnection;
	NSMutableArray* _clients;

}

@property (nonatomic,retain) NSObject*<OS_xpc_object> mainConnection;              //@synthesize mainConnection=_mainConnection - In the implementation block
@property (nonatomic,retain) NSMutableArray * clients;                             //@synthesize clients=_clients - In the implementation block
+(id)sharedManager;
-(id)init;
-(void)dealloc;
-(id)_init;
-(void)removeClient:(id)arg1 ;
-(NSMutableArray *)clients;
-(void)setClients:(NSMutableArray *)arg1 ;
-(void)setMainConnection:(NSObject*<OS_xpc_object>)arg1 ;
-(NSObject*<OS_xpc_object>)mainConnection;
-(void)_setupServerConnection;
-(void)addPersistentClientWithAccountID:(id)arg1 clientID:(id)arg2 watchedIDs:(id)arg3 ;
-(BOOL)isAccountID:(id)arg1 folderID:(id)arg2 watchedByClientBesides:(id)arg3 ;
@end

