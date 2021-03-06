/*
* Generated on Thursday, January 14, 2021 at 2:27:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LiveFSFPHelper.framework/LiveFSFPHelper
*/

#import <LiveFSFPHelper/LiveFSFPHelper-Structs.h>
#import <libobjc.A.dylib/NSFileProviderItem_Private.h>

@protocol OS_dispatch_group;
@class NSURL, NSNumber, NSString, NSSet, NSDictionary, NSFileProviderItemVersion, NSPersonNameComponents, NSDate, NSMutableDictionary, NSObject, NSData, LiveFSFPExtensionHelper, LiveFSFPEnumeratorDataContainer, NSMapTable, UTType, NSError;

@interface LiveFSFPItemHelper : NSObject <NSFileProviderItem_Private> {

	LIFileAttributes attributes;
	int numChildren;
	NSString* _fullPath;
	BOOL _isFetchingXattrValues;
	NSDate* _lastXattrValuesFetchDate;
	NSMutableDictionary* _pendingRenameCompletionBlocks;
	NSObject*<OS_dispatch_group> _xattrFetchGroup;
	NSDate* _lastUsedDate;
	NSData* _tagData;
	NSNumber* _favoriteRank;
	int _liType;
	NSString* _filename;
	NSString* _itemIdentifier;
	long long _attr_load;
	NSString* _path;
	NSString* _fh;
	LiveFSFPExtensionHelper* _extension;
	LiveFSFPItemHelper* _parent;
	LiveFSFPEnumeratorDataContainer* _container;
	NSMapTable* _itemNameCache;
	unsigned long long _inodeNum;

}

@property (assign) long long attr_load;                                                                              //@synthesize attr_load=_attr_load - In the implementation block
@property (nonatomic,copy,readonly) NSString * path;                                                                 //@synthesize path=_path - In the implementation block
@property (nonatomic,copy,readonly) NSString * fullPath; 
@property (nonatomic,copy,readonly) NSString * fh;                                                                   //@synthesize fh=_fh - In the implementation block
@property (retain) LiveFSFPExtensionHelper * extension;                                                              //@synthesize extension=_extension - In the implementation block
@property (retain) LiveFSFPItemHelper * parent;                                                                      //@synthesize parent=_parent - In the implementation block
@property (__weak) LiveFSFPEnumeratorDataContainer * container;                                                      //@synthesize container=_container - In the implementation block
@property (assign) int liType;                                                                                       //@synthesize liType=_liType - In the implementation block
@property (retain) NSMapTable * itemNameCache;                                                                       //@synthesize itemNameCache=_itemNameCache - In the implementation block
@property (nonatomic,copy) NSNumber * favoriteRank; 
@property (nonatomic,copy) NSDate * lastUsedDate; 
@property (nonatomic,copy) NSData * tagData; 
@property (assign) unsigned long long inodeNum;                                                                      //@synthesize inodeNum=_inodeNum - In the implementation block
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
@property (nonatomic,copy,readonly) NSString * itemIdentifier;                                                       //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * parentItemIdentifier; 
@property (nonatomic,copy,readonly) NSString * filename;                                                             //@synthesize filename=_filename - In the implementation block
@property (nonatomic,copy,readonly) UTType * contentType; 
@property (nonatomic,copy,readonly) NSString * typeIdentifier; 
@property (nonatomic,readonly) unsigned long long capabilities; 
@property (nonatomic,copy,readonly) NSNumber * documentSize; 
@property (nonatomic,copy,readonly) NSNumber * childItemCount; 
@property (nonatomic,copy,readonly) NSDate * creationDate; 
@property (nonatomic,copy,readonly) NSDate * contentModificationDate; 
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
+(int)dt_dir;
+(int)dt_reg;
+(int)dt_lnk;
+(id)newItemForFH:(id)arg1 withReference:(int)arg2 name:(id)arg3 parent:(id)arg4 type:(int)arg5 attrs:(id)arg6 extension:(id)arg7 ;
+(int)dt_examine;
+(id)UTIForExtension:(id)arg1 liType:(int)arg2 ;
-(NSString *)fullPath;
-(NSString *)fh;
-(NSDate *)lastUsedDate;
-(NSString *)itemIdentifier;
-(unsigned long long)capabilities;
-(LiveFSFPItemHelper *)parent;
-(BOOL)isTrashed;
-(NSString *)typeIdentifier;
-(NSString *)filename;
-(id)br_pathExtension;
-(id<NSFileProviderItemFlags>)flags;
-(void)setExtension:(LiveFSFPExtensionHelper *)arg1 ;
-(BOOL)isSymlink;
-(NSString *)path;
-(id)lastUsedTime;
-(NSString *)parentItemIdentifier;
-(NSNumber *)childItemCount;
-(void)setParent:(LiveFSFPItemHelper *)arg1 ;
-(NSString *)fp_domainIdentifier;
-(NSString *)fp_parentDomainIdentifier;
-(BOOL)isDocument;
-(void)setContainer:(LiveFSFPEnumeratorDataContainer *)arg1 ;
-(NSDate *)contentModificationDate;
-(NSData *)tagData;
-(NSString *)description;
-(NSDate *)creationDate;
-(int)liType;
-(LiveFSFPExtensionHelper *)extension;
-(NSNumber *)documentSize;
-(void)setLastUsedDate:(NSDate *)arg1 ;
-(void)setFavoriteRank:(NSNumber *)arg1 ;
-(NSNumber *)favoriteRank;
-(BOOL)isDirectory;
-(LiveFSFPEnumeratorDataContainer *)container;
-(NSData *)versionIdentifier;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setTagData:(NSData *)arg1 ;
-(BOOL)ensureFileHandleOrError:(id*)arg1 ;
-(void)resetFileHandle;
-(NSMapTable *)itemNameCache;
-(void)setAttributesStale;
-(void)afterRename:(id)arg1 performBlock:(/*^block*/id)arg2 ;
-(unsigned long long)inodeNum;
-(void)performBlocksForRename:(id)arg1 onEHQueue:(BOOL)arg2 ;
-(void)doDealloc;
-(id)initItemForFH:(id)arg1 withReference:(int)arg2 name:(id)arg3 parent:(id)arg4 type:(int)arg5 attrs:(id)arg6 extension:(id)arg7 ;
-(void)setAttributesLocked:(id)arg1 time:(long long)arg2 ;
-(void)recursivelyReparentChildren;
-(int)refreshAttrsHasAProblem:(id*)arg1 ;
-(BOOL)_fetchXattrValues;
-(void)_fetchLastUsedDateWithProxy:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_fetchTagDataWithProxy:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_fetchFavoriteRank:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_fetchXattrNamed:(id)arg1 proxy:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setAttributes:(id)arg1 time:(long long)arg2 ;
-(void)setItemDeleted;
-(void)recursivelySetChildrenDeleted;
-(void)setNewParent:(id)arg1 andName:(id)arg2 ;
-(BOOL)calcNumberOfChildren:(id*)arg1 ;
-(void)prefetchXattrBasedValues;
-(long long)attr_load;
-(void)setAttr_load:(long long)arg1 ;
-(void)setLiType:(int)arg1 ;
-(void)setItemNameCache:(NSMapTable *)arg1 ;
-(void)setInodeNum:(unsigned long long)arg1 ;
@end

