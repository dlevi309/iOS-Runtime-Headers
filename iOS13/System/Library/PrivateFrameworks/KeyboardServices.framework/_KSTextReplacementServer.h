/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/APSConnectionDelegate.h>
#import <libobjc.A.dylib/_KSTextReplacementSyncProtocol.h>
#import <libobjc.A.dylib/_KSTextReplacementStoreProtocol.h>
#import <libobjc.A.dylib/_KSTextReplacementCancellation.h>

@protocol OS_dispatch_queue;
@class NSObject, _KSTRClient, _KSTextReplacementManager, APSConnection, NSXPCListener, NSString;

@interface _KSTextReplacementServer : NSObject <NSXPCListenerDelegate, APSConnectionDelegate, _KSTextReplacementSyncProtocol, _KSTextReplacementStoreProtocol, _KSTextReplacementCancellation> {

	NSObject*<OS_dispatch_queue> _workQueue;
	_KSTRClient* _daemonClient;
	_KSTextReplacementManager* _textReplacementManager;
	APSConnection* _pushConnection;
	NSXPCListener* _listener;
	NSString* _directoryPath;

}

@property (nonatomic,retain) APSConnection * pushConnection;                                  //@synthesize pushConnection=_pushConnection - In the implementation block
@property (nonatomic,retain) NSXPCListener * listener;                                        //@synthesize listener=_listener - In the implementation block
@property (nonatomic,retain) _KSTextReplacementManager * textReplacementManager;              //@synthesize textReplacementManager=_textReplacementManager - In the implementation block
@property (nonatomic,copy) NSString * directoryPath;                                          //@synthesize directoryPath=_directoryPath - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isBlackListed:(unsigned)arg1 ;
+(id)textReplacementServer;
-(id)init;
-(void)dealloc;
-(NSXPCListener *)listener;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)start;
-(void)setListener:(NSXPCListener *)arg1 ;
-(void)cleanup;
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4 ;
-(void)removeAllEntries;
-(void)shutdown;
-(void)reachabilityDidChange:(id)arg1 ;
-(NSString *)directoryPath;
-(BOOL)isSetupAssistantRunning;
-(void)setDirectoryPath:(NSString *)arg1 ;
-(void)_performCleanup;
-(void)setPushConnection:(APSConnection *)arg1 ;
-(APSConnection *)pushConnection;
-(void)runMigration;
-(void)queryTextReplacementsWithCallback:(/*^block*/id)arg1 ;
-(void)requestSync:(unsigned long long)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)addEntries:(id)arg1 removeEntries:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)queryTextReplacementsWithPredicate:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)requestSyncWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)textReplacementEntries;
-(void)cancelPendingUpdates;
-(id)initWithDatabaseDirectoryPath:(id)arg1 ;
-(void)registerForPushNotifications;
-(void)scheduleSyncTask;
-(_KSTextReplacementManager *)textReplacementManager;
-(void)setTextReplacementManager:(_KSTextReplacementManager *)arg1 ;
-(void)addEntries:(id)arg1 removeEntries:(id)arg2 forClient:(id)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(BOOL)_cancelPendingUpdateForClient:(id)arg1 ;
-(id)textReplacementEntriesForClient:(id)arg1 ;
-(void)buddySetupDidFinish;
@end

