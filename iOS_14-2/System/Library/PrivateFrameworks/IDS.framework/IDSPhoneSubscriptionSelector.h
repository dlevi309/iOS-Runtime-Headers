/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
*/


@class IDSXPCDaemonController;

@interface IDSPhoneSubscriptionSelector : NSObject {

	id _syncDaemonController;
	/*^block*/id _syncDaemonControllerBuilder;

}

@property (nonatomic,retain) IDSXPCDaemonController * syncDaemonController;              //@synthesize syncDaemonController=_syncDaemonController - In the implementation block
@property (nonatomic,copy) id syncDaemonControllerBuilder;                               //@synthesize syncDaemonControllerBuilder=_syncDaemonControllerBuilder - In the implementation block
-(void)setSyncDaemonController:(IDSXPCDaemonController *)arg1 ;
-(id)syncDaemonControllerBuilder;
-(id)init;
-(id)initWithSyncDaemonControllerBuilder:(/*^block*/id)arg1 ;
-(void)_performSyncAction:(/*^block*/id)arg1 ;
-(void)requestUnselectedTemporaryPhoneAliasesWithError:(/*^block*/id)arg1 ;
-(id)selectedSubscriptionsWithError:(id*)arg1 ;
-(id)selectSubscription:(id)arg1 withError:(id*)arg2 ;
-(id)unselectSubscription:(id)arg1 withError:(id*)arg2 ;
-(id)setSelectedSubscriptions:(id)arg1 withError:(id*)arg2 ;
-(BOOL)removeTemporaryPhoneAlias:(id)arg1 withError:(id*)arg2 ;
-(BOOL)enableTemporaryPhoneAlias:(id)arg1 withError:(id*)arg2 ;
-(BOOL)disableTemporaryPhoneAlias:(id)arg1 withError:(id*)arg2 ;
-(id)unselectedTemporaryPhoneAliasesWithError:(id*)arg1 ;
-(IDSXPCDaemonController *)syncDaemonController;
-(void)setSyncDaemonControllerBuilder:(id)arg1 ;
-(void)requestSelectedSubscriptionsWithCompletion:(/*^block*/id)arg1 ;
-(void)unselectSubscription:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)selectSubscription:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)setSelectedSubscriptions:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)removeTemporaryPhoneAlias:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)enableTemporaryPhoneAlias:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)disableTemporaryPhoneAlias:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
@end

