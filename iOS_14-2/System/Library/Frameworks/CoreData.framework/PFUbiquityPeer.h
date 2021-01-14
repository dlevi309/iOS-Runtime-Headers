/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSSet;

@interface PFUbiquityPeer : NSManagedObject

@property (nonatomic,retain) NSString * peerKey; 
@property (nonatomic,retain) NSString * peerCode; 
@property (nonatomic,retain) NSSet * remoteStates; 
@property (nonatomic,retain) NSSet * primaryKeyRanges; 
@property (nonatomic,retain) NSSet * transactionEntries; 
@property (nonatomic,retain) NSSet * localPeerStates; 
+(id)allPeersInManagedObjectContext:(id)arg1 ;
+(id)peerForPeerID:(id)arg1 inManagedObjectContext:(id)arg2 createIfMissing:(BOOL)arg3 ;
@end

