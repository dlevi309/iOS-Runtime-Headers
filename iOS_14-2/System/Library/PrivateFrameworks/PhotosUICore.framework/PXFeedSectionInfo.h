/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXInboxModel.h>
#import <libobjc.A.dylib/PXInboxPreviewItem.h>
#import <libobjc.A.dylib/PLAssetContainer.h>

@protocol PLCloudSharedAlbumProtocol;
@class NSDate, NSString, NSArray, NSOrderedSet, PLManagedAsset, PLCloudFeedEntry, PLCloudSharedAlbumInvitationRecord, NSIndexSet, PLPhotoLibrary, NSCountedSet;

@interface PXFeedSectionInfo : NSObject <PXInboxModel, PXInboxPreviewItem, PLAssetContainer> {

	BOOL _loaded;
	BOOL _shouldBeVisibleWhenEmpty;
	NSString* _transientIdentifier;
	PLManagedAsset* _keyAsset;
	PLManagedAsset* _secondaryKeyAsset;
	PLManagedAsset* _tertiaryKeyAsset;
	PLCloudFeedEntry* _cloudFeedEntry;
	long long _sectionType;
	NSDate* _date;
	id<PLCloudSharedAlbumProtocol> _sharedAlbum;
	NSString* _albumTitle;
	PLCloudSharedAlbumInvitationRecord* _invitationRecord;
	long long _numberOfItems;
	NSIndexSet* _excludedAssetIndexes;
	long long _cachedInboxModelType;

}

