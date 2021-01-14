/*
* Generated on Thursday, January 14, 2021 at 2:22:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUICore/PXGadgetProvider.h>
#import <libobjc.A.dylib/PXCollectionsDataSourceManagerObserver.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PUAlbumGadgetDelegate.h>
#import <libobjc.A.dylib/PUHorizontalAlbumListGadgetLayoutDelegate.h>

@class PXPhotoKitCollectionsDataSourceManager, PUAlbumListCellContentViewHelper, PXExtendedTraitCollection, NSString;

@interface PUAlbumsGadgetProvider : PXGadgetProvider <PXCollectionsDataSourceManagerObserver, PXChangeObserver, PUAlbumGadgetDelegate, PUHorizontalAlbumListGadgetLayoutDelegate> {

	BOOL _hasGeneratedGadgets;
	PXPhotoKitCollectionsDataSourceManager* _dataSourceManager;
	PUAlbumListCellContentViewHelper* _contentViewHelper;
	unsigned long long _albumListType;
	PXExtendedTraitCollection* _extendedTraitCollection;
	unsigned long long _currentDataSourceIdentifier;

}

@property (assign,nonatomic) unsigned long long currentDataSourceIdentifier;                            //@synthesize currentDataSourceIdentifier=_currentDataSourceIdentifier - In the implementation block
@property (nonatomic,retain) PUAlbumListCellContentViewHelper * contentViewHelper;                      //@synthesize contentViewHelper=_contentViewHelper - In the implementation block
@property (assign,nonatomic) BOOL hasGeneratedGadgets;                                                  //@synthesize hasGeneratedGadgets=_hasGeneratedGadgets - In the implementation block
@property (nonatomic,readonly) unsigned long long albumListType;                                        //@synthesize albumListType=_albumListType - In the implementation block
@property (nonatomic,readonly) PXPhotoKitCollectionsDataSourceManager * dataSourceManager;              //@synthesize dataSourceManager=_dataSourceManager - In the implementation block
@property (nonatomic,readonly) PXExtendedTraitCollection * extendedTraitCollection;                     //@synthesize extendedTraitCollection=_extendedTraitCollection - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowSeeAllAccessoryButton; 
@property (nonatomic,readonly) NSString * seeAllAccessoryButtonTitle; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)generateGadgets;
-(Class)_albumGadgetClassForCollection:(id)arg1 ;
-(id)_newGadgetForCollection:(id)arg1 ;
-(id)init;
-(void)setHasGeneratedGadgets:(BOOL)arg1 ;
-(void)startLoadingRemainingData;
-(id)albumListCellContentViewHelperForAlbum:(id)arg1 ;
-(void)loadDataForGadgets;
-(NSString *)seeAllAccessoryButtonTitle;
-(unsigned long long)estimatedNumberOfGadgets;
-(void)setCurrentDataSourceIdentifier:(unsigned long long)arg1 ;
-(id)gadgetForIndexPath:(id)arg1 ;
-(void)pauseLoadingRemainingData;
-(unsigned long long)albumListType;
-(id)albumListCellContentViewHelperForLayout:(id)arg1 ;
-(id)initWithAlbumListType:(unsigned long long)arg1 dataSourceManager:(id)arg2 extendedTraitCollection:(id)arg3 ;
-(PXPhotoKitCollectionsDataSourceManager *)dataSourceManager;
-(void)_updateDataSourceWithChangeDetails:(id)arg1 ;
-(void)_reconfigureGadgets;
-(void)setContentViewHelper:(PUAlbumListCellContentViewHelper *)arg1 ;
-(PXExtendedTraitCollection *)extendedTraitCollection;
-(id)gadgetForCollection:(id)arg1 ;
-(BOOL)shouldShowSeeAllAccessoryButton;
-(unsigned long long)currentDataSourceIdentifier;
-(PUAlbumListCellContentViewHelper *)contentViewHelper;
-(id)initWithIdentifier:(id)arg1 ;
-(BOOL)hasGeneratedGadgets;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

