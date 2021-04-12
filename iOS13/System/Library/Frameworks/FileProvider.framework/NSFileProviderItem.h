/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/

@class NSString, NSNumber, NSDate, NSDictionary, NSData, NSError, NSPersonNameComponents, NSFileProviderItemVersion;


@protocol NSFileProviderItem <NSObject>
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
@optional
-(NSDictionary *)userInfo;
-(id<NSFileProviderItemFlags>)flags;
-(NSDate *)creationDate;
-(BOOL)isShared;
-(NSDate *)contentModificationDate;
-(BOOL)isUploaded;
-(NSPersonNameComponents *)ownerNameComponents;
-(BOOL)isDownloaded;
-(unsigned long long)capabilities;
-(NSNumber *)documentSize;
-(NSNumber *)childItemCount;
-(NSDictionary *)extendedAttributes;
-(NSDate *)lastUsedDate;
-(NSData *)tagData;
-(NSNumber *)favoriteRank;
-(BOOL)isTrashed;
-(BOOL)isUploading;
-(NSError *)uploadingError;
-(BOOL)isDownloading;
-(NSError *)downloadingError;
-(BOOL)isExcludedFromSync;
-(BOOL)isMostRecentVersionDownloaded;
-(BOOL)isSharedByCurrentUser;
-(NSPersonNameComponents *)mostRecentEditorNameComponents;
-(NSData *)versionIdentifier;
-(NSFileProviderItemVersion *)itemVersion;

@required
-(NSString *)itemIdentifier;
-(NSString *)typeIdentifier;
-(NSString *)filename;
-(NSString *)parentItemIdentifier;

@end

