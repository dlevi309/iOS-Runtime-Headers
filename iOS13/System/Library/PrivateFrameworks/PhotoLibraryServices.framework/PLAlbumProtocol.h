/*
* Generated on Monday, March 1, 2021 at 2:30:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

@class PLPhotoLibrary, NSNumber, NSMutableOrderedSet, NSString, NSObject, NSURL;


@protocol PLAlbumProtocol <PLAssetContainer>
@property (nonatomic,readonly) PLPhotoLibrary * photoLibrary; 
@property (nonatomic,retain,readonly) NSNumber * kind; 
@property (nonatomic,readonly) int kindValue; 
@property (nonatomic,retain,readonly) NSMutableOrderedSet * mutableAssets; 
@property (assign,nonatomic) BOOL hasUnseenContentBoolValue; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,retain,readonly) NSObject * posterImage; 
@property (nonatomic,readonly) BOOL isLibrary; 
@property (nonatomic,readonly) BOOL isCameraAlbum; 
@property (nonatomic,readonly) BOOL isPanoramasAlbum; 
@property (nonatomic,readonly) BOOL isPhotoStreamAlbum; 
@property (nonatomic,readonly) BOOL isCloudSharedAlbum; 
@property (nonatomic,readonly) BOOL isPendingPhotoStreamAlbum; 
@property (nonatomic,readonly) BOOL isStandInAlbum; 
@property (nonatomic,readonly) BOOL isFolder; 
@property (nonatomic,readonly) BOOL isInTrash; 
@property (nonatomic,readonly) BOOL isOwnedCloudSharedAlbum; 
@property (nonatomic,readonly) BOOL isFamilyCloudSharedAlbum; 
@property (nonatomic,readonly) BOOL isMultipleContributorCloudSharedAlbum; 
@property (nonatomic,readonly) BOOL isRecentlyAddedAlbum; 
@property (nonatomic,readonly) BOOL isUserLibraryAlbum; 
@property (nonatomic,readonly) BOOL canContributeToCloudSharedAlbum; 
@property (nonatomic,readonly) BOOL shouldDeleteWhenEmpty; 
@property (nonatomic,retain) NSString * importSessionID; 
@property (nonatomic,retain,readonly) NSURL * groupURL; 
@property (nonatomic,copy,readonly) id sortingComparator; 
@property (assign,nonatomic) int pendingItemsCount; 
@property (assign,nonatomic) int pendingItemsType; 
@property (assign,nonatomic) unsigned long long batchSize; 
@optional
-(NSString *)name;
-(unsigned long long)batchSize;
-(void)setBatchSize:(unsigned long long)arg1;
-(id)filteredIndexesForPredicate:(id)arg1;
-(void)setUINotificationsEnabled:(BOOL)arg1;

@required
-(NSNumber *)kind;
-(BOOL)isInTrash;
-(PLPhotoLibrary *)photoLibrary;
-(int)kindValue;
-(int)pendingItemsType;
-(int)pendingItemsCount;
-(NSMutableOrderedSet *)mutableAssets;
-(void)setPendingItemsCount:(int)arg1;
-(void)setPendingItemsType:(int)arg1;
-(void)reducePendingItemsCountBy:(unsigned long long)arg1;
-(void)batchFetchAssets:(id)arg1;
-(BOOL)hasUnseenContentBoolValue;
-(void)setHasUnseenContentBoolValue:(BOOL)arg1;
-(NSObject *)posterImage;
-(BOOL)isLibrary;
-(BOOL)isCameraAlbum;
-(BOOL)isPanoramasAlbum;
-(BOOL)isPhotoStreamAlbum;
-(BOOL)isCloudSharedAlbum;
-(BOOL)isPendingPhotoStreamAlbum;
-(BOOL)isStandInAlbum;
-(BOOL)isFolder;
-(BOOL)isOwnedCloudSharedAlbum;
-(BOOL)isFamilyCloudSharedAlbum;
-(BOOL)isMultipleContributorCloudSharedAlbum;
-(BOOL)isRecentlyAddedAlbum;
-(BOOL)isUserLibraryAlbum;
-(BOOL)canContributeToCloudSharedAlbum;
-(BOOL)shouldDeleteWhenEmpty;
-(NSString *)importSessionID;
-(void)setImportSessionID:(id)arg1;
-(NSURL *)groupURL;
-(id)sortingComparator;

@end

