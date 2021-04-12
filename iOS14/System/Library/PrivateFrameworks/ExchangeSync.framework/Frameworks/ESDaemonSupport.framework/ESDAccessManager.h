/*
* Generated on Thursday, January 14, 2021 at 2:27:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/ESDaemonSupport.framework/ESDaemonSupport
*/

#import <DataAccessExpress/DADisableableObject.h>

@protocol OS_xpc_object;
@class NSObject, NSMutableArray;

@interface ESDAccessManager : DADisableableObject {

	NSObject*<OS_xpc_object> _mainConnection;
	NSObject*<OS_xpc_object> _exchangeConnection;
	NSMutableArray* _clients;

}

@property (nonatomic,retain) NSObject*<OS_xpc_object> mainConnection;                  //@synthesize mainConnection=_mainConnection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_xpc_object> exchangeConnection;              //@synthesize exchangeConnection=_exchangeConnection - In the implementation block
@property (nonatomic,retain) NSMutableArray * clients;                                 //@synthesize clients=_clients - In the implementation block
+(id)sharedManager;
-(NSMutableArray *)clients;
-(id)init;
-(void)removeClient:(id)arg1 ;
-(id)_init;
-(void)setClients:(NSMutableArray *)arg1 ;
-(void)setMainConnection:(NSObject*<OS_xpc_object>)arg1 ;
-(NSObject*<OS_xpc_object>)mainConnection;
-(void)_setupServerConnection;
-(void)addPersistentClientWithAccountID:(id)arg1 clientID:(id)arg2 watchedIDs:(id)arg3 ;
-(BOOL)isAccountID:(id)arg1 folderID:(id)arg2 watchedByClientBesides:(id)arg3 ;
-(NSObject*<OS_xpc_object>)exchangeConnection;
-(void)setExchangeConnection:(NSObject*<OS_xpc_object>)arg1 ;
@end

