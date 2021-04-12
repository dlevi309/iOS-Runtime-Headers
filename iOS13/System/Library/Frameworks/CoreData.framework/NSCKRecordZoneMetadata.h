/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (assign,nonatomic) BOOL hasChanges; 
+(id)entityPath;
+(id)zoneMetadataForZoneID:(id)arg1 inDatabaseWithScope:(long long)arg2 forStore:(id)arg3 inContext:(id)arg4 error:(id*)arg5 ;
-(id)createRecordZoneID;
-(BOOL)hasRecordZone;
-(void)setHasRecordZone:(BOOL)arg1 ;
-(BOOL)hasSubscription;
-(void)setHasSubscription:(BOOL)arg1 ;
@end

