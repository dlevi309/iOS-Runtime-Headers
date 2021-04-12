/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class NSString, NSNumber, NSMutableOrderedSet, NSData, PLGenericAlbum, NSURL;

@interface PLPersistedAlbumMetadata : NSObject {

	BOOL _isFolder;
	BOOL _pinned;
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
	PLGenericAlbum* _genericAlbum;
	NSURL* _metadataURL;

}

@property (nonatomic,retain) PLGenericAlbum * genericAlbum;                 //@synthesize genericAlbum=_genericAlbum - In the implementation block
@property (nonatomic,retain) NSURL * metadataURL;                           //@synthesize metadataURL=_metadataURL - In the implementation block
@property (nonatomic,retain) NSString * uuid;                               //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain) NSString * cloudGUID;                          //@synthesize cloudGUID=_cloudGUID - In the implementation block
@property (nonatomic,retain) NSString * title;                              //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSNumber * kind;                               //@synthesize kind=_kind - In the implementation block
@property (assign,getter=isPinned,nonatomic) BOOL pinned;                   //@synthesize pinned=_pinned - In the implementation block
@property (assign,getter=isInTrash,nonatomic) BOOL inTrash;                 //@synthesize inTrash=_inTrash - In the implementation block
@property (assign,nonatomic) BOOL customSortAscending;                      //@synthesize customSortAscending=_customSortAscending - In the implementation block
@property (assign,nonatomic) int customSortKey;                             //@synthesize customSortKey=_customSortKey - In the implementation block
@property (nonatomic,retain) NSString * customKeyAssetUUID;                 //@synthesize customKeyAssetUUID=_customKeyAssetUUID - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * assetUUIDs;              //@synthesize assetUUIDs=_assetUUIDs - In the implementation block
@property (nonatomic,retain) NSString * importSessionID;                    //@synthesize importSessionID=_importSessionID - In the implementation block
@property (nonatomic,retain) NSData * userQueryData;                        //@synthesize userQueryData=_userQueryData - In the implementation block
@property (nonatomic,readonly) BOOL isFolder;                               //@synthesize isFolder=_isFolder - In the implementation block
@property (assign,nonatomic) BOOL allowsOverwrite;                          //@synthesize allowsOverwrite=_allowsOverwrite - In the implementation block
+(BOOL)isValidPath:(id)arg1 ;
-(id)init;
-(id)description;
-(NSString *)uuid;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSNumber *)kind;
-(void)setKind:(NSNumber *)arg1 ;
-(void)setUuid:(NSString *)arg1 ;
-(BOOL)_readMetadata;
-(BOOL)isPinned;
-(void)setPinned:(BOOL)arg1 ;
-(BOOL)isInTrash;
-(NSString *)cloudGUID;
-(void)updateChildrenOrderingInAlbum:(id)arg1 includePendingAssetChanges:(BOOL)arg2 ;
-(id)insertAlbumFromDataInManagedObjectContext:(id)arg1 ;
-(id)initWithPersistedDataAtURL:(id)arg1 ;
-(void)setCloudGUID:(NSString *)arg1 ;
-(BOOL)isFolder;
-(NSString *)importSessionID;
-(void)setImportSessionID:(NSString *)arg1 ;
-(void)removePersistedAlbumData;
-(id)initWithPLGenericAlbum:(id)arg1 pathManager:(id)arg2 ;
-(void)persistAlbumData;
-(NSMutableOrderedSet *)assetUUIDs;
-(void)_saveMetadata;
-(NSURL *)metadataURL;
-(void)setMetadataURL:(NSURL *)arg1 ;
-(BOOL)customSortAscending;
-(int)customSortKey;
-(NSData *)userQueryData;
-(void)setCustomSortAscending:(BOOL)arg1 ;
-(void)setAllowsOverwrite:(BOOL)arg1 ;
-(id)initWithTitle:(id)arg1 uuid:(id)arg2 cloudGUID:(id)arg3 kind:(id)arg4 assetUUIDs:(id)arg5 persistedAlbumDataDirectory:(id)arg6 ;
-(void)setCustomSortKey:(int)arg1 ;
-(void)setInTrash:(BOOL)arg1 ;
-(void)setUserQueryData:(NSData *)arg1 ;
-(NSString *)customKeyAssetUUID;
-(void)setCustomKeyAssetUUID:(NSString *)arg1 ;
-(void)setAssetUUIDs:(NSMutableOrderedSet *)arg1 ;
-(BOOL)allowsOverwrite;
-(PLGenericAlbum *)genericAlbum;
-(void)setGenericAlbum:(PLGenericAlbum *)arg1 ;
@end

