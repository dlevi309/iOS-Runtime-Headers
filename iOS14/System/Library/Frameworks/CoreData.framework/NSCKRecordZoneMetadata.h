/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/NSManagedObject.h>

@class NSNumber, NSString, CKServerChangeToken, NSCKDatabaseMetadata, NSDate, NSSet;

@interface NSCKRecordZoneMetadata : NSManagedObject

@property (nonatomic,retain) NSNumber * hasRecordZoneNum; 
@property (nonatomic,retain) NSNumber * hasSubscriptionNum; 
@property (nonatomic,retain) NSString * ckRecordZoneName; 
@property (nonatomic,retain) NSString * ckOwnerName; 
@property (nonatomic,retain) CKServerChangeToken * currentChangeToken; 
@property (nonatomic,retain) NSCKDatabaseMetadata * database; 
@property (nonatomic,retain) NSDate * lastFetchDate; 
@property (assign,nonatomic) BOOL hasRecordZone; 
@property (assign,nonatomic) BOOL hasSubscription; 
@property (nonatomic,retain) NSSet * records; 
@property (nonatomic,retain) NSSet * mirroredRelationships; 
@property (nonatomic,retain) NSSet * queries; 
@property (assign,nonatomic) BOOL supportsFetchChanges; 
@property (assign,nonatomic) BOOL supportsAtomicChanges; 
@property (assign,nonatomic) BOOL supportsRecordSharing; 
@property (assign,nonatomic) BOOL needsImport; 
@property (assign,nonatomic) BOOL needsRecoveryFromZoneDelete; 
@property (assign,nonatomic) BOOL needsRecoveryFromUserPurge; 
+(id)zoneMetadataForZoneID:(id)arg1 inDatabaseWithScope:(long long)arg2 forStore:(id)arg3 inContext:(id)arg4 error:(id*)arg5 ;
+(id)entityPath;
-(void)setHasRecordZone:(BOOL)arg1 ;
-(BOOL)hasRecordZone;
-(void)setHasSubscription:(BOOL)arg1 ;
-(BOOL)hasSubscription;
@end

