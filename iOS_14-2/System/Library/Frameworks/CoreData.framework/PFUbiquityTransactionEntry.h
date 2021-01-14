/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/NSManagedObject.h>

@class NSURL, NSNumber, NSString, NSDate, PFUbiquityPeer, PFUbiquityStoreMetadata;

@interface PFUbiquityTransactionEntry : NSManagedObject

@property (assign) int transactionType; 
@property (readonly) NSURL * transactionLogURL; 
@property (nonatomic,retain) NSNumber * transactionTypeNum; 
@property (nonatomic,retain) NSString * localIDStr; 
@property (nonatomic,retain) NSNumber * transactionNumber; 
@property (nonatomic,retain) NSString * globalIDStr; 
@property (nonatomic,retain) NSDate * transactionDate; 
@property (nonatomic,retain) NSString * transactionLogFilename; 
@property (nonatomic,retain) NSString * knowledgeVectorString; 
@property (nonatomic,retain) PFUbiquityPeer * actingPeer; 
@property (nonatomic,retain) PFUbiquityStoreMetadata * storeMetadata; 
+(id)newTransactionEntryForObjectWithCompressedGlobalID:(id)arg1 withTransactionType:(int)arg2 importContext:(id)arg3 ;
+(id)createTransactionEntriesForCompressedObjectIDs:(id)arg1 withTransactionType:(int)arg2 withImportContext:(id)arg3 ;
+(id)transactionEntriesMatchingGlobalObjectID:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)transactionEntriesMatchingLocalObjectID:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)transactionEntriesAfterPeerState:(id)arg1 forStoreName:(id)arg2 inManagedObjectContext:(id)arg3 ;
+(id)deleteTransactionEntriesAfterPeerState:(id)arg1 forStoreName:(id)arg2 inManagedObjectContext:(id)arg3 ;
+(id)transactionEntriesForPeerID:(id)arg1 withTransactionNumber:(id)arg2 inManagedObjectContext:(id)arg3 ;
+(id)transactionEntriesForPeerID:(id)arg1 beforeTransacationNumber:(id)arg2 forStoreNamed:(id)arg3 inManagedObjectContext:(id)arg4 ;
+(id)transactionEntryForGlobalIDString:(id)arg1 withActingPeerID:(id)arg2 atTransactionNumber:(id)arg3 inManagedObjectContext:(id)arg4 ;
-(void)setTransactionType:(int)arg1 ;
-(id)initAndInsertIntoManagedObjectContext:(id)arg1 ;
-(NSURL *)transactionLogURL;
-(int)transactionType;
@end

