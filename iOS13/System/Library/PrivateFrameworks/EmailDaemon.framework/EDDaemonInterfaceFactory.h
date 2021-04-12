/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/


@class EDPersistence, EDCategorySubsystem;

@interface EDDaemonInterfaceFactory : NSObject {

	EDPersistence* _persistence;
	EDCategorySubsystem* _categorySubsystem;

}

@property (nonatomic,retain) EDCategorySubsystem * categorySubsystem;              //@synthesize categorySubsystem=_categorySubsystem - In the implementation block
@property (nonatomic,readonly) EDPersistence * persistence;                        //@synthesize persistence=_persistence - In the implementation block
-(EDPersistence *)persistence;
-(id)newFetchController;
-(EDCategorySubsystem *)categorySubsystem;
-(id)initWithPersistence:(id)arg1 categorySubsystem:(id)arg2 ;
-(id)newAccountRepository;
-(id)newMailboxRepository;
-(id)newMessageRepositoryWithResumable:(id)arg1 ;
-(id)newOutgoingMessageRepository;
-(id)newSearchableIndex;
-(id)sharedInteractionLogger;
-(id)sharedDonationController;
-(id)newVIPManagerInterface;
-(id)newActivityRegistry;
-(id)newClientResumerWithForegroundReporter:(id)arg1 ;
-(void)setCategorySubsystem:(EDCategorySubsystem *)arg1 ;
@end

