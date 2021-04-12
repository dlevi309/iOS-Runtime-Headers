/*
* Generated on Monday, March 1, 2021 at 2:33:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/


@protocol ICCloudObject <NSObject,ICHasDatabaseScope>
@required
+(id)existingCloudObjectForRecordID:(id)arg1 accountID:(id)arg2 context:(id)arg3;
+(id)newCloudObjectForRecord:(id)arg1 accountID:(id)arg2 context:(id)arg3;
+(id)newPlaceholderObjectForRecordName:(id)arg1 accountID:(id)arg2 context:(id)arg3;
+(id)allCloudObjectsInContext:(id)arg1;
-(id)objectID;
-(id)className;
-(id)recordType;
-(id)recordID;
-(id)loggingDescription;
-(void)deleteFromLocalDatabase;
-(BOOL)needsToBePushedToCloud;
-(BOOL)needsToBeDeletedFromCloud;
-(BOOL)needsToBeFetchedFromCloud;
-(id)newlyCreatedRecord;
-(void)objectWasFetchedFromCloudWithRecord:(id)arg1 accountID:(id)arg2;
-(void)fixBrokenReferences;
-(void)mergeDataFromRecord:(id)arg1 accountID:(id)arg2;
-(id)userSpecificRecordID;
-(void)didFetchUserSpecificRecord:(id)arg1 accountID:(id)arg2;
-(BOOL)isInICloudAccount;
-(id)objectsToBeDeletedBeforeThisObject;
-(id)newlyCreatedRecordWithObfuscator:(id)arg1;
-(BOOL)needsToSaveUserSpecificRecord;
-(BOOL)wantsUserSpecificRecord;
-(id)newlyCreatedUserSpecificRecord;
-(void)didSaveUserSpecificRecord:(id)arg1;
-(void)didFailToSaveUserSpecificRecord:(id)arg1 accountID:(id)arg2 error:(id)arg3;
-(void)didDeleteUserSpecificRecordID:(id)arg1;
-(BOOL)isValidObject;
-(void)objectWasDeletedFromCloud;
-(void)objectWasDeletedFromCloudByAnotherDevice;
-(void)objectWillBePushedToCloudWithOperation:(id)arg1;
-(void)objectWasPushedToCloudWithOperation:(id)arg1 serverRecord:(id)arg2;
-(void)objectFailedToBePushedToCloudWithOperation:(id)arg1 record:(id)arg2 error:(id)arg3;
-(void)objectWasFetchedButDoesNotExistInCloud;

@end

