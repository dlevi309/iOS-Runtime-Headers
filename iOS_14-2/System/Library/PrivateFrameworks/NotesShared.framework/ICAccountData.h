/*
* Generated on Thursday, January 14, 2021 at 2:23:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)newAccountDataWithIdentifier:(id)arg1 account:(id)arg2 ;
+(id)accountDataWithIdentifier:(id)arg1 context:(id)arg2 ;
+(id)newAccountDataForAccount:(id)arg1 ;
+(id)existingCloudObjectForRecordID:(id)arg1 accountID:(id)arg2 context:(id)arg3 ;
+(id)newCloudObjectForRecord:(id)arg1 accountID:(id)arg2 context:(id)arg3 ;
-(id)newlyCreatedRecord;
-(id)recordZoneName;
-(id)recordType;
-(void)mergeDataFromRecord:(id)arg1 accountID:(id)arg2 ;
-(id)cloudAccount;
-(BOOL)isInICloudAccount;
-(BOOL)needsToBeDeletedFromCloud;
-(void)saveMergeableDataIfNeeded;
-(id)recordName;
-(BOOL)isDeletable;
-(BOOL)mergeWithMergeableData:(id)arg1 ;
@end

