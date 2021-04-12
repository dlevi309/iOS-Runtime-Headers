/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
*/

#import <BulletinBoard/BBDataProvider.h>
#import <libobjc.A.dylib/BBRemoteDataProviderServerProxy.h>

@protocol OS_dispatch_queue, BBRemoteDataProviderClientProxy, BBRemoteDataProviderDelegate;
@class NSString, NSObject;

@interface BBRemoteDataProvider : BBDataProvider <BBRemoteDataProviderServerProxy> {

	NSString* _sectionID;
	NSObject*<OS_dispatch_queue> _replyQueue;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _proxyQueue;
	id<BBRemoteDataProviderClientProxy> _clientProxy;
	BOOL _connected;
	BOOL _serverIsReady;
	NSObject*<OS_dispatch_queue> _serverControlQueue;
	id<BBRemoteDataProviderDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)debugDescription;
-(id)sectionIdentifier;
-(void)dataProviderDidLoad;
-(void)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)clearedInfoForClearingAllBulletinsWithLastClearedInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)clearedInfoForClearingBulletinsFromDate:(id)arg1 toDate:(id)arg2 lastClearedInfo:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)getDataForAttachmentUUID:(id)arg1 recordID:(id)arg2 isPrimary:(BOOL)arg3 withHandler:(/*^block*/id)arg4 ;
-(void)getPNGDataForAttachmentUUID:(id)arg1 recordID:(id)arg2 isPrimary:(BOOL)arg3 sizeConstraints:(id)arg4 withHandler:(/*^block*/id)arg5 ;
-(void)getAspectRatioForAttachmentUUID:(id)arg1 recordID:(id)arg2 isPrimary:(BOOL)arg3 withHandler:(/*^block*/id)arg4 ;
-(void)noteSectionInfoDidChange:(id)arg1 ;
-(void)deliverMessageWithName:(id)arg1 userInfo:(id)arg2 ;
-(void)invalidateBulletins;
-(void)addBulletin:(id)arg1 forDestinations:(unsigned long long)arg2 ;
-(void)modifyBulletin:(id)arg1 ;
-(void)withdrawBulletinsWithRecordID:(id)arg1 ;
-(void)withdrawBulletinWithPublisherBulletinID:(id)arg1 ;
-(void)reloadSectionParameters:(id)arg1 ;
-(void)reloadDefaultSectionInfo:(id)arg1 ;
-(void)getClearedInfoWithCompletion:(/*^block*/id)arg1 ;
-(void)setClearedInfo:(id)arg1 ;
-(void)getSectionInfoWithCompletion:(/*^block*/id)arg1 ;
-(void)setSectionInfo:(id)arg1 ;
-(void)updateClearedInfoWithClearedInfo:(id)arg1 handler:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)updateSectionInfoWithSectionInfo:(id)arg1 handler:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(id)debugDescriptionWithChildren:(unsigned long long)arg1 ;
-(void)deliverResponse:(id)arg1 forBulletinRequest:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)setClientProxy:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithSectionID:(id)arg1 delegate:(id)arg2 ;
-(void)setServerIsReady:(BOOL)arg1 ;
-(BOOL)migrateSectionInfo:(id)arg1 oldSectionInfo:(id)arg2 ;
-(void)startWatchdog;
-(void)reloadIdentityWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)canPerformMigration;
-(void)_logDoesNotRespond:(SEL)arg1 ;
-(void)_sendClientRequest:(/*^block*/id)arg1 ;
-(BOOL)checkResponds:(BOOL)arg1 forSelector:(SEL)arg2 ;
-(void)calloutToServer:(/*^block*/id)arg1 ;
@end

