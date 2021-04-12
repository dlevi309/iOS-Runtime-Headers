/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXDataSectionManager.h>
#import <libobjc.A.dylib/PXCollectionsDataSourceManagerObserver.h>
#import <libobjc.A.dylib/PXNavigationListDataSectionManagerObserver.h>

@class NSMutableDictionary, NSMapTable, PHCollectionList, PXPhotoKitCollectionsDataSourceManager, PXPhotoKitCollectionsDataSource, NSString;

@interface PXNavigationListDataSectionManager : PXDataSectionManager <PXCollectionsDataSourceManagerObserver, PXNavigationListDataSectionManagerObserver> {

	NSMutableDictionary* _childDataSectionManagers;
	NSMutableDictionary* _childDataSectionIndexes;
	NSMapTable* _parentListItems;
	BOOL _allowsEmptyDataSection;
	BOOL _skipAssetCountFetches;
	PHCollectionList* _collectionList;
	long long _indentationLevel;
	PXPhotoKitCollectionsDataSourceManager* _collectionsDataSourceManager;
	PXPhotoKitCollectionsDataSource* _collectionsDataSource;

}

@property (nonatomic,readonly) PXPhotoKitCollectionsDataSourceManager * collectionsDataSourceManager;              //@synthesize collectionsDataSourceManager=_collectionsDataSourceManager - In the implementation block
@property (nonatomic,retain) PXPhotoKitCollectionsDataSource * collectionsDataSource;                              //@synthesize collectionsDataSource=_collectionsDataSource - In the implementation block
@property (nonatomic,readonly) BOOL skipAssetCountFetches;                                                         //@synthesize skipAssetCountFetches=_skipAssetCountFetches - In the implementation block
@property (nonatomic,readonly) PHCollectionList * collectionList;                                                  //@synthesize collectionList=_collectionList - In the implementation block
@property (assign,nonatomic) long long indentationLevel;                                                           //@synthesize indentationLevel=_indentationLevel - In the implementation block
@property (assign,nonatomic) BOOL allowsEmptyDataSection;                                                          //@synthesize allowsEmptyDataSection=_allowsEmptyDataSection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)makeCollectionsDataSourceManagerForConfiguration:(id)arg1 ;
-(void)setCollectionsDataSource:(PXPhotoKitCollectionsDataSource *)arg1 ;
-(void)expandListItem:(id)arg1 hintIndex:(long long)arg2 ;
-(void)_requestParentForListItem:(id)arg1 hintIndex:(long long)arg2 resultHandler:(/*^block*/id)arg3 recursionHandler:(/*^block*/id)arg4 ;
-(PHCollectionList *)collectionList;
-(void)pauseBackgroundFetching;
-(id)collectionsDataSourceIfExisting;
-(id)initWithConfiguration:(id)arg1 ;
-(NSString *)description;
-(void)collapseListItem:(id)arg1 hintIndex:(long long)arg2 ;
-(id)createDataSection;
-(BOOL)allowsEmptyDataSection;
-(id)auxiliaryObjectForKey:(id)arg1 dataSectionObject:(id)arg2 hintIndex:(long long)arg3 ;
-(long long)indentationLevel;
-(BOOL)_isThumbnailAllowedForCollection:(id)arg1 ;
-(void)startBackgroundFetchingIfNeeded;
-(id)_changeDetailsForItemAtIndex:(long long)arg1 childDataSection:(id)arg2 expanding:(BOOL)arg3 ;
-(BOOL)skipAssetCountFetches;
-(PXPhotoKitCollectionsDataSource *)collectionsDataSource;
-(void)setIndentationLevel:(long long)arg1 ;
-(PXPhotoKitCollectionsDataSourceManager *)collectionsDataSourceManager;
-(id)initWithChildDataSectionManagers:(id)arg1 ;
-(void)setAllowsEmptyDataSection:(BOOL)arg1 ;
-(id)initWithCollectionList:(id)arg1 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

