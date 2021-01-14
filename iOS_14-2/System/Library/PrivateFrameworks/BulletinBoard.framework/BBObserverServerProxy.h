/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
*/

#import <libobjc.A.dylib/BBObserverClientInterface.h>
#import <libobjc.A.dylib/BBObserverServerInterface.h>

@protocol OS_dispatch_queue;
@class BBObserver, NSXPCConnection, NSObject;

@interface BBObserverServerProxy : NSObject <BBObserverClientInterface, BBObserverServerInterface> {

	BOOL _isValid;
	BOOL _isEstablished;
	BBObserver* _observer;
	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _calloutQueue;

}

@property (assign,nonatomic,__weak) BBObserver * observer;                           //@synthesize observer=_observer - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;                           //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                     //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> calloutQueue;              //@synthesize calloutQueue=_calloutQueue - In the implementation block
+(id)xpcInterface;
-(void)getPublisherMatchIDsOfBulletinsPublishedAfterDate:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)getSectionInfoForActiveSectionsWithHandler:(/*^block*/id)arg1 ;
-(void)updateSectionParameters:(id)arg1 forSectionID:(id)arg2 ;
-(void)clearSection:(id)arg1 ;
-(void)clearBulletinIDs:(id)arg1 inSection:(id)arg2 ;
-(void)clearBulletinsFromDate:(id)arg1 toDate:(id)arg2 inSections:(id)arg3 ;
-(void)getBulletinsWithHandler:(/*^block*/id)arg1 ;
-(void)getObserverDebugInfo:(/*^block*/id)arg1 ;
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
-(void)setObserver:(BBObserver *)arg1 ;
-(BBObserver *)observer;
-(void)setCalloutQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)calloutQueue;
-(id)initWithObserver:(id)arg1 connection:(id)arg2 queue:(id)arg3 calloutQueue:(id)arg4 ;
-(BOOL)isValid;
-(NSXPCConnection *)connection;
-(void)invalidate;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)removeBulletins:(id)arg1 inSection:(id)arg2 fromFeeds:(unsigned long long)arg3 ;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(BOOL)established;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)finishedWithBulletinID:(id)arg1 transactionID:(unsigned long long)arg2 ;
-(void)dealloc;
@end

