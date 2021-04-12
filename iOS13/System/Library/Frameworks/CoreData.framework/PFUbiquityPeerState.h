/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSNumber, PFUbiquityPeer, PFUbiquityStoreMetadata;

@interface PFUbiquityPeerState : NSManagedObject

@property (nonatomic,retain) NSString * lastProcessedTransactionLogURL; 
@property (nonatomic,retain) NSString * storeName; 
@property (nonatomic,retain) NSNumber * transactionNumber; 
@property (nonatomic,retain) PFUbiquityPeer * peer; 
@property (nonatomic,retain) PFUbiquityStoreMetadata * storeMetadata; 
+(id)peerStateForStoreName:(id)arg1 andPeerID:(id)arg2 inManagedObjectContext:(id)arg3 createIfMissing:(BOOL)arg4 ;
+(id)peerStatesMatchingStoreName:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)peerStateForStoreName:(id)arg1 andPeerID:(id)arg2 inManagedObjectContext:(id)arg3 ;
+(id)peerStatesMatchingStoreName:(id)arg1 inManagedObjectContext:(id)arg2 omittingLocalPeerID:(id)arg3 ;
-(id)initWithStoreName:(id)arg1 insertIntoManagedObjectContext:(id)arg2 ;
@end

