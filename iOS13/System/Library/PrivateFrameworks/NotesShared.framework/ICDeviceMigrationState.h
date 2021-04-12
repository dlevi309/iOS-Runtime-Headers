/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)newCloudObjectForRecord:(id)arg1 accountID:(id)arg2 context:(id)arg3 ;
+(id)deviceMigrationStateWithDeviceIdentifier:(id)arg1 context:(id)arg2 ;
+(id)newDeviceMigrationStateWithDeviceIdentifier:(id)arg1 account:(id)arg2 ;
+(id)stringFromMigrationState:(short)arg1 ;
+(id)identifierForDeviceIdentifier:(id)arg1 ;
+(id)deviceMigrationStatesMatchingPredicate:(id)arg1 context:(id)arg2 ;
+(id)currentDeviceMigrationStateCreateIfNecessary:(BOOL)arg1 ;
+(id)currentDeviceMigrationStateCreateIfNecessary:(BOOL)arg1 context:(id)arg2 ;
+(id)allDeviceMigrationStatesInContext:(id)arg1 ;
+(id)currentDeviceMigrationState;
+(id)allKnownDeviceMigrationStates;
-(id)recordType;
-(id)recordName;
-(BOOL)isMigrating;
-(id)recordZoneName;
-(id)ic_loggingValues;
-(id)cloudAccount;
-(void)deleteFromLocalDatabase;
-(id)newlyCreatedRecord;
-(void)mergeDataFromRecord:(id)arg1 accountID:(id)arg2 ;
-(BOOL)isInICloudAccount;
-(void)objectWasDeletedFromCloud;
-(void)objectWasDeletedFromCloudByAnotherDevice;
@end

