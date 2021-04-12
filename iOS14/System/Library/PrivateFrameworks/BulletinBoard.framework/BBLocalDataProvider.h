/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
*/

#import <BulletinBoard/BBDataProvider.h>

@protocol OS_dispatch_queue, BBDataProvider, OS_dispatch_source;
@class NSObject;

@interface BBLocalDataProvider : BBDataProvider {

	NSObject*<OS_dispatch_queue> _localQueue;
	NSObject*<OS_dispatch_queue> _remoteQueue;
	id<BBDataProvider> _dataProvider;
	NSObject*<OS_dispatch_source> _watchdogTimer;
	BOOL _unresponsive;
	BOOL _invalidated;

}

@property (nonatomic,retain) id<BBDataProvider> dataProvider;              //@synthesize dataProvider=_dataProvider - In the implementation block
+(id)dataProviderWithPrincipalClass:(Class)arg1 serverQueue:(id)arg2 initializationCompletion:(/*^block*/id)arg3 ;
+(id)dataProviderWithDataProvider:(id)arg1 serverQueue:(id)arg2 ;
-(void)deliverResponse:(id)arg1 forBulletinRequest:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)setDataProvider:(id<BBDataProvider>)arg1 ;
-(void)_ping;
-(void)clearedInfoForClearingBulletinsFromDate:(id)arg1 toDate:(id)arg2 lastClearedInfo:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)dataProviderDidLoad;
-(BOOL)canPerformMigration;
-(id<BBDataProvider>)dataProvider;
-(void)updateSectionInfoWithSectionInfo:(id)arg1 handler:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)migrateSectionInfo:(id)arg1 oldSectionInfo:(id)arg2 ;
-(void)deliverMessageWithName:(id)arg1 userInfo:(id)arg2 ;
-(void)noteSectionInfoDidChange:(id)arg1 ;
-(void)invalidate;
-(void)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2 ;
-(id)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2 ;
-(id)initWithPrincipalClass:(Class)arg1 serverQueue:(id)arg2 initializationCompletion:(/*^block*/id)arg3 ;
-(id)initWithDataProvider:(id)arg1 serverQueue:(id)arg2 ;
-(id)_initWithDataProvider:(id)arg1 sectionID:(id)arg2 serverQueue:(id)arg3 initializationCompletion:(/*^block*/id)arg4 ;
-(void)_watchdogFired;
-(id)_bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2 ;
-(id)_doSynchronousRemoteRequest:(/*^block*/id)arg1 conditionalOn:(/*^block*/id)arg2 ;
-(void)_doAsynchronousRemoteRequest:(/*^block*/id)arg1 conditionalOn:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)updateClearedInfoWithClearedInfo:(id)arg1 handler:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)reloadIdentityWithCompletion:(/*^block*/id)arg1 ;
-(void)clearedInfoForClearingAllBulletinsWithLastClearedInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)startWatchdog;
-(void)dealloc;
-(void)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

