/*
* Generated on Thursday, January 14, 2021 at 2:22:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUPhotoEditToolController.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>

@class PXAssetVariationRenderProvider, NSArray, NSString, PULivePhotoToolControllerSpec, UICollectionView, UICollectionViewFlowLayout, NSDictionary;

@interface PULivePhotoEffectsToolController : PUPhotoEditToolController <UICollectionViewDelegate, UICollectionViewDataSource> {

	PXAssetVariationRenderProvider* _renderProvider;
	NSArray* _collectionViewConstraints;
	id _editModelObserver;
	NSString* _analysisResultCacheKey;
	PULivePhotoToolControllerSpec* _spec;
	NSArray* __options;
	UICollectionView* __collectionView;
	UICollectionViewFlowLayout* __collectionViewLayout;
	NSDictionary* __analysisResult;

}

@property (nonatomic,readonly) PULivePhotoToolControllerSpec * spec;                                                           //@synthesize spec=_spec - In the implementation block
@property (setter=_setOptions:,nonatomic,copy) NSArray * _options;                                                             //@synthesize _options=__options - In the implementation block
@property (setter=_setCollectionView:,nonatomic,retain) UICollectionView * _collectionView;                                    //@synthesize _collectionView=__collectionView - In the implementation block
@property (setter=_setCollectionViewLayout:,nonatomic,retain) UICollectionViewFlowLayout * _collectionViewLayout;              //@synthesize _collectionViewLayout=__collectionViewLayout - In the implementation block
@property (setter=_setAnalysisResult:,nonatomic,retain) NSDictionary * _analysisResult;                                        //@synthesize _analysisResult=__analysisResult - In the implementation block
@property (nonatomic,copy) NSString * analysisResultCacheKey;                                                                  //@synthesize analysisResultCacheKey=_analysisResultCacheKey - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateViewConstraints;
-(id)localizedName;
-(void)_setCollectionView:(id)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)_setOptions:(id)arg1 ;
-(UICollectionView *)_collectionView;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(NSArray *)_options;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(UIEdgeInsets)preferredPreviewViewInsets;
-(void)setupWithAsset:(id)arg1 compositionController:(id)arg2 editSource:(id)arg3 overcaptureEditSource:(id)arg4 valuesCalculator:(id)arg5 ;
-(BOOL)installTogglePreviewGestureRecognizer:(id)arg1 ;
-(BOOL)installLivePhotoPlaybackGestureRecognizer:(id)arg1 ;
-(void)specDidChange;
-(void)setLayoutOrientation:(long long)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)compositionControllerDidChangeForAdjustments:(id)arg1 ;
-(id)toolControllerSpec;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(PULivePhotoToolControllerSpec *)spec;
-(void)setLayoutOrientation:(long long)arg1 ;
-(void)viewDidLoad;
-(CGRect)contentRectInCoordinateSpace:(id)arg1 ;
-(NSDictionary *)_analysisResult;
-(void)_updateCollectionView;
-(void)_updateCollectionViewInsets;
-(void)_updateOptions;
-(void)_updateVisibleCells;
-(NSString *)analysisResultCacheKey;
-(void)setAnalysisResultCacheKey:(NSString *)arg1 ;
-(void)_setCollectionViewLayout:(id)arg1 ;
-(void)_setAnalysisResult:(id)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(UICollectionViewFlowLayout *)_collectionViewLayout;
-(void)viewDidLayoutSubviews;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

