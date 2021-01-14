/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class NSString, NSNumber, NSMutableOrderedSet, NSData, PLGenericAlbum, NSURL;

@interface PLPersistedAlbumMetadata : NSObject {

	BOOL _isFolder;
	BOOL _pinned;
	BOOL _prototype;
	BOOL _inTrash;
	BOOL _customSortAscending;
	BOOL _allowsOverwrite;
	int _customSortKey;
	NSString* _title;
	NSString* _uuid;
	NSString* _cloudGUID;
	NSNumber* _kind;
	NSString* _customKeyAssetUUID;
	NSMutableOrderedSet* _assetUUIDs;
	NSString* _importSessionID;
	NSData* _userQueryData;
	NSString* _projectDocumentType;
	PLGenericAlbum* _genericAlbum;
	NSURL* _metadataURL;

}

@property (nonatomic,retain) PLGenericAlbum * genericAlbum;                  //@synthesize genericAlbum=_genericAlbum - In the implementation block
@property (nonatomic,retain) NSURL * metadataURL;                            //@synthesize metadataURL=_metadataURL - In the implementation block
@property (nonatomic,retain) NSString * uuid;                                //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain) NSString * cloudGUID;                           //@synthesize cloudGUID=_cloudGUID - In the implementation block
@property (nonatomic,retain) NSString * title;                               //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSNumber * kind;                                //@synthesize kind=_kind - In the implementation block
@property (assign,getter=isPinned,nonatomic) BOOL pinned;                    //@synthesize pinned=_pinned - In the implementation block
@property (assign,getter=isPrototype,nonatomic) BOOL prototype;              //@synthesize prototype=_prototype - In the implementation block
@property (assign,getter=isInTrash,nonatomic) BOOL inTrash;                  //@synthesize inTrash=_inTrash - In the implementation block
@property (assign,nonatomic) BOOL customSortAscending;                       //@synthesize customSortAscending=_customSortAscending - In the implementation block
@property (assign,nonatomic) int customSortKey;                              //@synthesize customSortKey=_customSortKey - In the implementation block
@property (nonatomic,retain) NSString * customKeyAssetUUID;                  //@synthesize customKeyAssetUUID=_customKeyAssetUUID - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * assetUUIDs;               //@synthesize assetUUIDs=_assetUUIDs - In the implementation block
@property (nonatomic,retain) NSString * importSessionID;                     //@synthesize importSessionID=_importSessionID - In the implementation block
@property (nonatomic,retain) NSData * userQueryData;                         //@synthesize userQueryData=_userQueryData - In the implementation block
@property (nonatomic,retain) NSString * projectDocumentType;                 //@synthesize projectDocumentType=_projectDocumentType - In the implementation block
@property (nonatomic,readonly) BOOL isFolder;                                //@synthesize isFolder=_isFolder - In the implementation block
@property (assign,nonatomic) BOOL allowsOverwrite;                           //@synthesize allowsOverwrite=_allowsOverwrite - In the implementation block
+(BOOL)isValidPath:(id)arg1 ;
-(BOOL)isPinned;
-(NSString *)uuid;
-(void)setPinned:(BOOL)arg1 ;
-(NSString *)cloudGUID;
-(void)setPrototype:(BOOL)arg1 ;
-(id)init;
-(NSString *)importSessionID;
-(void)removePersistedAlbumData;
-(id)initWithPLGenericAlbum:(id)arg1 pathManager:(id)arg2 ;
-(void)persistAlbumData;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)customKeyAssetUUID;
-(id)_fetchChildUUIDs;
-(void)setCustomKeyAssetUUID:(NSString *)arg1 ;
-(BOOL)allowsOverwrite;
-(PLGenericAlbum *)genericAlbum;
-(void)setGenericAlbum:(PLGenericAlbum *)arg1 ;
-(BOOL)_readMetadata;
-(NSURL *)metadataURL;
-(NSNumber *)kind;
-(NSData *)userQueryData;
-(BOOL)isPrototype;
-(id)description;
-(int)customSortKey;
-(void)setCustomSortKey:(int)arg1 ;
-(void)setUserQueryData:(NSData *)arg1 ;
-(BOOL)customSortAscending;
-(void)setCustomSortAscending:(BOOL)arg1 ;
-(void)setImportSessionID:(NSString *)arg1 ;
-(NSString *)projectDocumentType;
-(void)setKind:(NSNumber *)arg1 ;
-(NSMutableOrderedSet *)assetUUIDs;
-(void)setInTrash:(BOOL)arg1 ;
-(void)setAllowsOverwrite:(BOOL)arg1 ;
-(id)initWithTitle:(id)arg1 uuid:(id)arg2 cloudGUID:(id)arg3 kind:(id)arg4 assetUUIDs:(id)arg5 persistedAlbumDataDirectory:(id)arg6 ;
-(BOOL)isFolder;
-(void)_saveMetadata;
-(void)setCloudGUID:(NSString *)arg1 ;
-(void)updateChildrenOrderingInAlbum:(id)arg1 includePendingAssetChanges:(BOOL)arg2 ;
-(id)insertAlbumFromDataInManagedObjectContext:(id)arg1 ;
-(id)initWithPersistedDataAtURL:(id)arg1 ;
-(void)setMetadataURL:(NSURL *)arg1 ;
-(void)setUuid:(NSString *)arg1 ;
-(void)setAssetUUIDs:(NSMutableOrderedSet *)arg1 ;
-(void)setProjectDocumentType:(NSString *)arg1 ;
-(NSString *)title;
-(BOOL)isInTrash;
@end

