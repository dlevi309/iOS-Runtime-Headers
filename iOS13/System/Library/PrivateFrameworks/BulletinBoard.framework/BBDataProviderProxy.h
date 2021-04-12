/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
*/

#import <libobjc.A.dylib/BBRemoteDataProviderClientProxy.h>

@protocol BBRemoteDataProvider, OS_dispatch_queue, BBRemoteDataProviderServerProxy;
@class NSObject, BBDataProviderIdentity, NSString;

@interface BBDataProviderProxy : NSObject <BBRemoteDataProviderClientProxy> {

	id<BBRemoteDataProvider> _dataProvider;
	NSObject*<OS_dispatch_queue> _clientCalloutQueue;
	BBDataProviderIdentity* _identity;
	BOOL _dataProviderDidLoad;
	NSObject*<OS_dispatch_queue> _proxyQueue;
	id<BBRemoteDataProviderServerProxy> _serverProxy;
	BOOL _connected;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (retain) BBDataProviderIdentity * identity;               //@synthesize identity=_identity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)description;
-(BBDataProviderIdentity *)identity;
-(void)setIdentity:(BBDataProviderIdentity *)arg1 ;
-(void)updateIdentity:(/*^block*/id)arg1 ;
-(void)dataProviderDidLoad;
-(void)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)clearedInfoForClearingAllBulletinsWithLastClearedInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)clearedInfoForClearingBulletinsFromDate:(id)arg1 toDate:(id)arg2 lastClearedInfo:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)deliverBulletinActionResponse:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
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
-(void)setServerProxy:(id)arg1 ;
-(id)initWithDataProvider:(id)arg1 clientReplyQueue:(id)arg2 ;
-(void)_makeClientRequest:(/*^block*/id)arg1 ;
-(void)_makeServerRequest:(/*^block*/id)arg1 ;
-(void)updateSectionInfoWithHandler:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)addBulletin:(id)arg1 interrupt:(BOOL)arg2 ;
-(void)reloadSectionParameters;
-(void)reloadDefaultSectionInfo;
-(void)updateClearedInfoWithHandler:(/*^block*/id)arg1 ;
-(void)updateSectionInfoWithHandler:(/*^block*/id)arg1 ;
@end
