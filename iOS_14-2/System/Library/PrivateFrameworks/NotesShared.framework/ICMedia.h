/*
* Generated on Thursday, January 14, 2021 at 2:24:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,readonly) ICAccount * containerAccount; 
@property (nonatomic,retain) ICAttachment * attachment; 
@property (nonatomic,retain) NSString * filename; 
@property (nonatomic,retain) NSData * assetCryptoInitializationVector; 
@property (nonatomic,retain) NSData * assetCryptoTag; 
@property (nonatomic,readonly) NSString * cacheKey; 
+(id)newMediaWithAttachment:(id)arg1 forData:(id)arg2 filename:(id)arg3 context:(id)arg4 error:(id*)arg5 ;
+(id)newMediaWithAttachment:(id)arg1 context:(id)arg2 ;
+(id)containerDirectoryURLForMediaWithIdentifier:(id)arg1 account:(id)arg2 ;
+(id)exportableContainerDirectoryURLForMediaWithIdentifier:(id)arg1 account:(id)arg2 ;
+(id)mediaURLForMediaWithIdentifier:(id)arg1 filename:(id)arg2 account:(id)arg3 ;
+(id)exportableMediaURLForMediaWithIdentifier:(id)arg1 filename:(id)arg2 account:(id)arg3 ;
+(id)keyPathsForValuesAffectingParentCloudObject;
+(void)purgeAllMediaFiles;
+(id)newMediaWithIdentifier:(id)arg1 attachment:(id)arg2 ;
+(void)deleteMedia:(id)arg1 ;
+(void)undeleteMedia:(id)arg1 ;
+(id)newMediaWithAttachment:(id)arg1 forFileWrapper:(id)arg2 context:(id)arg3 error:(id*)arg4 ;
+(id)newMediaWithAttachment:(id)arg1 forURL:(id)arg2 context:(id)arg3 error:(id*)arg4 ;
+(void)purgeAllMediaInContext:(id)arg1 ;
+(id)mediaDirectoryURL;
+(id)keyPathsForValuesAffectingIsSharedViaICloud;
+(id)existingCloudObjectForRecordID:(id)arg1 accountID:(id)arg2 context:(id)arg3 ;
+(id)allMediaInContext:(id)arg1 ;
+(id)mediaIdentifiersForAccount:(id)arg1 ;
+(void)purgeMediaFilesForIdentifiers:(id)arg1 account:(id)arg2 ;
+(id)mediaWithIdentifier:(id)arg1 context:(id)arg2 ;
+(id)newMediaWithIdentifier:(id)arg1 account:(id)arg2 ;
+(void)purgeMedia:(id)arg1 ;
+(id)newCloudObjectForRecord:(id)arg1 accountID:(id)arg2 context:(id)arg3 ;
-(NSString *)cacheKey;
-(void)prepareForDeletion;
-(BOOL)hasFile;
-(id)newlyCreatedRecord;
-(NSString *)filename;
-(id)mediaURL;
-(id)recordZoneName;
-(id)recordType;
-(id)decryptedData;
-(void)fixBrokenReferences;
-(void)mergeDataFromRecord:(id)arg1 accountID:(id)arg2 ;
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
-(void)saveAndClearDecryptedData;
-(void)accountWillChangeToAccount:(id)arg1 ;
-(id)containerDirectoryURL;
-(id)ic_loggingValues;
-(BOOL)shouldSyncMinimumSupportedNotesVersion;
-(ICAccount *)containerAccount;
-(void)setPlaceholderAccount:(ICAccount *)arg1 ;
-(id)parentEncryptableObject;
-(BOOL)isValid;
-(void)updateFlagToExcludeFromCloudBackup;
-(ICAccount *)placeholderAccount;
-(void)setFilename:(NSString *)arg1 ;
-(id)data;
-(id)parentCloudObjectForMinimumSupportedVersionPropagation;
-(BOOL)isInICloudAccount;
-(id)objectsToBeDeletedBeforeThisObject;
-(BOOL)hasAllMandatoryFields;
-(id)newlyCreatedRecordWithObfuscator:(id)arg1 ;
-(void)deleteFromLocalDatabase;
-(void)objectWasPushedToCloudWithOperation:(id)arg1 serverRecord:(id)arg2 ;
-(BOOL)shouldFallBackToCheckAllCryptoKeys;
-(void)resetUniqueIdentifier;
-(BOOL)writeData:(id)arg1 error:(id*)arg2 ;
-(BOOL)needsToBePushedToCloud;
-(id)parentCloudObject;
-(void)setAttachment:(ICAttachment *)arg1 ;
-(BOOL)writeDataFromAsset:(id)arg1 accountID:(id)arg2 isArchivedDirectory:(BOOL)arg3 error:(id*)arg4 ;
-(id)mediaArchiveURL;
-(id)mediaTarArchiveURL;
-(BOOL)makeSureMediaDirectoryExists:(id*)arg1 ;
-(id)dataWithoutImageMarkupMetadata:(BOOL)arg1 ;
-(BOOL)supportsDeletionByTTL;
-(id)encryptedMediaURL;
-(id)exportableMediaURLWithUpdatedFileIfNecessary;
@end

