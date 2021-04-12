/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
*/

#import <libobjc.A.dylib/BBObserverServerInterface.h>
#import <libobjc.A.dylib/BBObserverClientInterface.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, BBServer, NSObject, NSMutableDictionary, NSString;

@interface BBObserverClientProxy : NSObject <BBObserverServerInterface, BBObserverClientInterface> {

	NSXPCConnection* _connection;
	BBServer* _server;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _calloutQueue;
	NSMutableDictionary* _bulletinIDsToTransaction;
	NSString* _clientBundleIdentifier;

}

@property (assign,nonatomic,__weak) BBServer * server;                                    //@synthesize server=_server - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;                                //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                          //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> calloutQueue;                   //@synthesize calloutQueue=_calloutQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * bulletinIDsToTransaction;              //@synthesize bulletinIDsToTransaction=_bulletinIDsToTransaction - In the implementation block
@property (nonatomic,copy) NSString * clientBundleIdentifier;                             //@synthesize clientBundleIdentifier=_clientBundleIdentifier - In the implementation block
+(id)xpcInterface;
-(void)getPublisherMatchIDsOfBulletinsPublishedAfterDate:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)getSectionInfoForActiveSectionsWithHandler:(/*^block*/id)arg1 ;
-(void)updateSectionParameters:(id)arg1 forSectionID:(id)arg2 ;
-(void)clearSection:(id)arg1 ;
-(void)removeTransaction:(id)arg1 ;
-(void)clearBulletinIDs:(id)arg1 inSection:(id)arg2 ;
-(void)clearBulletinsFromDate:(id)arg1 toDate:(id)arg2 inSections:(id)arg3 ;
-(void)getBulletinsWithHandler:(/*^block*/id)arg1 ;
-(void)getObserverDebugInfo:(/*^block*/id)arg1 ;
-(NSString *)clientBundleIdentifier;
-(void)requestNoticesBulletinsForSectionID:(id)arg1 ;
-(void)setObserverFeed:(unsigned long long)arg1 attachToLightsAndSirensGateway:(id)arg2 ;
-(void)updateSectionInfo:(id)arg1 ;
-(void)noteServerReceivedResponseForBulletin:(id)arg1 ;
-(void)setObserverFeed:(unsigned long long)arg1 asLightsAndSirensGateway:(id)arg2 priority:(unsigned long long)arg3 ;
-(void)getSectionInfoForSectionIDs:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)getUniversalSectionIDForSectionID:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)updateGlobalSettings:(id)arg1 ;
-(void)getSectionParametersForSectionID:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)handleResponse:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)requestNoticesBulletinsForAllSections;
-(void)updateBulletin:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)noteBulletinsLoadedForSectionID:(id)arg1 ;
-(void)getBulletinsForPublisherMatchIDs:(id)arg1 sectionID:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)removeSection:(id)arg1 ;
-(void)getSectionInfoWithHandler:(/*^block*/id)arg1 ;
-(void)setClientBundleIdentifier:(NSString *)arg1 ;
-(void)setServer:(BBServer *)arg1 ;
-(void)setCalloutQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)currentTransactionForBulletinID:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)calloutQueue;
-(id)description;
-(NSXPCConnection *)connection;
-(BBServer *)server;
-(id)initWithServer:(id)arg1 connection:(id)arg2 calloutQueue:(id)arg3 ;
-(unsigned long long)incrementedTransactionIDForBulletinID:(id)arg1 ;
-(void)setBulletinIDsToTransaction:(NSMutableDictionary *)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)removeBulletins:(id)arg1 inSection:(id)arg2 fromFeeds:(unsigned long long)arg3 ;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(id)transactionBulletinIDs;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithServer:(id)arg1 connection:(id)arg2 queue:(id)arg3 calloutQueue:(id)arg4 ;
-(void)finishedWithBulletinID:(id)arg1 transactionID:(unsigned long long)arg2 ;
-(void)dealloc;
-(NSMutableDictionary *)bulletinIDsToTransaction;
@end

