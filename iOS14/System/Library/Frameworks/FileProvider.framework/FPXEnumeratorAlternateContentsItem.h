/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/

#import <libobjc.A.dylib/NSFileProviderItem_Private.h>

@class FPItem, NSDictionary, NSURL, NSNumber, NSString, NSSet, NSFileProviderItemVersion, NSPersonNameComponents, UTType, NSDate, NSData, NSError;

@interface FPXEnumeratorAlternateContentsItem : NSObject <NSFileProviderItem_Private> {

	FPItem* _documentItem;
	NSDictionary* _resourceValues;

}

@property (copy,readonly) NSURL * fileURL; 
@property (copy,readonly) NSNumber * hasUnresolvedConflicts; 
@property (copy,readonly) NSString * containerDisplayName; 
@property (getter=isDownloadRequested,copy,readonly) NSNumber * downloadRequested; 
@property (getter=isHidden,readonly) BOOL hidden; 
@property (copy,readonly) NSString * providerIdentifier; 
@property (copy,readonly) NSString * sharingPermissions; 
@property (copy,readonly) NSString * fp_spotlightDomainIdentifier; 
@property (copy,readonly) NSString * fp_domainIdentifier; 
@property (copy,readonly) NSString * fp_parentDomainIdentifier; 
@property (getter=fp_isUbiquitous,readonly) BOOL fp_ubiquitous; 
@property (readonly) BOOL fp_isContainer; 
@property (readonly) BOOL fp_isContainerPristine; 
@property (copy,readonly) NSString * fp_cloudContainerIdentifier; 
@property (copy,readonly) NSSet * fp_cloudContainerClientBundleIdentifiers; 
@property (nonatomic,copy,readonly) NSString * displayName; 
@property (getter=isTopLevelSharedItem,nonatomic,readonly) BOOL topLevelSharedItem; 
@property (nonatomic,readonly) id<NSFileProviderItemFlags> flags; 
@property (nonatomic,readonly) NSDictionary * extendedAttributes; 
@property (getter=isExcludedFromSync,nonatomic,readonly) BOOL excludedFromSync; 
@property (nonatomic,readonly) NSFileProviderItemVersion * itemVersion; 
@property (copy,readonly) NSString * fileSystemFilename; 
@property (getter=fp_isLastModifiedByCurrentUser,nonatomic,readonly) BOOL fp_lastModifiedByCurrentUser; 
@property (getter=fp_isAddedByCurrentUser,nonatomic,readonly) BOOL fp_addedByCurrentUser; 
@property (nonatomic,readonly) NSPersonNameComponents * fp_addedByNameComponents; 
@property (nonatomic,readonly) NSString * preformattedOwnerName; 
@property (nonatomic,readonly) NSString * preformattedMostRecentEditorName; 
@property (nonatomic,copy,readonly) NSString * itemIdentifier; 
@property (nonatomic,copy,readonly) NSString * parentItemIdentifier; 
@property (nonatomic,copy,readonly) NSString * filename; 
@property (nonatomic,copy,readonly) UTType * contentType; 
@property (nonatomic,copy,readonly) NSString * typeIdentifier; 
@property (nonatomic,readonly) unsigned long long capabilities; 
@property (nonatomic,copy,readonly) NSNumber * documentSize; 
@property (nonatomic,copy,readonly) NSNumber * childItemCount; 
@property (nonatomic,copy,readonly) NSDate * creationDate; 
@property (nonatomic,copy,readonly) NSDate * contentModificationDate; 
@property (nonatomic,copy,readonly) NSDate * lastUsedDate; 
@property (nonatomic,copy,readonly) NSData * tagData; 
@property (nonatomic,copy,readonly) NSNumber * favoriteRank; 
@property (getter=isTrashed,nonatomic,readonly) BOOL trashed; 
@property (getter=isUploaded,nonatomic,readonly) BOOL uploaded; 
@property (getter=isUploading,nonatomic,readonly) BOOL uploading; 
@property (nonatomic,copy,readonly) NSError * uploadingError; 
@property (getter=isDownloaded,nonatomic,readonly) BOOL downloaded; 
@property (getter=isDownloading,nonatomic,readonly) BOOL downloading; 
@property (nonatomic,copy,readonly) NSError * downloadingError; 
@property (getter=isMostRecentVersionDownloaded,nonatomic,readonly) BOOL mostRecentVersionDownloaded; 
@property (getter=isShared,nonatomic,readonly) BOOL shared; 
@property (getter=isSharedByCurrentUser,nonatomic,readonly) BOOL sharedByCurrentUser; 
@property (nonatomic,readonly) NSPersonNameComponents * ownerNameComponents; 
@property (nonatomic,readonly) NSPersonNameComponents * mostRecentEditorNameComponents; 
@property (nonatomic,readonly) NSData * versionIdentifier; 
@property (nonatomic,readonly) NSDictionary * userInfo; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDate *)lastUsedDate;
-(NSString *)itemIdentifier;
-(id)providerID;
-(unsigned long long)capabilities;
-(NSDictionary *)userInfo;
-(BOOL)isContainer;
-(BOOL)isDownloaded;
-(BOOL)isUploaded;
-(BOOL)isUploading;
-(BOOL)isTrashed;
-(id)initWithOriginalDocumentItem:(id)arg1 alternateContentsURL:(id)arg2 ;
-(NSString *)typeIdentifier;
-(NSString *)filename;
-(UTType *)contentType;
-(id)cloudContainerIdentifier;
-(BOOL)isContainerPristine;
-(id)isDownloadRequested;
-(NSString *)parentItemIdentifier;
-(NSPersonNameComponents *)ownerNameComponents;
-(NSNumber *)childItemCount;
-(NSError *)uploadingError;
-(NSError *)downloadingError;
-(BOOL)isMostRecentVersionDownloaded;
-(BOOL)isSharedByCurrentUser;
-(NSPersonNameComponents *)mostRecentEditorNameComponents;
-(NSNumber *)hasUnresolvedConflicts;
-(NSString *)sharingPermissions;
-(NSString *)fp_spotlightDomainIdentifier;
-(NSString *)fp_domainIdentifier;
-(BOOL)fp_isLastModifiedByCurrentUser;
-(NSDate *)contentModificationDate;
-(NSData *)tagData;
-(NSDate *)creationDate;
-(NSNumber *)documentSize;
-(BOOL)isDownloading;
-(NSNumber *)favoriteRank;
-(BOOL)isShared;
-(NSString *)containerDisplayName;
-(NSString *)displayName;
@end

