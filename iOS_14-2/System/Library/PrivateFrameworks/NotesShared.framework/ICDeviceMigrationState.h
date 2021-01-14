/*
* Generated on Thursday, January 14, 2021 at 2:23:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/

#import <NotesShared/ICCloudSyncingObject.h>

@class ICAccount, NSString, NSDate;

@interface ICDeviceMigrationState : ICCloudSyncingObject

@property (nonatomic,retain) ICAccount * account; 
@property (nonatomic,retain) NSString * deviceIdentifier; 
@property (assign,nonatomic) short state; 
@property (nonatomic,retain) NSDate * stateModificationDate; 
+(id)existingCloudObjectForRecordID:(id)arg1 accountID:(id)arg2 context:(id)arg3 ;
+(id)deviceMigrationStatesMatchingPredicate:(id)arg1 context:(id)arg2 ;
+(id)currentDeviceMigrationStateForAccount:(id)arg1 createIfNecessary:(BOOL)arg2 ;
+(id)deviceMigrationStateWithDeviceIdentifier:(id)arg1 context:(id)arg2 ;
+(id)allDeviceMigrationStatesInContext:(id)arg1 ;
+(id)deviceMigrationStatesByAccountIDInContext:(id)arg1 ;
+(id)currentDeviceMigrationStateForAccount:(id)arg1 ;
+(id)deviceMigrationStateWithDeviceIdentifier:(id)arg1 account:(id)arg2 ;
+(id)newDeviceMigrationStateWithDeviceIdentifier:(id)arg1 account:(id)arg2 ;
+(id)stringFromMigrationState:(short)arg1 ;
+(id)identifierForDeviceIdentifier:(id)arg1 ;
+(id)newCloudObjectForRecord:(id)arg1 accountID:(id)arg2 context:(id)arg3 ;
-(id)newlyCreatedRecord;
-(id)recordZoneName;
-(id)recordType;
-(void)mergeDataFromRecord:(id)arg1 accountID:(id)arg2 ;
-(BOOL)isMigrating;
-(id)cloudAccount;
-(id)ic_loggingValues;
-(BOOL)isInICloudAccount;
-(void)deleteFromLocalDatabase;
-(void)objectWasDeletedFromCloud;
-(void)objectWasDeletedFromCloudByAnotherDevice;
-(id)recordName;
@end

