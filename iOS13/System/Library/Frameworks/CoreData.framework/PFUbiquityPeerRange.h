/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/NSManagedObject.h>

@class NSNumber, NSString, PFUbiquityPeer, PFUbiquityStoreMetadata;

@interface PFUbiquityPeerRange : NSManagedObject

@property (nonatomic,retain) NSNumber * peerStart; 
@property (nonatomic,retain) NSNumber * end; 
@property (nonatomic,retain) NSNumber * peerEnd; 
@property (nonatomic,retain) NSString * peerEntityName; 
@property (nonatomic,retain) NSNumber * start; 
@property (nonatomic,retain) PFUbiquityPeer * peer; 
@property (nonatomic,retain) PFUbiquityStoreMetadata * storeMetadata; 
-(void)loadFromBaselineDictionary:(id)arg1 ;
@end

