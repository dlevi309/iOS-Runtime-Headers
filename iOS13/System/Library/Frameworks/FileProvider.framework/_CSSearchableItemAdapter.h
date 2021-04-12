/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/

#import <libobjc.A.dylib/NSFileProviderItem_Private.h>

@class CSSearchableItem, CSSearchableItemAttributeSet, NSString, NSNumber, NSDate, NSDictionary, NSData, NSError, NSPersonNameComponents, NSFileProviderItemVersion, NSURL, NSSet;

@interface _CSSearchableItemAdapter : NSObject <NSFileProviderItem_Private> {

	CSSearchableItem* _item;

}

@property (nonatomic,readonly) CSSearchableItemAttributeSet * attributeSet; 
@property (nonatomic,readonly) CSSearchableItem * item;                                                              //@synthesize item=_item - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * itemIdentifier; 
@property (nonatomic,copy,readonly) NSString * parentItemIdentifier; 
@property (nonatomic,copy,readonly) NSString * filename; 
@property (nonatomic,copy,readonly) NSString * typeIdentifier; 
@property (nonatomic,readonly) unsigned long long capabilities; 
@property (nonatomic,readonly) id<NSFileProviderItemFlags> flags; 
@property (nonatomic,copy,readonly) NSNumber * documentSize; 
@property (nonatomic,copy,readonly) NSNumber * childItemCount; 
@property (nonatomic,copy,readonly) NSDate * creationDate; 
@property (nonatomic,copy,readonly) NSDate * contentModificationDate; 
@property (nonatomic,readonly) NSDictionary * extendedAttributes; 
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
@property (getter=isExcludedFromSync,nonatomic,readonly) BOOL excludedFromSync; 
@property (getter=isMostRecentVersionDownloaded,nonatomic,readonly) BOOL mostRecentVersionDownloaded; 
@property (getter=isShared,nonatomic,readonly) BOOL shared; 
@property (getter=isSharedByCurrentUser,nonatomic,readonly) BOOL sharedByCurrentUser; 
@property (nonatomic,readonly) NSPersonNameComponents * ownerNameComponents; 
@property (nonatomic,readonly) NSPersonNameComponents * mostRecentEditorNameComponents; 
@property (nonatomic,readonly) NSData * versionIdentifier; 
@property (nonatomic,readonly) NSFileProviderItemVersion * itemVersion; 
@property (nonatomic,readonly) NSDictionary * userInfo; 
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
@property (copy,readonly) NSString * fileSystemFilename; 
@property (getter=fp_isLastModifiedByCurrentUser,nonatomic,readonly) BOOL fp_lastModifiedByCurrentUser; 
@property (getter=fp_isAddedByCurrentUser,nonatomic,readonly) BOOL fp_addedByCurrentUser; 
@property (nonatomic,readonly) NSPersonNameComponents * fp_addedByNameComponents; 
@property (nonatomic,readonly) NSString * preformattedOwnerName; 
@property (nonatomic,readonly) NSString * preformattedMostRecentEditorName; 
+(id)fp_queryFetchAttributes;
-(NSDictionary *)userInfo;
-(CSSearchableItem *)item;
-(NSString *)itemIdentifier;
-(NSString *)providerIdentifier;
-(NSString *)typeIdentifier;
-(id)tags;
-(NSString *)filename;
-(NSString *)displayName;
-(NSDate *)creationDate;
-(CSSearchableItemAttributeSet *)attributeSet;
-(BOOL)isPinned;
-(BOOL)isShared;
-(NSDate *)contentModificationDate;
-(BOOL)isTopLevelSharedItem;
-(BOOL)isUploaded;
-(NSString *)parentItemIdentifier;
-(NSPersonNameComponents *)ownerNameComponents;
-(BOOL)isDownloaded;
-(unsigned long long)capabilities;
-(NSNumber *)documentSize;
-(NSNumber *)childItemCount;
-(NSDate *)lastUsedDate;
-(NSData *)tagData;
-(NSNumber *)favoriteRank;
-(BOOL)isTrashed;
-(BOOL)isUploading;
-(NSError *)uploadingError;
-(BOOL)isDownloading;
-(NSError *)downloadingError;
-(BOOL)isMostRecentVersionDownloaded;
-(BOOL)isSharedByCurrentUser;
-(NSPersonNameComponents *)mostRecentEditorNameComponents;
-(NSData *)versionIdentifier;
-(NSFileProviderItemVersion *)itemVersion;
-(NSString *)fp_spotlightDomainIdentifier;
-(NSString *)fp_domainIdentifier;
-(NSString *)fp_parentDomainIdentifier;
-(BOOL)fp_isUbiquitous;
-(BOOL)fp_isContainer;
-(BOOL)fp_isContainerPristine;
-(NSString *)fp_cloudContainerIdentifier;
-(BOOL)fp_isLastModifiedByCurrentUser;
-(BOOL)fp_isAddedByCurrentUser;
-(NSPersonNameComponents *)fp_addedByNameComponents;
-(NSString *)preformattedOwnerName;
-(NSString *)preformattedMostRecentEditorName;
-(id)fp_appContainerBundleIdentifier;
-(id)formerIdentifier;
-(BOOL)isInPinnedFolder;
-(BOOL)isDataless;
-(BOOL)isRecursivelyDownloaded;
-(id)initWithSearchableItem:(id)arg1 ;
-(id)sharingCurrentUserRole;
-(id)containerSubitemCount;
-(id)sharingCurrentUserPermissions;
@end

