/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/

#import <NotesShared/ICCloudSyncingObject.h>
#import <libobjc.A.dylib/ICCloudObject.h>

@class ICAccount, NSString, NSSet, ICAttachment, NSData;

@interface ICMedia : ICCloudSyncingObject <ICCloudObject> {

	ICAccount* placeholderAccount;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) ICAccount * placeholderAccount; 
@property (nonatomic,readonly) NSSet * urlsToConsiderForCloudBackup; 
@property (nonatomic,retain) ICAttachment * attachment; 
@property (nonatomic,retain) NSString * filename; 
@property (nonatomic,retain) NSData * assetCryptoInitializationVector; 
@property (nonatomic,retain) NSData * assetCryptoTag; 
+(id)mediaIdentifiersForAccount:(id)arg1 ;
+(void)purgeMediaFilesForIdentifiers:(id)arg1 account:(id)arg2 ;
+(id)keyPathsForValuesAffectingIsSharedViaICloud;
+(id)existingCloudObjectForRecordID:(id)arg1 accountID:(id)arg2 context:(id)arg3 ;
+(id)newCloudObjectForRecord:(id)arg1 accountID:(id)arg2 context:(id)arg3 ;
+(id)newMediaWithAttachment:(id)arg1 forData:(id)arg2 filename:(id)arg3 context:(id)arg4 error:(id*)arg5 ;
+(id)mediaDirectoryURL;
+(id)allMediaInContext:(id)arg1 ;
+(id)mediaWithIdentifier:(id)arg1 context:(id)arg2 ;
+(id)newMediaWithIdentifier:(id)arg1 account:(id)arg2 ;
+(void)purgeMedia:(id)arg1 ;
+(id)newMediaWithAttachment:(id)arg1 context:(id)arg2 ;
+(id)containerDirectoryURLForMediaWithIdentifier:(id)arg1 account:(id)arg2 ;
+(id)exportableContainerDirectoryURLForMediaWithIdentifier:(id)arg1 account:(id)arg2 ;
+(id)mediaURLForMediaWithIdentifier:(id)arg1 filename:(id)arg2 account:(id)arg3 ;
+(id)exportableMediaURLForMediaWithIdentifier:(id)arg1 filename:(id)arg2 account:(id)arg3 ;
+(id)keyPathsForValuesAffectingParentCloudObject;
+(void)purgeAllMediaFiles;
+(id)newMediaWithIdentifier:(id)arg1 attachment:(id)arg2 ;
+(id)newMediaWithAttachment:(id)arg1 forFileWrapper:(id)arg2 context:(id)arg3 error:(id*)arg4 ;
+(id)newMediaWithAttachment:(id)arg1 forURL:(id)arg2 context:(id)arg3 error:(id*)arg4 ;
+(void)deleteMedia:(id)arg1 ;
+(void)undeleteMedia:(id)arg1 ;
+(void)purgeAllMediaInContext:(id)arg1 ;
-(BOOL)isValid;
-(id)data;
-(BOOL)writeData:(id)arg1 error:(id*)arg2 ;
-(NSString *)filename;
-(void)setFilename:(NSString *)arg1 ;
-(id)recordType;
-(void)setAttachment:(ICAttachment *)arg1 ;
-(void)prepareForDeletion;
-(id)mediaURL;
-(BOOL)hasFile;
-(id)containerDirectoryURL;
-(id)recordZoneName;
-(id)ic_loggingValues;
-(void)deleteFromLocalDatabase;
-(id)decryptedData;
-(void)saveAndClearDecryptedData;
-(void)accountWillChangeToAccount:(id)arg1 ;
-(BOOL)shouldSyncMinimumSupportedNotesVersion;
-(id)parentEncryptableObject;
-(id)parentCloudObject;
-(id)containerAccount;
-(void)setPlaceholderAccount:(ICAccount *)arg1 ;
-(void)updateFlagToExcludeFromCloudBackup;
-(ICAccount *)placeholderAccount;
-(BOOL)needsToBePushedToCloud;
-(id)dataWithoutImageMarkupMetadata:(BOOL)arg1 ;
-(BOOL)supportsDeletionByTTL;
-(id)newlyCreatedRecord;
-(void)fixBrokenReferences;
-(void)mergeDataFromRecord:(id)arg1 accountID:(id)arg2 ;
-(id)parentCloudObjectForMinimumSupportedVersionPropagation;
-(BOOL)isInICloudAccount;
-(id)objectsToBeDeletedBeforeThisObject;
-(BOOL)hasAllMandatoryFields;
-(id)newlyCreatedRecordWithObfuscator:(id)arg1 ;
-(void)objectWasPushedToCloudWithOperation:(id)arg1 serverRecord:(id)arg2 ;
-(BOOL)shouldFallBackToCheckAllCryptoKeys;
-(void)resetUniqueIdentifier;
-(id)encryptedMediaURL;
-(id)exportableMediaURLWithUpdatedFileIfNecessary;
-(BOOL)writeDataFromAsset:(id)arg1 accountID:(id)arg2 isArchivedDirectory:(BOOL)arg3 error:(id*)arg4 ;
-(id)mediaArchiveURL;
-(id)mediaTarArchiveURL;
-(BOOL)makeSureMediaDirectoryExists:(id*)arg1 ;
-(id)exportableContainerDirectoryURL;
-(NSSet *)urlsToConsiderForCloudBackup;
-(BOOL)writeDataWithBlock:(/*^block*/id)arg1 error:(id*)arg2 ;
-(BOOL)writeDataFromFileURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)isArchivedDirectory;
-(void)deleteExportableMedia;
-(id)exportableMediaURL;
-(BOOL)makeSureExportableMediaDirectoryExists:(id*)arg1 ;
-(void)writeDataFromItemProvider:(id)arg1 checkForMarkupData:(BOOL)arg2 completionBlock:(/*^block*/id)arg3 ;
-(BOOL)writeDataFromFileWrapper:(id)arg1 error:(id*)arg2 ;
@end

