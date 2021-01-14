/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

