/*
* Generated on Monday, March 1, 2021 at 2:34:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <libobjc.A.dylib/JTEffectPreviewManagerDelegate.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>

@protocol CFXEffectPickerViewDataSource, CFXEffectPickerViewDelegate;
@class UIImage, JTEffectPreviewManager, NSString;

@interface CFXEffectPickerView : UIView <UICollectionViewDataSource, JTEffectPreviewManagerDelegate, UICollectionViewDelegateFlowLayout> {

	BOOL _continuousPreviewEnabled;
	BOOL _useCameraForContinuousPreview;
	BOOL _previewingIsWaitingForConfiguration;
	UIImage* _previewBackgroundImage;
	id<CFXEffectPickerViewDataSource> _dataSource;
	id<CFXEffectPickerViewDelegate> _delegate;
	JTEffectPreviewManager* _previewManager;
	CGSize _cellSize;
	CGSize _thumbnailSize;

}

@property (assign,nonatomic) BOOL previewingIsWaitingForConfiguration;                                                 //@synthesize previewingIsWaitingForConfiguration=_previewingIsWaitingForConfiguration - In the implementation block
@property (nonatomic,retain) JTEffectPreviewManager * previewManager;                                                  //@synthesize previewManager=_previewManager - In the implementation block
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
-(id)initWithCoder:(id)arg1 ;
-(id<CFXEffectPickerViewDelegate>)delegate;
-(void)setDelegate:(id<CFXEffectPickerViewDelegate>)arg1 ;
-(id<CFXEffectPickerViewDataSource>)dataSource;
-(void)setDataSource:(id<CFXEffectPickerViewDataSource>)arg1 ;
-(CGSize)cellSize;
-(id)contentView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(id)collectionView;
-(void)reloadData;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(id)collectionViewLayout;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(CGSize)thumbnailSize;
-(void)setThumbnailSize:(CGSize)arg1 ;
-(void)setCellSize:(CGSize)arg1 ;
-(void)startPreviewing;
-(void)stopPreviewing;
-(void)sharedInit;
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
-(JTEffectPreviewManager *)previewManager;
-(BOOL)previewingIsWaitingForConfiguration;
-(void)setPreviewingIsWaitingForConfiguration:(BOOL)arg1 ;
-(void)setPreviewManager:(JTEffectPreviewManager *)arg1 ;
-(UIImage *)previewBackgroundImage;
-(BOOL)isContinuousPreviewEnabled;
-(BOOL)isUsingCameraForContinuousPreview;
-(void)updatePreviewEffects;
-(unsigned long long)effectIndexForCellIndex:(unsigned long long)arg1 ;
-(unsigned long long)numberOfCollectionViewItems;
-(void)effectDidLoadForCell:(id)arg1 effect:(id)arg2 ;
-(void)effectPreviewManager:(id)arg1 didUpdatePreviewsFor:(id)arg2 ;
-(void)setContinuousPreviewEnabled:(BOOL)arg1 ;
-(void)setUseCameraForContinuousPreview:(BOOL)arg1 ;
-(void)setPreviewBackgroundImage:(UIImage *)arg1 ;
@end

