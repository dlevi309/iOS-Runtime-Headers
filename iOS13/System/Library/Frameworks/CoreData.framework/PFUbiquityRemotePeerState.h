/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/NSManagedObject.h>

@class NSNumber, NSString, PFUbiquityPeer;

@interface PFUbiquityRemotePeerState : NSManagedObject

@property (nonatomic,retain) NSNumber * transactionNumber; 
@property (nonatomic,retain) NSString * peerID; 
@property (nonatomic,retain) NSString * storeName; 
@property (nonatomic,retain) PFUbiquityPeer * peer; 
+(id)remotePeerStatesMatchingStoreName:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)remotePeerStatesMatchingStoreName:(id)arg1 andPeerID:(id)arg2 inManagedObjectContext:(id)arg3 ;
-(id)initWithStoreName:(id)arg1 andRemotePeerID:(id)arg2 insertIntoManagedObjectContext:(id)arg3 ;
@end

