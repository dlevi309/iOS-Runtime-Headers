/*
* Generated on Thursday, January 14, 2021 at 2:28:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
*/


@class UNSKeyedDictionaryRepository, NSURL, UNSBundleLibrarian;

@interface UNSAttachmentsRepository : NSObject {

	UNSKeyedDictionaryRepository* _referencesRepository;
	NSURL* _directoryURL;
	UNSBundleLibrarian* _librarian;

}
+(id)_sha1HashOfFileAtURL:(id)arg1 ;
-(void)performMigration;
-(id)allBundleIdentifiers;
-(void)_transformAttachmentsForBundleIdentifier:(id)arg1 usingTransformBlock:(/*^block*/id)arg2 ;
-(void)deleteAllFilesForBundleIdentifier:(id)arg1 ;
-(id)moveFileIntoRepositoryFromFileURL:(id)arg1 forNotificationIdentifier:(id)arg2 bundleIdentifier:(id)arg3 ;
-(unsigned long long)_transformNotificationIdentifiersForRepositoryURL:(id)arg1 bundleIdentifier:(id)arg2 usingTransformBlock:(/*^block*/id)arg3 ;
-(BOOL)isRepositoryURL:(id)arg1 ;
-(unsigned long long)_addReferencesToRepositoryURL:(id)arg1 forNotificationIdentifier:(id)arg2 bundleIdentifier:(id)arg3 ;
-(void)_performAttachmentReferencesMigration;
-(void)ensureIntegrityUsingNotificationIdentifiersForBundleIdentifiers:(id)arg1 ;
-(void)_performAttachmentReferencesMigrationForBundleIdentifier:(id)arg1 ;
-(void)_removeRepositoryURL:(id)arg1 ;
-(void)_performAttachmentFilesMigration;
-(id)_attachmentDirectoryForBundleIdentifier:(id)arg1 ;
-(void)_removeAllReferencesForBundleIdentifier:(id)arg1 ;
-(id)referencesForBundleIdentifier:(id)arg1 ;
-(id)initWithDirectory:(id)arg1 librarian:(id)arg2 ;
-(id)_fileURLForDigestString:(id)arg1 extension:(id)arg2 bundleIdentifier:(id)arg3 ;
-(void)removeReferenceToRepositoryURL:(id)arg1 forNotificationIdentifier:(id)arg2 bundleIdentifier:(id)arg3 ;
-(id)bundleIdentifiersClaimingAttachments;
-(void)_performAttachmentRepositoryKeyMigration;
-(id)_claimedRepositoryURLsForBundleIdentifier:(id)arg1 ;
-(BOOL)isValidRepositoryURL:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(unsigned long long)_removeReferencesToRepositoryURL:(id)arg1 forNotificationIdentifier:(id)arg2 bundleIdentifier:(id)arg3 ;
@end

