/*
* Generated on Thursday, January 14, 2021 at 2:27:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)textReplacementServer;
+(BOOL)isBlackListed:(unsigned)arg1 ;
-(void)removeAllEntries;
-(void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4 ;
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(void)shutdown;
-(id)init;
-(BOOL)isSetupAssistantRunning;
-(void)start;
-(BOOL)_cancelPendingUpdateForClient:(id)arg1 ;
-(void)cancelPendingUpdates;
-(id)initWithDatabaseDirectoryPath:(id)arg1 ;
-(NSXPCListener *)listener;
-(void)reachabilityDidChange:(id)arg1 ;
-(void)runMigration;
-(void)addEntries:(id)arg1 removeEntries:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(_KSTextReplacementManager *)textReplacementManager;
-(void)setDirectoryPath:(NSString *)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)cleanup;
-(id)textReplacementEntriesForClient:(id)arg1 ;
-(void)scheduleSyncTask;
-(void)registerForPushNotifications;
-(void)setPushConnection:(APSConnection *)arg1 ;
-(void)setListener:(NSXPCListener *)arg1 ;
-(id)textReplacementEntries;
-(void)_performCleanup;
-(void)setTextReplacementManager:(_KSTextReplacementManager *)arg1 ;
-(void)requestSyncWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)queryTextReplacementsWithPredicate:(id)arg1 callback:(/*^block*/id)arg2 ;
-(APSConnection *)pushConnection;
-(void)queryTextReplacementsWithCallback:(/*^block*/id)arg1 ;
-(void)buddySetupDidFinish;
-(void)addEntries:(id)arg1 removeEntries:(id)arg2 forClient:(id)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(void)requestSync:(unsigned long long)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(NSString *)directoryPath;
-(void)dealloc;
@end

