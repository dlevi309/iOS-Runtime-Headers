/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/

#import <libobjc.A.dylib/NSFileProviderItem_Private.h>

@class CSSearchableItem, CSSearchableItemAttributeSet, NSURL, NSNumber, NSString, NSSet, NSDictionary, NSFileProviderItemVersion, NSPersonNameComponents, UTType, NSDate, NSData, NSError;

@interface _CSSearchableItemAdapter : NSObject <NSFileProviderItem_Private> {

	CSSearchableItem* _item;

}

@property (nonatomic,readonly) CSSearchableItemAttributeSet * attributeSet; 
@property (nonatomic,readonly) CSSearchableItem * item;                                                              //@synthesize item=_item - In the implementation block
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
+(id)fp_queryFetchAttributes;
-(NSDate *)lastUsedDate;
-(NSString *)itemIdentifier;
-(NSString *)providerIdentifier;
-(BOOL)isPinned;
-(id)tags;
-(unsigned long long)capabilities;
-(NSDictionary *)userInfo;
-(CSSearchableItemAttributeSet *)attributeSet;
-(BOOL)isDownloaded;
-(BOOL)isUploaded;
-(BOOL)isUploading;
-(BOOL)isDataless;
-(BOOL)isTrashed;
-(NSString *)typeIdentifier;
-(id)formerIdentifier;
-(BOOL)isInPinnedFolder;
-(NSString *)filename;
-(CSSearchableItem *)item;
-(UTType *)contentType;
-(id)fp_appContainerBundleIdentifier;
-(BOOL)isRecursivelyDownloaded;
-(BOOL)isTopLevelSharedItem;
-(NSString *)parentItemIdentifier;
-(NSPersonNameComponents *)ownerNameComponents;
-(NSNumber *)childItemCount;
-(NSFileProviderItemVersion *)itemVersion;
-(NSError *)uploadingError;
-(NSError *)downloadingError;
-(BOOL)isMostRecentVersionDownloaded;
-(BOOL)isSharedByCurrentUser;
-(NSPersonNameComponents *)mostRecentEditorNameComponents;
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
-(NSDate *)contentModificationDate;
-(NSData *)tagData;
-(id)initWithSearchableItem:(id)arg1 ;
-(NSDate *)creationDate;
-(id)sharingCurrentUserRole;
-(id)containerSubitemCount;
-(id)sharingCurrentUserPermissions;
-(NSNumber *)documentSize;
-(BOOL)isDownloading;
-(NSNumber *)favoriteRank;
-(BOOL)isShared;
-(NSString *)displayName;
-(NSData *)versionIdentifier;
@end

