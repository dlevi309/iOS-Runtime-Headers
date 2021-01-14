/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/


@class NSURL, NSString, NSDate, NSPersonNameComponents;

@interface NSFileVersion : NSObject {

	NSURL* _fileURL;
	id _addition;
	id _deadVersionIdentifier;
	id _nonLocalVersion;
	NSURL* _contentsURL;
	BOOL _isBackup;
	NSString* _localizedName;
	NSString* _localizedComputerName;
	NSDate* _modificationDate;
	BOOL _isResolved;
	BOOL _contentsURLIsAccessed;
	id _reserved;
	NSString* _name;
	BOOL _discardable;

}

@property (readonly) unsigned long long size; 
@property (getter=isUbiquitous,readonly) BOOL ubiquitous; 
@property (copy,readonly) NSString * originatorName; 
@property (copy,readonly) NSString * originalPOSIXName; 
@property (copy,readonly) NSString * etag; 
@property (getter=_isBackup,readonly) BOOL _isBackup; 
@property (copy,readonly) NSURL * URL; 
@property (copy,readonly) NSString * localizedName; 
@property (copy,readonly) NSString * localizedNameOfSavingComputer; 
@property (copy,readonly) NSPersonNameComponents * originatorNameComponents; 
@property (copy,readonly) NSDate * modificationDate; 
@property (retain,readonly) id<NSCoding> persistentIdentifier; 
@property (getter=isConflict,readonly) BOOL conflict; 
@property (getter=isResolved) BOOL resolved; 
@property (getter=isDiscardable) BOOL discardable;                                        //@synthesize discardable=_discardable - In the implementation block
@property (readonly) BOOL hasLocalContents; 
@property (readonly) BOOL hasThumbnail; 
+(BOOL)_permanentVersionStorageSupportedForURL:(id)arg1 temporaryStorageIdentifier:(id*)arg2 error:(id*)arg3 ;
+(id)_versionOfItemAtURL:(id)arg1 forClientID:(id)arg2 name:(id)arg3 temporaryStorageIdentifier:(id)arg4 evenIfDeleted:(BOOL)arg5 ;
+(id)_addVersionOfItemAtURL:(id)arg1 withContentsOfURL:(id)arg2 options:(unsigned long long)arg3 userInfo:(id)arg4 temporaryStorageIdentifier:(id*)arg5 error:(id*)arg6 ;
+(id)_makePermanentStorageLibraryForURL:(id)arg1 temporaryStorageRequired:(BOOL*)arg2 error:(id*)arg3 ;
+(id)_addVersionOfItemAtURL:(id)arg1 withContentsOfURL:(id)arg2 options:(unsigned long long)arg3 temporaryStorageIdentifier:(id*)arg4 error:(id*)arg5 ;
+(id)_versionOfItemAtURL:(id)arg1 forPersistentIdentifier:(id)arg2 temporaryStorageIdentifier:(id)arg3 ;
+(id)_otherVersionsOfItemAtURL:(id)arg1 temporaryStorageIdentifier:(id)arg2 withoutOptions:(unsigned long long)arg3 ;
+(BOOL)_removeOtherVersionsOfItemAtURL:(id)arg1 temporaryStorageIdentifier:(id)arg2 error:(id*)arg3 ;
+(id)_otherNonpurgeableVersionsOfItemAtURL:(id)arg1 temporaryStorageIdentifier:(id)arg2 ;
+(id)_temporaryDirectoryURLForNewVersionOfItemAtURL:(id)arg1 temporaryStorageIdentifier:(id)arg2 ;
+(void)getNonlocalVersionsOfItemAtURL:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
+(void)getNonlocalVersionsOfItemAtURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)discoverUbiquitousVersionsOfItemAtURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)addVersionOfItemAtURL:(id)arg1 withContentsOfURL:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4 ;
+(void*)_addConflictObserverForItemAtURL:(id)arg1 statusChangedHandler:(/*^block*/id)arg2 ;
+(id)_otherVersionsOfItemAtURL:(id)arg1 temporaryStorageIdentifier:(id)arg2 ;
+(id)_existingLibraryForURL:(id)arg1 temporaryStorageIdentifier:(id)arg2 ;
+(id)temporaryDirectoryURLForNewVersionOfItemAtURL:(id)arg1 ;
+(id)versionOfItemAtURL:(id)arg1 forPersistentIdentifier:(id)arg2 ;
+(id)_libraryForURL:(id)arg1 temporaryStorageIdentifier:(id*)arg2 ;
+(id)_autosaveDirectoryURLCreateIfNecessary:(BOOL)arg1 ;
+(BOOL)_isTemporaryStorageRequiredForGSError:(id)arg1 andURL:(id)arg2 ;
+(id)_temporaryStorageLocationForIdentifier:(id)arg1 ;
+(id)unresolvedConflictVersionsOfItemAtURL:(id)arg1 ;
+(id)_supportedGenerationalStorageClientIDs;
+(BOOL)removeOtherVersionsOfItemAtURL:(id)arg1 error:(id*)arg2 ;
+(BOOL)unresolvedConflictsExistForItemAtURL:(id)arg1 ;
+(void)_markConflicts:(id)arg1 asHandledForItemAtURL:(id)arg2 ;
+(void)_removeTemporaryDirectoryAtURL:(id)arg1 ;
+(id)_makeTemporaryStorageIdentifier;
+(BOOL)_conflictsExistForItemAtURL:(id)arg1 ;
+(void)_removeConflictObserver:(void*)arg1 ;
+(id)otherVersionsOfItemAtURL:(id)arg1 ;
+(id)currentVersionOfItemAtURL:(id)arg1 ;
+(id)versionsOfItemAtURL:(id)arg1 ;
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
-(NSDate *)modificationDate;
-(NSString *)localizedName;
-(BOOL)isResolved;
-(id)_initWithFileURL:(id)arg1 library:(id)arg2 clientID:(id)arg3 name:(id)arg4 contentsURL:(id)arg5 isBackup:(BOOL)arg6 revision:(id)arg7 ;
-(id)init;
-(NSString *)etag;
-(BOOL)_isBackup;
-(unsigned long long)size;
-(void)_overrideModificationDateWithDate:(id)arg1 ;
-(BOOL)hasThumbnail;
-(BOOL)isConflict;
-(id)_initWithFileURL:(id)arg1 nonLocalVersion:(id)arg2 ;
-(BOOL)isUbiquitous;
-(void)setResolved:(BOOL)arg1 ;
-(id<NSCoding>)persistentIdentifier;
-(id)replaceItemAtURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)description;
-(BOOL)_preserveConflictVersionLocally;
-(NSString *)localizedNameOfSavingComputer;
-(id)_documentInfo;
-(NSPersonNameComponents *)originatorNameComponents;
-(id)restoreOverItemAtURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)hasLocalContents;
-(NSString *)originatorName;
-(NSString *)originalPOSIXName;
-(BOOL)_setDocumentInfo:(id)arg1 ;
-(BOOL)removeAndReturnError:(id*)arg1 ;
-(NSURL *)URL;
-(BOOL)isDiscardable;
-(unsigned long long)hash;
-(id)_initWithAddition:(id)arg1 ;
-(void)setDiscardable:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

