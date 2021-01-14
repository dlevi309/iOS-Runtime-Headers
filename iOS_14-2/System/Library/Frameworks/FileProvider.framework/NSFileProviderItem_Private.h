/*
* Generated on Thursday, January 14, 2021 at 2:23:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/

@class NSURL, NSNumber, NSString, NSSet, NSDictionary, NSFileProviderItemVersion, NSPersonNameComponents;


@protocol NSFileProviderItem_Private <NSFileProviderItem>
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
@optional
-(NSString *)providerIdentifier;
-(BOOL)isHidden;
-(id<NSFileProviderItemFlags>)flags;
-(id)isDownloadRequested;
-(BOOL)isTopLevelSharedItem;
-(NSFileProviderItemVersion *)itemVersion;
-(NSNumber *)hasUnresolvedConflicts;
-(NSString *)sharingPermissions;
-(NSString *)fp_spotlightDomainIdentifier;
-(NSString *)fp_domainIdentifier;
-(NSString *)fp_parentDomainIdentifier;
-(BOOL)fp_isUbiquitous;
-(BOOL)fp_isContainer;
-(BOOL)fp_isContainerPristine;
-(NSString *)fp_cloudContainerIdentifier;
-(NSSet *)fp_cloudContainerClientBundleIdentifiers;
-(BOOL)isExcludedFromSync;
-(NSString *)fileSystemFilename;
-(BOOL)fp_isLastModifiedByCurrentUser;
-(BOOL)fp_isAddedByCurrentUser;
-(NSPersonNameComponents *)fp_addedByNameComponents;
-(NSString *)preformattedOwnerName;
-(NSString *)preformattedMostRecentEditorName;
-(NSURL *)fileURL;
-(NSString *)containerDisplayName;
-(NSDictionary *)extendedAttributes;
-(NSString *)displayName;

@end

