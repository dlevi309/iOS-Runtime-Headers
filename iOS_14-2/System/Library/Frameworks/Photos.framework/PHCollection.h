/*
* Generated on Thursday, January 14, 2021 at 2:22:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/PHObject.h>

@class NSDate, NSString, NSManagedObjectID, NSSortDescriptor, NSArray;

@interface PHCollection : PHObject {

	BOOL _trashed;
	BOOL _customSortAscending;
	unsigned _customSortKey;
	unsigned long long _estimatedPhotosCount;
	unsigned long long _estimatedVideosCount;
	NSDate* _creationDate;
	NSString* _localizedSubtitle;

}

@property (nonatomic,readonly) NSManagedObjectID * parentFolderID; 
@property (nonatomic,copy,readonly) NSString * effectiveCustomSortKey; 
@property (nonatomic,copy,readonly) NSSortDescriptor * defaultSortDescriptor; 
@property (nonatomic,readonly) BOOL isAlbumContentSort; 
@property (nonatomic,readonly) BOOL isAlbumContentTitleSort; 
@property (nonatomic,readonly) BOOL isUserSmartAlbum; 
@property (nonatomic,readonly) unsigned long long estimatedPhotosCount;                               //@synthesize estimatedPhotosCount=_estimatedPhotosCount - In the implementation block
@property (nonatomic,readonly) unsigned long long estimatedVideosCount;                               //@synthesize estimatedVideosCount=_estimatedVideosCount - In the implementation block
@property (nonatomic,readonly) BOOL hasLocalizedTitle; 
@property (nonatomic,readonly) BOOL hasLocationInfo; 
@property (nonatomic,readonly) NSDate * creationDate;                                                 //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,readonly) NSString * localizedSubtitle;                                          //@synthesize localizedSubtitle=_localizedSubtitle - In the implementation block
@property (getter=isTrashed,nonatomic,readonly) BOOL trashed;                                         //@synthesize trashed=_trashed - In the implementation block
@property (nonatomic,readonly) BOOL customSortAscending;                                              //@synthesize customSortAscending=_customSortAscending - In the implementation block
@property (nonatomic,readonly) unsigned customSortKey;                                                //@synthesize customSortKey=_customSortKey - In the implementation block
@property (nonatomic,copy,readonly) NSArray * effectiveCustomSortDescriptors; 
@property (nonatomic,copy,readonly) id<PHCollectionPresentationHints> presentationHints; 
@property (nonatomic,readonly) BOOL startsAtEnd; 
@property (nonatomic,readonly) BOOL canContainAssets; 
@property (nonatomic,readonly) BOOL canContainCollections; 
@property (nonatomic,readonly) NSString * localizedTitle; 
+(id)entityKeyMap;
+(id)fetchType;
+(id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2 ;
+(id)fetchCollectionsInCollectionList:(id)arg1 options:(id)arg2 ;
+(id)fetchTopLevelUserCollectionsWithOptions:(id)arg1 ;
+(id)predicateForUserCollections;
+(id)fetchMomentsForAssetsWithLocalIdentifiers:(id)arg1 options:(id)arg2 ;
+(id)fetchMomentsForAssetsWithOIDs:(id)arg1 options:(id)arg2 ;
+(id)fetchMomentsForFacesWithLocalIdentifiers:(id)arg1 options:(id)arg2 ;
+(id)fetchMomentsForPersonsWithLocalIdentifiers:(id)arg1 options:(id)arg2 ;
+(id)fetchFilteredAssetCollections:(id)arg1 containingAssetsMatchingPredicate:(id)arg2 ;
+(BOOL)managedObjectSupportsTrashedState;
+(id)managedEntityName;
-(BOOL)canPerformEditOperation:(long long)arg1 ;
-(NSString *)localizedTitle;
-(BOOL)collectionHasFixedOrder;
-(BOOL)isTrashed;
-(BOOL)hasLocalizedTitle;
-(unsigned long long)estimatedVideosCount;
-(id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3 ;
-(NSSortDescriptor *)defaultSortDescriptor;
-(NSString *)localizedSubtitle;
-(id<PHCollectionPresentationHints>)presentationHints;
-(BOOL)isDeleted;
-(id)description;
-(unsigned)customSortKey;
-(BOOL)customSortAscending;
-(NSDate *)creationDate;
-(BOOL)startsAtEnd;
-(unsigned long long)collectionFixedOrderPriority;
-(BOOL)isUserSmartAlbum;
-(NSManagedObjectID *)parentFolderID;
-(NSString *)effectiveCustomSortKey;
-(BOOL)isAlbumContentSort;
-(BOOL)isAlbumContentTitleSort;
-(BOOL)canContainAssets;
-(unsigned long long)ancestryIndexOfCollectionList:(id)arg1 context:(id)arg2 ;
-(NSArray *)effectiveCustomSortDescriptors;
-(id)_effectiveSortDescriptorsFromCustomSortKey:(id)arg1 ;
-(BOOL)hasLocationInfo;
-(id)objectReference;
-(BOOL)canContainCollections;
-(unsigned long long)estimatedPhotosCount;
@end

