/*
* Generated on Thursday, January 14, 2021 at 2:23:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/


@protocol ICCloudObject <NSObject,ICHasDatabaseScope>
@required
+(id)allCloudObjectsInContext:(id)arg1;
+(id)existingCloudObjectForRecordID:(id)arg1 accountID:(id)arg2 context:(id)arg3;
+(id)newPlaceholderObjectForRecordName:(id)arg1 accountID:(id)arg2 context:(id)arg3;
+(id)newCloudObjectForRecord:(id)arg1 accountID:(id)arg2 context:(id)arg3;
-(id)newlyCreatedRecord;
-(id)recordType;
-(void)objectWasFetchedFromCloudWithRecord:(id)arg1 accountID:(id)arg2;
-(void)fixBrokenReferences;
-(void)mergeDataFromRecord:(id)arg1 accountID:(id)arg2;
-(id)userSpecificRecordID;
-(id)className;
-(id)loggingDescription;
-(id)objectID;
-(void)didFetchUserSpecificRecord:(id)arg1 accountID:(id)arg2;
-(BOOL)isInICloudAccount;
-(id)objectsToBeDeletedBeforeThisObject;
-(id)newlyCreatedRecordWithObfuscator:(id)arg1;
-(BOOL)needsToSaveUserSpecificRecord;
-(BOOL)isValidObject;
-(void)deleteFromLocalDatabase;
-(BOOL)wantsUserSpecificRecord;
-(id)newlyCreatedUserSpecificRecord;
-(void)didSaveUserSpecificRecord:(id)arg1;
-(void)didFailToSaveUserSpecificRecord:(id)arg1 accountID:(id)arg2 error:(id)arg3;
-(void)didDeleteUserSpecificRecordID:(id)arg1;
-(void)objectWasDeletedFromCloud;
-(void)objectWasDeletedFromCloudByAnotherDevice;
-(void)objectWillBePushedToCloudWithOperation:(id)arg1;
-(void)objectWasPushedToCloudWithOperation:(id)arg1 serverRecord:(id)arg2;
-(void)objectFailedToBePushedToCloudWithOperation:(id)arg1 record:(id)arg2 error:(id)arg3;
-(void)objectWasFetchedButDoesNotExistInCloud;
-(BOOL)needsToBePushedToCloud;
-(BOOL)needsToBeDeletedFromCloud;
-(BOOL)needsToBeFetchedFromCloud;
-(id)recordID;

@end

