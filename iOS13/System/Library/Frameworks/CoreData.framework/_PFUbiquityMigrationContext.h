/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@class PFUbiquityTransactionLog, PFUbiquityStoreSaveSnapshot;

@interface _PFUbiquityMigrationContext : NSObject {

	PFUbiquityTransactionLog* _transactionLog;
	PFUbiquityStoreSaveSnapshot* _sourceStoreSaveSnapshot;
	PFUbiquityStoreSaveSnapshot* _destinationStoreSaveSnapshot;

}

@property (nonatomic,retain) PFUbiquityTransactionLog * transactionLog;                               //@synthesize transactionLog=_transactionLog - In the implementation block
@property (nonatomic,retain) PFUbiquityStoreSaveSnapshot * sourceStoreSaveSnapshot;                   //@synthesize sourceStoreSaveSnapshot=_sourceStoreSaveSnapshot - In the implementation block
@property (nonatomic,retain) PFUbiquityStoreSaveSnapshot * destinationStoreSaveSnapshot;              //@synthesize destinationStoreSaveSnapshot=_destinationStoreSaveSnapshot - In the implementation block
-(void)dealloc;
-(PFUbiquityTransactionLog *)transactionLog;
-(void)setTransactionLog:(PFUbiquityTransactionLog *)arg1 ;
-(void)setSourceStoreSaveSnapshot:(PFUbiquityStoreSaveSnapshot *)arg1 ;
-(void)setDestinationStoreSaveSnapshot:(PFUbiquityStoreSaveSnapshot *)arg1 ;
-(PFUbiquityStoreSaveSnapshot *)destinationStoreSaveSnapshot;
-(id)sourceGlobalObjectIDFromCompressedID:(id)arg1 ;
-(PFUbiquityStoreSaveSnapshot *)sourceStoreSaveSnapshot;
@end

