/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
*/


@class IDSXPCDaemonController;

@interface IDSPhoneSubscriptionSelector : NSObject {

	id _syncDaemonController;
	/*^block*/id _syncDaemonControllerBuilder;

}

@property (nonatomic,retain) IDSXPCDaemonController * syncDaemonController;              //@synthesize syncDaemonController=_syncDaemonController - In the implementation block
@property (nonatomic,copy) id syncDaemonControllerBuilder;                               //@synthesize syncDaemonControllerBuilder=_syncDaemonControllerBuilder - In the implementation block
-(id)init;
-(id)selectedSubscriptionsWithError:(id*)arg1 ;
-(void)requestSelectedSubscriptionsWithCompletion:(/*^block*/id)arg1 ;
-(void)selectSubscription:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)unselectSubscription:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)setSelectedSubscriptions:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)initWithSyncDaemonControllerBuilder:(/*^block*/id)arg1 ;
-(void)_performSyncAction:(/*^block*/id)arg1 ;
-(id)selectSubscription:(id)arg1 withError:(id*)arg2 ;
-(id)unselectSubscription:(id)arg1 withError:(id*)arg2 ;
-(id)setSelectedSubscriptions:(id)arg1 withError:(id*)arg2 ;
-(IDSXPCDaemonController *)syncDaemonController;
-(void)setSyncDaemonController:(IDSXPCDaemonController *)arg1 ;
-(id)syncDaemonControllerBuilder;
-(void)setSyncDaemonControllerBuilder:(id)arg1 ;
@end