@property (nonatomic,readonly) NSDate * creationDate; 
@property (nonatomic,readonly) long long inboxModelType; 
@property (nonatomic,copy,readonly) NSString * inboxModelTitle; 
@property (nonatomic,readonly) unsigned long long assetsCount; 
@property (nonatomic,copy,readonly) NSArray * senderNames; 
@property (nonatomic,readonly) BOOL userIsSender; 
@property (assign,getter=isSeen,nonatomic) BOOL seen; 
@property (nonatomic,readonly) NSArray * leftPreviewItems; 
@property (nonatomic,readonly) NSArray * assetsForOneUp; 
@property (nonatomic,readonly) NSString * ownerFirstName; 
@property (nonatomic,readonly) NSString * ownerLastName; 
@property (nonatomic,readonly) NSString * ownerEmail; 
@property (nonatomic,readonly) NSString * keyCommentGUID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSDate * date;                                                        //@synthesize date=_date - In the implementation block
@property (assign,getter=isLoaded,nonatomic) BOOL loaded;                                        //@synthesize loaded=_loaded - In the implementation block
@property (assign,nonatomic) long long cachedInboxModelType;                                     //@synthesize cachedInboxModelType=_cachedInboxModelType - In the implementation block
@property (nonatomic,retain) id<PLCloudSharedAlbumProtocol> sharedAlbum;                         //@synthesize sharedAlbum=_sharedAlbum - In the implementation block
@property (nonatomic,copy) NSString * albumTitle;                                                //@synthesize albumTitle=_albumTitle - In the implementation block
@property (nonatomic,retain) PLCloudSharedAlbumInvitationRecord * invitationRecord;              //@synthesize invitationRecord=_invitationRecord - In the implementation block
@property (assign,nonatomic) long long numberOfItems;                                            //@synthesize numberOfItems=_numberOfItems - In the implementation block
@property (assign,nonatomic) BOOL shouldBeVisibleWhenEmpty;                                      //@synthesize shouldBeVisibleWhenEmpty=_shouldBeVisibleWhenEmpty - In the implementation block
@property (nonatomic,readonly) BOOL isMine; 
@property (nonatomic,readonly) PLCloudFeedEntry * cloudFeedEntry;                                //@synthesize cloudFeedEntry=_cloudFeedEntry - In the implementation block
@property (nonatomic,readonly) long long sectionType;                                            //@synthesize sectionType=_sectionType - In the implementation block
@property (nonatomic,readonly) PLPhotoLibrary * photoLibrary; 
@property (nonatomic,copy) NSIndexSet * excludedAssetIndexes;                                    //@synthesize excludedAssetIndexes=_excludedAssetIndexes - In the implementation block
@property (nonatomic,copy,readonly) NSString * transientIdentifier;                              //@synthesize transientIdentifier=_transientIdentifier - In the implementation block
@property (nonatomic,readonly) NSCountedSet * countsByAssetDisplayType; 
@property (nonatomic,retain,readonly) NSString * uuid; 
@property (nonatomic,retain,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * localizedTitle; 
@property (nonatomic,retain,readonly) NSOrderedSet * assets; 
@property (nonatomic,readonly) unsigned long long approximateCount; 
@property (nonatomic,readonly) unsigned long long photosCount; 
@property (nonatomic,readonly) unsigned long long videosCount; 
@property (nonatomic,readonly) BOOL isEmpty; 
@property (nonatomic,retain) PLManagedAsset * keyAsset;                                          //@synthesize keyAsset=_keyAsset - In the implementation block
@property (nonatomic,retain) PLManagedAsset * secondaryKeyAsset;                                 //@synthesize secondaryKeyAsset=_secondaryKeyAsset - In the implementation block
@property (nonatomic,retain) PLManagedAsset * tertiaryKeyAsset;                                  //@synthesize tertiaryKeyAsset=_tertiaryKeyAsset - In the implementation block
@property (nonatomic,readonly) BOOL canShowComments; 
@property (nonatomic,readonly) BOOL canShowAvalancheStacks; 
@property (nonatomic,copy,readonly) NSArray * localizedLocationNames; 
@property (nonatomic,retain,readonly) NSDate * startDate; 
@property (nonatomic,retain,readonly) NSDate * endDate; 
+(id)sectionInfoWithCloudFeedEntry:(id)arg1 ;
+(void)endCachingSharedAlbumsByGUIDs;
+(void)beginCachingSharedAlbumsByGUIDs;
+(id)defaultPreviewImage;
-(unsigned long long)assetsCount;
-(NSOrderedSet *)assets;
-(unsigned long long)videosCount;
-(BOOL)canPerformEditOperation:(unsigned long long)arg1 ;
-(NSString *)localizedTitle;
-(NSString *)uuid;
-(id)initWithCloudFeedEntry:(id)arg1 ;
-(id)commentsForItemAtIndex:(long long)arg1 ;
-(long long)inboxModelType;
-(long long)_inboxModelTypeForCloudCommentType;
-(id)sharedAlbumWithGUID:(id)arg1 ;
-(void)setSharedAlbum:(id<PLCloudSharedAlbumProtocol>)arg1 ;
-(void)setInvitationRecord:(PLCloudSharedAlbumInvitationRecord *)arg1 ;
-(void)setShouldBeVisibleWhenEmpty:(BOOL)arg1 ;
-(NSIndexSet *)excludedAssetIndexes;
-(long long)cachedInboxModelType;
-(void)setCachedInboxModelType:(long long)arg1 ;
-(BOOL)isMine;
-(long long)typeForItemAtIndex:(long long)arg1 ;
-(PLManagedAsset *)keyAsset;
-(PLPhotoLibrary *)photoLibrary;
-(unsigned long long)photosCount;
-(long long)indexOfItemWithComment:(id)arg1 ;
-(long long)indexOfItemWithAsset:(id)arg1 ;
-(id)assetsForItemAtIndex:(long long)arg1 maximumCount:(long long)arg2 ;
-(long long)numberOfItems;
-(id)batchIDForItemAtIndex:(long long)arg1 ;
-(void)setKeyAsset:(PLManagedAsset *)arg1 ;
-(BOOL)shouldBeVisibleWhenEmpty;
-(BOOL)hasPlayableAssetForItemAtIndex:(long long)arg1 ;
-(void)setExcludedAssetIndexes:(NSIndexSet *)arg1 ;
-(BOOL)hasMultipleAssetsForItemAtIndex:(long long)arg1 ;
-(id)likesForItemAtIndex:(long long)arg1 ;
-(id)commentForItemAtIndex:(long long)arg1 ;
-(NSCountedSet *)countsByAssetDisplayType;
-(void)getCommentCount:(out unsigned long long*)arg1 likeCount:(out unsigned long long*)arg2 ;
-(PLCloudSharedAlbumInvitationRecord *)invitationRecord;
-(BOOL)isSeen;
-(void)getPhotoCount:(out unsigned long long*)arg1 videoCount:(out unsigned long long*)arg2 ;
-(void)setDate:(NSDate *)arg1 ;
-(NSArray *)localizedLocationNames;
-(long long)sectionType;
-(void)setLoaded:(BOOL)arg1 ;
-(NSDate *)creationDate;
-(PLCloudFeedEntry *)cloudFeedEntry;
-(void)reload;
-(void)setNumberOfItems:(long long)arg1 ;
-(NSString *)albumTitle;
-(void)updateFromCloudFeedEntry;
-(id)commentTextForItemAtIndex:(long long)arg1 ;
-(BOOL)containsAsset:(id)arg1 ;
-(void)setSeen:(BOOL)arg1 ;
-(BOOL)areAllAssetsLiked;
-(long long)indexOfFirstItemFromLastBatch;
-(id)assetForItemAtIndex:(long long)arg1 ;
-(id)captionForItemAtIndex:(long long)arg1 ;
-(unsigned long long)approximateCount;
-(BOOL)canShowAvalancheStacks;
-(id)_usersInvolved;
-(BOOL)canShowComments;
-(id)_usersInvolvedForLike;
-(id)_usersInvolvedForComment;
-(id)_usersInvolvedForPost;
-(id)_usersInvolvedForResponse;
-(id)_usersInvolvedForInvitation;
-(id)_usersInvolvedForCoalescedEntry;
-(PLManagedAsset *)secondaryKeyAsset;
-(void)setSecondaryKeyAsset:(PLManagedAsset *)arg1 ;
-(PLManagedAsset *)tertiaryKeyAsset;
-(void)setTertiaryKeyAsset:(PLManagedAsset *)arg1 ;
-(void)setAlbumTitle:(NSString *)arg1 ;
-(NSDate *)date;
-(NSString *)ownerEmail;
-(BOOL)isEmpty;
-(NSString *)ownerLastName;
-(NSString *)ownerFirstName;
-(BOOL)userIsSender;
-(NSArray *)assetsForOneUp;
-(void)fetchLeftPreviewItemsWithCompletion:(/*^block*/id)arg1 ;
-(NSString *)keyCommentGUID;
-(NSString *)inboxModelTitle;
-(NSArray *)senderNames;
-(NSArray *)leftPreviewItems;
-(BOOL)isLoaded;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)transientIdentifier;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
-(id<PLCloudSharedAlbumProtocol>)sharedAlbum;
@end

