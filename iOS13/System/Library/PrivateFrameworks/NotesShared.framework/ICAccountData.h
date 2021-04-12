/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/

#import <NotesShared/ICCloudSyncingObject.h>
#import <libobjc.A.dylib/ICCloudObject.h>

@class NSString, ICAccount, NSData;

@interface ICAccountData : ICCloudSyncingObject <ICCloudObject>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) ICAccount * account; 
@property (nonatomic,retain) NSData * mergeableData; 
+(id)existingCloudObjectForRecordID:(id)arg1 accountID:(id)arg2 context:(id)arg3 ;
+(id)newCloudObjectForRecord:(id)arg1 accountID:(id)arg2 context:(id)arg3 ;
+(id)newAccountDataForAccount:(id)arg1 ;
+(id)newAccountDataWithIdentifier:(id)arg1 account:(id)arg2 ;
+(id)accountDataWithIdentifier:(id)arg1 context:(id)arg2 ;
-(BOOL)isDeletable;
-(id)recordType;
-(id)recordName;
-(id)recordZoneName;
-(id)cloudAccount;
-(void)saveMergeableDataIfNeeded;
-(BOOL)mergeWithMergeableData:(id)arg1 ;
-(BOOL)needsToBeDeletedFromCloud;
-(id)newlyCreatedRecord;
-(void)mergeDataFromRecord:(id)arg1 accountID:(id)arg2 ;
-(BOOL)isInICloudAccount;
@end

