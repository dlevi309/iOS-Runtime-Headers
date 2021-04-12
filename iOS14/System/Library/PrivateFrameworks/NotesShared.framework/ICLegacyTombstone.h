/*
* Generated on Thursday, January 14, 2021 at 2:23:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/

#import <NotesShared/ICCloudSyncingObject.h>

@class ICAccount, NSString, NSDate;

@interface ICLegacyTombstone : ICCloudSyncingObject

@property (nonatomic,retain) ICAccount * account; 
@property (assign,nonatomic) short type; 
@property (nonatomic,retain) NSString * contentHashAtImport; 
@property (nonatomic,retain) NSDate * modificationDateAtImport; 
+(id)legacyTombstonesMatchingPredicate:(id)arg1 context:(id)arg2 ;
+(id)tombstoneIdentifierForObjectIdentifier:(id)arg1 type:(short)arg2 ;
+(id)legacyTombstoneWithIdentifier:(id)arg1 context:(id)arg2 ;
+(id)newLegacyTombstoneWithIdentifier:(id)arg1 type:(short)arg2 account:(id)arg3 ;
+(id)addLegacyTombstoneWithObjectIdentifier:(id)arg1 type:(short)arg2 account:(id)arg3 ;
+(void)removeLegacyTombstoneWithObjectIdentifier:(id)arg1 type:(short)arg2 context:(id)arg3 ;
+(id)allLegacyTombstonesInContext:(id)arg1 ;
+(void)addLegacyTombstoneForNote:(id)arg1 ;
+(void)removeLegacyTombstoneForNote:(id)arg1 ;
+(void)addLegacyTombstoneForFolder:(id)arg1 ;
+(void)removeLegacyTombstoneForFolder:(id)arg1 ;
+(id)existingCloudObjectForRecordID:(id)arg1 accountID:(id)arg2 context:(id)arg3 ;
+(BOOL)hasTombstonePrefix:(id)arg1 ;
+(short)tombstoneTypeFromRecordName:(id)arg1 ;
+(id)newCloudObjectForRecord:(id)arg1 accountID:(id)arg2 context:(id)arg3 ;
-(id)newlyCreatedRecord;
-(id)recordZoneName;
-(id)recordType;
-(void)mergeDataFromRecord:(id)arg1 accountID:(id)arg2 ;
-(id)cloudAccount;
-(id)ic_loggingValues;
-(BOOL)isInICloudAccount;
-(BOOL)hasAllMandatoryFields;
-(void)deleteFromLocalDatabase;
-(void)objectWasDeletedFromCloud;
-(void)objectWasDeletedFromCloudByAnotherDevice;
@end

