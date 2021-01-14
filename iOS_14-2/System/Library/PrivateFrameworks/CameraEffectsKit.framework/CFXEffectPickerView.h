/*
* Generated on Thursday, January 14, 2021 at 2:27:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <libobjc.A.dylib/JFXEffectPreviewManagerDelegate.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>

@protocol CFXEffectPickerViewDataSource, CFXEffectPickerViewDelegate;
@class UIImage, JFXEffectStaticPreviewOptions, JFXEffectPreviewManager, NSString;

@interface CFXEffectPickerView : UIView <UICollectionViewDataSource, JFXEffectPreviewManagerDelegate, UICollectionViewDelegateFlowLayout> {

	BOOL _continuousPreviewEnabled;
	BOOL _useCameraForContinuousPreview;
	BOOL _previewingIsWaitingForConfiguration;
	UIImage* _previewBackgroundImage;
	id<CFXEffectPickerViewDataSource> _dataSource;
	id<CFXEffectPickerViewDelegate> _delegate;
	JFXEffectStaticPreviewOptions* _staticPreviewOptions;
	JFXEffectPreviewManager* _previewManager;
	CGSize _cellSize;
	CGSize _thumbnailSize;

}

@property (nonatomic,retain) JFXEffectStaticPreviewOptions * staticPreviewOptions;                                     //@synthesize staticPreviewOptions=_staticPreviewOptions - In the implementation block
@property (assign,nonatomic) BOOL previewingIsWaitingForConfiguration;                                                 //@synthesize previewingIsWaitingForConfiguration=_previewingIsWaitingForConfiguration - In the implementation block
@property (nonatomic,retain) JFXEffectPreviewManager * previewManager;                                                 //@synthesize previewManager=_previewManager - In the implementation block
@property (assign,nonatomic) CGSize cellSize;                                                                          //@synthesize cellSize=_cellSize - In the implementation block
@property (assign,nonatomic) CGSize thumbnailSize;                                                                     //@synthesize thumbnailSize=_thumbnailSize - In the implementation block
@property (assign,getter=isContinuousPreviewEnabled,nonatomic) BOOL continuousPreviewEnabled;                          //@synthesize continuousPreviewEnabled=_continuousPreviewEnabled - In the implementation block
@property (nonatomic,retain) UIImage * previewBackgroundImage;                                                         //@synthesize previewBackgroundImage=_previewBackgroundImage - In the implementation block
@property (assign,getter=isUsingCameraForContinuousPreview,nonatomic) BOOL useCameraForContinuousPreview;              //@synthesize useCameraForContinuousPreview=_useCameraForContinuousPreview - In the implementation block
@property (assign,nonatomic,__weak) id<CFXEffectPickerViewDataSource> dataSource;                                      //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<CFXEffectPickerViewDelegate> delegate;                                          //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)setThumbnailSize:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<CFXEffectPickerViewDelegate>)delegate;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(id)collectionView;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(CGSize)cellSize;
-(id<CFXEffectPickerViewDataSource>)dataSource;
-(CGSize)thumbnailSize;
-(void)setDelegate:(id<CFXEffectPickerViewDelegate>)arg1 ;
-(void)setDataSource:(id<CFXEffectPickerViewDataSource>)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)reloadData;
-(void)setCellSize:(CGSize)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(id)collectionViewLayout;
-(id)contentView;
-(void)sharedInit;
-(void)startPreviewing;
-(void)stopPreviewing;
-(void)configureCell:(id)arg1 ;
-(void)subviewsDidLoad;
-(void)updatePreviewEffectsWhenReloadComplete;
-(void)didScrollCollectionView;
-(void)applyEffectAtCellIndex:(unsigned long long)arg1 ;
-(id)effectPickerNibName;
-(id)effectPickerCellNibName;
-(id)effectPickerCellReuseIdentifier;
-(void)didSelectItemAtCellIndex:(unsigned long long)arg1 ;
-(void)orientationDidChange;
-(void)didResizeCollectionViewToSize:(CGSize)arg1 ;
-(void)collectionView:(id)arg1 didResize:(CGSize)arg2 ;
-(JFXEffectPreviewManager *)previewManager;
-(BOOL)previewingIsWaitingForConfiguration;
-(void)setPreviewingIsWaitingForConfiguration:(BOOL)arg1 ;
-(void)setPreviewManager:(JFXEffectPreviewManager *)arg1 ;
-(BOOL)isContinuousPreviewEnabled;
-(BOOL)isUsingCameraForContinuousPreview;
-(UIImage *)previewBackgroundImage;
-(CGSize)previewSizeInPixels;
-(void)setStaticPreviewOptions:(JFXEffectStaticPreviewOptions *)arg1 ;
-(JFXEffectStaticPreviewOptions *)staticPreviewOptions;
-(void)updatePreviewEffects;
-(unsigned long long)effectIndexForCellIndex:(unsigned long long)arg1 ;
-(unsigned long long)numberOfCollectionViewItems;
-(void)effectDidLoadForCell:(id)arg1 effect:(id)arg2 ;
-(void)effectPreviewManager:(id)arg1 didUpdateContinousPreviewsForEffectIDs:(id)arg2 ;
-(void)setContinuousPreviewEnabled:(BOOL)arg1 ;
-(void)setUseCameraForContinuousPreview:(BOOL)arg1 ;
-(void)setPreviewBackgroundImage:(UIImage *)arg1 ;
@end

