/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)withdrawBulletinWithPublisherBulletinID:(id)arg1 ;
-(void)setIdentity:(BBDataProviderIdentity *)arg1 ;
-(void)updateSectionInfoWithHandler:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(BBDataProviderIdentity *)identity;
-(void)clearedInfoForClearingBulletinsFromDate:(id)arg1 toDate:(id)arg2 lastClearedInfo:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)dataProviderDidLoad;
-(void)updateIdentity:(/*^block*/id)arg1 ;
-(void)invalidateBulletins;
-(NSString *)description;
-(void)deliverMessageWithName:(id)arg1 userInfo:(id)arg2 ;
-(void)_makeServerRequest:(/*^block*/id)arg1 ;
-(void)noteSectionInfoDidChange:(id)arg1 ;
-(void)reloadSectionParameters;
-(void)deliverBulletinActionResponse:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)reloadDefaultSectionInfo;
-(void)modifyBulletin:(id)arg1 ;
-(id)initWithDataProvider:(id)arg1 clientReplyQueue:(id)arg2 ;
-(void)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)addBulletin:(id)arg1 interrupt:(BOOL)arg2 ;
-(void)updateSectionInfoWithHandler:(/*^block*/id)arg1 ;
-(void)setServerProxy:(id)arg1 ;
-(void)updateClearedInfoWithHandler:(/*^block*/id)arg1 ;
-(void)withdrawBulletinsWithRecordID:(id)arg1 ;
-(void)_makeClientRequest:(/*^block*/id)arg1 ;
-(void)clearedInfoForClearingAllBulletinsWithLastClearedInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)addBulletin:(id)arg1 forDestinations:(unsigned long long)arg2 ;
-(void)dealloc;
-(void)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

