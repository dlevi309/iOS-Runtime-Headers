/*
* Generated on Thursday, January 14, 2021 at 2:25:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/


@protocol EMDaemonInterfaceXPC <NSObject>
@required
-(void)setAllowsBackgroundResume:(BOOL)arg1;
-(void)getClientStateInterface:(/*^block*/id)arg1;
-(void)getMessageRepositoryInterface:(/*^block*/id)arg1;
-(void)getOutgoingMessageRepositoryInterface:(/*^block*/id)arg1;
-(void)getAccountRepositoryInterface:(/*^block*/id)arg1;
-(void)getFetchControllerInterface:(/*^block*/id)arg1;
-(void)getMailboxRepositoryInterface:(/*^block*/id)arg1;
-(void)getSearchableIndexInterface:(/*^block*/id)arg1;
-(void)getInteractionLoggerInterface:(/*^block*/id)arg1;
-(void)getVIPManagerInterface:(/*^block*/id)arg1;
-(void)getActivityRegistryInterface:(/*^block*/id)arg1;
-(void)debugStatusWithCompletionHandler:(/*^block*/id)arg1;
-(void)launchForEarlyRecovery:(/*^block*/id)arg1;

@end

