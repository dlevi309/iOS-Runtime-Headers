/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
*/

#import <libobjc.A.dylib/BBAssertionDelegate.h>

@protocol OS_dispatch_queue, BBObserverDelegate;
@class NSObject, NSMutableDictionary, NSMapTable, BBObserverServerProxy, NSString;

@interface BBObserver : NSObject <BBAssertionDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _calloutQueue;
	NSMutableDictionary* _sectionParametersBySectionID;
	NSMapTable* _bulletinLifeAssertions;
	NSMutableDictionary* _remainingFeedsByBulletinID;
	BBObserverServerProxy* _serverProxy;
	BOOL _isGateway;
	id<BBObserverDelegate> _delegate;
	unsigned long long _observerFeed;
	NSString* _gatewayName;
	unsigned long long _gatewayPriority;

}

@property (assign,nonatomic,__weak) id<BBObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long observerFeed;                     //@synthesize observerFeed=_observerFeed - In the implementation block
@property (nonatomic,copy,readonly) NSString * gatewayName;                       //@synthesize gatewayName=_gatewayName - In the implementation block
@property (nonatomic,readonly) unsigned long long gatewayPriority;                //@synthesize gatewayPriority=_gatewayPriority - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)gatewayWithQueue:(id)arg1 calloutQueue:(id)arg2 name:(id)arg3 priority:(unsigned long long)arg4 ;
+(id)observerWithQueue:(id)arg1 calloutQueue:(id)arg2 forGatewayName:(id)arg3 ;
-(id)initWithQueue:(id)arg1 ;
-(void)updateSectionParameters:(id)arg1 forSectionID:(id)arg2 ;
-(void)clearSection:(id)arg1 ;
-(void)clearBulletinsFromDate:(id)arg1 toDate:(id)arg2 inSections:(id)arg3 ;
-(void)requestNoticesBulletinsForSectionID:(id)arg1 ;
-(void)updateSectionInfo:(id)arg1 ;
-(void)noteServerReceivedResponseForBulletin:(id)arg1 ;
-(void)updateGlobalSettings:(id)arg1 ;
-(void)sendResponse:(id)arg1 ;
-(void)requestNoticesBulletinsForAllSections;
-(void)noteBulletinsLoadedForSectionID:(id)arg1 ;
-(void)removeSection:(id)arg1 ;
-(void)sendResponse:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)init;
-(id)initWithQueue:(id)arg1 asGateway:(id)arg2 priority:(unsigned long long)arg3 ;
-(id<BBObserverDelegate>)delegate;
-(void)_queue_updateBulletin:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(NSString *)gatewayName;
-(void)assertionExpired:(id)arg1 transactionID:(unsigned long long)arg2 ;
-(void)getSectionInfoForSectionIDs:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)getSectionInfoWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithQueue:(id)arg1 calloutQueue:(id)arg2 ;
-(void)_queue_noteBulletinsLoadedForSectionID:(id)arg1 ;
-(id)_initWithQueue:(id)arg1 calloutQueue:(id)arg2 gatewayName:(id)arg3 gatewayPriority:(unsigned long long)arg4 isGateway:(BOOL)arg5 ;
-(id)initWithQueue:(id)arg1 forGateway:(id)arg2 ;
-(void)serverProxy:(id)arg1 connectionStateDidChange:(BOOL)arg2 ;
-(void)removeBulletins:(id)arg1 inSection:(id)arg2 fromFeed:(unsigned long long)arg3 ;
-(void)_queue_registerBulletin:(id)arg1 withTransactionID:(unsigned long long)arg2 ;
-(void)_queue_invalidate;
-(void)getSectionInfoForActiveSectionsWithCompletion:(/*^block*/id)arg1 ;
-(id)parametersForSectionID:(id)arg1 ;
-(void)removeBulletins:(id)arg1 inSection:(id)arg2 ;
-(void)setDelegate:(id<BBObserverDelegate>)arg1 ;
-(void)getComposedImageSizeForAttachment:(id)arg1 bulletin:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(unsigned long long)observerFeed;
-(NSString *)description;
-(id)initWithQueue:(id)arg1 calloutQueue:(id)arg2 gatewayName:(id)arg3 gatewayPriority:(unsigned long long)arg4 isGateway:(BOOL)arg5 connection:(id)arg6 ;
-(BOOL)isValid;
-(void)requestListBulletinsForSectionID:(id)arg1 ;
-(void)getPublisherMatchIDsOfBulletinsPublishedAfterDate:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)getParametersForSectionID:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)updateBulletin:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)_queue_updateRemoveBulletin:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)setObserverFeed:(unsigned long long)arg1 ;
-(void)getBulletinsWithCompletion:(/*^block*/id)arg1 ;
-(void)invalidate;
-(void)getBulletinsForPublisherMatchIDs:(id)arg1 sectionID:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)_queue_serverProxy:(id)arg1 connectionStateDidChange:(BOOL)arg2 ;
-(void)clearBulletins:(id)arg1 inSection:(id)arg2 ;
-(void)getUniversalSectionIDForSectionID:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_queue_updateModifyBulletin:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(unsigned long long)gatewayPriority;
-(void)_queue_updateAddBulletin:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)dealloc;
@end

