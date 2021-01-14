/*
* Generated on Thursday, January 14, 2021 at 2:23:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/

@class NSString, UTType, NSNumber, NSDate, NSData, NSError, NSPersonNameComponents, NSDictionary;


@protocol NSFileProviderItem <NSObject>
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
@optional
-(NSDate *)lastUsedDate;
-(unsigned long long)capabilities;
-(NSDictionary *)userInfo;
-(BOOL)isDownloaded;
-(BOOL)isUploaded;
-(BOOL)isUploading;
-(BOOL)isTrashed;
-(NSString *)typeIdentifier;
-(UTType *)contentType;
-(NSPersonNameComponents *)ownerNameComponents;
-(NSNumber *)childItemCount;
-(NSError *)uploadingError;
-(NSError *)downloadingError;
-(BOOL)isMostRecentVersionDownloaded;
-(BOOL)isSharedByCurrentUser;
-(NSPersonNameComponents *)mostRecentEditorNameComponents;
-(NSDate *)contentModificationDate;
-(NSData *)tagData;
-(NSDate *)creationDate;
-(NSNumber *)documentSize;
-(BOOL)isDownloading;
-(NSNumber *)favoriteRank;
-(BOOL)isShared;
-(NSData *)versionIdentifier;

@required
-(NSString *)itemIdentifier;
-(NSString *)filename;
-(NSString *)parentItemIdentifier;

@end

