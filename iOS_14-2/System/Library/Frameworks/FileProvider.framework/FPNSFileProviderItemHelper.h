/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/

#import <libobjc.A.dylib/NSFileProviderItem.h>

@class NSString, UTType, NSNumber, NSDate, NSData, NSError, NSPersonNameComponents, NSDictionary;

@interface FPNSFileProviderItemHelper : NSObject <NSFileProviderItem> {

	NSString* itemIdentifier;
	NSString* parentItemIdentifier;
	NSString* filename;
	NSString* typeIdentifier;
	UTType* contentType;
	unsigned long long capabilities;

}

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
-(NSString *)itemIdentifier;
-(unsigned long long)capabilities;
-(NSString *)typeIdentifier;
-(NSString *)filename;
-(UTType *)contentType;
-(NSString *)parentItemIdentifier;
-(BOOL)fp_isWritable;
-(id)fp_downloadingStatus;
-(BOOL)fp_isReadable;
-(id)fp_sharingCurrentUserRole;
-(id)fp_sharingCurrentUserPermissions;
@end

