/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/


@class NSValue, NSURL, NSString;

@interface NSFileManager : NSObject {

	id _delegate;
	NSValue* _weakDelegateValue;

}

@property (copy,readonly) NSURL * homeDirectoryForCurrentUser; 
@property (copy,readonly) NSURL * temporaryDirectory; 
@property (assign) id<NSFileManagerDelegate> delegate; 
@property (copy,readonly) NSString * currentDirectoryPath; 
@property (copy,readonly) id<NSObject><NSCopying><NSCoding> ubiquityIdentityToken; 
+(id)defaultManager;
-(BOOL)_cutIsPathOnMissingVolume:(id)arg1 ;
-(id)cutCreateUniqueDirectoryWithName:(id)arg1 atPath:(id)arg2 ofType:(id)arg3 ;
-(id)cutUniqueFilename:(id)arg1 atPath:(id)arg2 ofType:(id)arg3 ;
-(id)cutRandomTemporaryPathWithFileName:(id)arg1 ;
-(BOOL)createDirectoryAtURL:(id)arg1 withIntermediateDirectories:(BOOL)arg2 attributes:(id)arg3 error:(id*)arg4 ;
-(BOOL)_web_createFileAtPathWithIntermediateDirectories:(id)arg1 contents:(id)arg2 attributes:(id)arg3 directoryAttributes:(id)arg4 ;
-(BOOL)filesystemItemLinkOperation:(id)arg1 shouldProceedAfterError:(id)arg2 linkingItemAtPath:(id)arg3 toPath:(id)arg4 ;
-(BOOL)createDirectoryAtPath:(id)arg1 withIntermediateDirectories:(BOOL)arg2 attributes:(id)arg3 error:(id*)arg4 ;
-(id)enumeratorAtURL:(id)arg1 includingPropertiesForKeys:(id)arg2 options:(unsigned long long)arg3 errorHandler:(/*^block*/id)arg4 ;
-(BOOL)replaceItemAtURL:(id)arg1 withItemAtURL:(id)arg2 backupItemName:(id)arg3 options:(unsigned long long)arg4 resultingItemURL:(id*)arg5 error:(id*)arg6 ;
-(BOOL)filesystemItemMoveOperation:(id)arg1 shouldProceedAfterError:(id)arg2 movingItemAtPath:(id)arg3 toPath:(id)arg4 ;
-(void)synchronouslyGetFileProviderServicesForItemAtURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getFileProviderMessageInterfacesForItemAtURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)getRelationship:(long long*)arg1 ofDirectoryAtURL:(id)arg2 toItemAtURL:(id)arg3 error:(id*)arg4 ;
-(id)directoryContentsAtPath:(id)arg1 matchingExtension:(id)arg2 options:(long long)arg3 keepExtension:(BOOL)arg4 error:(id*)arg5 ;
-(id)stringWithFileSystemRepresentation:(const char*)arg1 length:(unsigned long long)arg2 ;
-(id)contentsOfDirectoryAtURL:(id)arg1 includingPropertiesForKeys:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4 ;
-(BOOL)_web_createDirectoryAtPathWithIntermediateDirectories:(id)arg1 attributes:(id)arg2 ;
-(BOOL)fileExistsAtPath:(id)arg1 isDirectory:(BOOL*)arg2 ;
-(BOOL)removeItemAtURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)_web_createIntermediateDirectoriesForPath_nowarn:(id)arg1 attributes:(id)arg2 ;
-(id)URLForDirectory:(unsigned long long)arg1 inDomain:(unsigned long long)arg2 appropriateForURL:(id)arg3 create:(BOOL)arg4 error:(id*)arg5 ;
-(id)URLForPublishingUbiquitousItemAtURL:(id)arg1 expirationDate:(id*)arg2 error:(id*)arg3 ;
-(BOOL)getRelationship:(long long*)arg1 ofDirectory:(unsigned long long)arg2 inDomain:(unsigned long long)arg3 toItemAtURL:(id)arg4 error:(id*)arg5 ;
-(id)directoryContentsAtPath:(id)arg1 matchingExtension:(id)arg2 options:(long long)arg3 keepExtension:(BOOL)arg4 ;
-(BOOL)fileExistsAtPath:(id)arg1 ;
-(NSURL *)temporaryDirectory;
-(id)containerURLForSecurityApplicationGroupIdentifier:(id)arg1 ;
-(id)_attributesOfItemAtPath:(id)arg1 filterResourceFork:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)createSymbolicLinkAtURL:(id)arg1 withDestinationURL:(id)arg2 error:(id*)arg3 ;
-(BOOL)createSymbolicLinkAtPath:(id)arg1 withDestinationPath:(id)arg2 error:(id*)arg3 ;
-(id)URLsForDirectory:(unsigned long long)arg1 inDomains:(unsigned long long)arg2 ;
-(void)getFileProviderServicesForItemAtURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)mountedVolumeURLsIncludingResourceValuesForKeys:(id)arg1 options:(unsigned long long)arg2 ;
-(BOOL)filesystemItemCopyOperation:(id)arg1 shouldCopyItemAtPath:(id)arg2 toPath:(id)arg3 ;
-(BOOL)filesystemItemMoveOperation:(id)arg1 shouldMoveItemAtPath:(id)arg2 toPath:(id)arg3 ;
-(BOOL)_web_fileExistsAtPath_nowarn:(id)arg1 isDirectory:(BOOL*)arg2 traverseLink:(BOOL)arg3 ;
-(BOOL)filesystemItemLinkOperation:(id)arg1 shouldLinkItemAtPath:(id)arg2 toPath:(id)arg3 ;
-(id)_attributesOfItemAtURL:(id)arg1 filterResourceFork:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)setExtendedAttribute:(id)arg1 forKey:(id)arg2 atPath:(id)arg3 error:(id*)arg4 ;
-(void)_registerForUbiquityAccountChangeNotifications;
-(BOOL)setAttributes:(id)arg1 ofItemAtPath:(id)arg2 error:(id*)arg3 ;
-(id<NSFileManagerDelegate>)delegate;
-(BOOL)getFileSystemRepresentation:(char*)arg1 maxLength:(unsigned long long)arg2 withPath:(id)arg3 ;
-(BOOL)startDownloadingUbiquitousItemAtURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)setUbiquitous:(BOOL)arg1 itemAtURL:(id)arg2 destinationURL:(id)arg3 error:(id*)arg4 ;
-(BOOL)removeExtendedAttributeForKey:(id)arg1 atPath:(id)arg2 error:(id*)arg3 ;
-(id)attributesOfItemAtPath:(id)arg1 error:(id*)arg2 ;
-(BOOL)_web_changeFinderAttributes:(id)arg1 forFileAtPath:(id)arg2 ;
-(BOOL)_web_createFileAtPath:(id)arg1 contents:(id)arg2 attributes:(id)arg3 ;
-(BOOL)linkItemAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
-(BOOL)moveItemAtPath:(id)arg1 toPath:(id)arg2 error:(id*)arg3 ;
-(BOOL)_web_changeFileAttributes_nowarn:(id)arg1 atPath:(id)arg2 ;
-(BOOL)copyItemAtURL:(id)arg1 toURL:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4 ;
-(BOOL)_processHasUbiquityContainerEntitlement;
-(void)_postUbiquityAccountChangeNotification:(id)arg1 ;
-(BOOL)moveItemAtURL:(id)arg1 toURL:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4 ;
-(id)fileAttributesAtPath:(id)arg1 traverseLink:(BOOL)arg2 ;
-(id)URLForUbiquityContainerIdentifier:(id)arg1 ;
-(void)_web_noteFileChangedAtPath_nowarn:(id)arg1 ;
-(id)destinationOfSymbolicLinkAtPath:(id)arg1 error:(id*)arg2 ;
-(id)_URLForTrashingItemAtURL:(id)arg1 create:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)removeItemAtPath:(id)arg1 error:(id*)arg2 ;
-(id)contentsOfDirectoryAtPath:(id)arg1 error:(id*)arg2 ;
-(id)_URLForReplacingItemAtURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)filesystemItemCopyOperation:(id)arg1 shouldProceedAfterError:(id)arg2 copyingItemAtPath:(id)arg3 toPath:(id)arg4 ;
-(void)_web_backgroundRemoveLeftoverFiles:(id)arg1 ;
-(id)_web_visibleItemsInDirectoryAtPath:(id)arg1 ;
-(id)pathContentOfSymbolicLinkAtPath:(id)arg1 ;
-(id)_web_pathWithUniqueFilenameForPath:(id)arg1 ;
-(id)subpathsOfDirectoryAtPath:(id)arg1 error:(id*)arg2 ;
-(void)_web_backgroundRemoveFileAtPath:(id)arg1 ;
-(id)attributesOfFileSystemForPath:(id)arg1 error:(id*)arg2 ;
-(BOOL)_processCanAccessUbiquityIdentityToken;
-(BOOL)copyItemAtPath:(id)arg1 toPath:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4 ;
-(BOOL)trashItemAtURL:(id)arg1 resultingItemURL:(id*)arg2 error:(id*)arg3 ;
-(BOOL)copyItemAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
-(BOOL)createSymbolicLinkAtPath:(id)arg1 pathContent:(id)arg2 ;
-(const char*)fileSystemRepresentationWithPath:(id)arg1 ;
-(BOOL)createFileAtPath:(id)arg1 contents:(id)arg2 attributes:(id)arg3 ;
-(id)extendedAttributeForKey:(id)arg1 atPath:(id)arg2 error:(id*)arg3 ;
-(BOOL)createDirectoryAtPath:(id)arg1 attributes:(id)arg2 ;
-(id)extendedAttributesAtPath:(id)arg1 error:(id*)arg2 ;
-(BOOL)evictUbiquitousItemAtURL:(id)arg1 error:(id*)arg2 ;
-(id)_safeDelegate;
-(id)_web_carbonPathForPath_nowarn:(id)arg1 ;
-(BOOL)changeFileAttributes:(id)arg1 atPath:(id)arg2 ;
-(BOOL)contentsEqualAtPath:(id)arg1 andPath:(id)arg2 ;
-(BOOL)linkItemAtPath:(id)arg1 toPath:(id)arg2 error:(id*)arg3 ;
-(BOOL)directoryCanBeCreatedAtPath:(id)arg1 ;
-(id)_web_startupVolumeName_nowarn;
-(BOOL)copyItemAtPath:(id)arg1 toPath:(id)arg2 error:(id*)arg3 ;
-(BOOL)_processUsesCloudServices;
-(BOOL)removeFileAtPath:(id)arg1 handler:(id)arg2 ;
-(void)_performRemoveFileAtPath:(id)arg1 ;
-(id)subpathsAtPath:(id)arg1 ;
-(NSString *)currentDirectoryPath;
-(id)enumeratorAtPath:(id)arg1 ;
-(id)_displayPathForPath:(id)arg1 ;
-(id)contentsAtPath:(id)arg1 ;
-(id)componentsToDisplayForPath:(id)arg1 ;
-(id)directoryContentsAtPath:(id)arg1 ;
-(void)setDelegate:(id<NSFileManagerDelegate>)arg1 ;
-(BOOL)changeCurrentDirectoryPath:(id)arg1 ;
-(id)fileSystemAttributesAtPath:(id)arg1 ;
-(BOOL)moveItemAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
-(BOOL)_web_removeFileOnlyAtPath:(id)arg1 ;
-(BOOL)isWritableFileAtPath:(id)arg1 ;
-(BOOL)isReadableFileAtPath:(id)arg1 ;
-(id<NSObject><NSCopying><NSCoding>)ubiquityIdentityToken;
-(BOOL)isDeletableFileAtPath:(id)arg1 ;
-(BOOL)isUbiquitousItemAtURL:(id)arg1 ;
-(id)displayNameAtPath:(id)arg1 ;
-(BOOL)isExecutableFileAtPath:(id)arg1 ;
-(void)dealloc;
@end

