/*
* Generated on Thursday, January 14, 2021 at 2:25:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)test_tearDown;
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
-(id)newClientResumerWithClientState:(id)arg1 ;
-(void)setCategorySubsystem:(EDCategorySubsystem *)arg1 ;
@end

