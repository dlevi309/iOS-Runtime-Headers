/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>
#import <libobjc.A.dylib/PXMutableAssetVariationCollectionViewCell.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PXAssetEditOperationManagerObserver.h>

@class PXAssetVariationRenderResult, PXAssetVariationRenderProvider, UIImage, PXAssetVariationOption, PXAssetEditOperationManager, PXWidgetSpec, UIColor, UILabel, UIView, PXLoadingFailureBadgeView, PXRoundProgressView, NSError, NSProgress, NSString;

@interface PXAssetVariationCollectionViewCell : UICollectionViewCell <PXMutableAssetVariationCollectionViewCell, PXChangeObserver, PXAssetEditOperationManagerObserver> {

	BOOL _isPerformingChanges;
	BOOL _isPerformingUpdates;
	struct {
		BOOL titleLabel;
		BOOL variationView;
		BOOL progressView;
		BOOL selectedView;
		BOOL error;
		BOOL failureView;
		BOOL renderProgress;
	}  _needsUpdateFlags;
	UILabel* _titleLabel;
	UIView* _backgroundView;
	UIView* _variationView;
	UIView* _selectedDecorationView;
	PXLoadingFailureBadgeView* _failureView;
	PXRoundProgressView* _loadingProgressView;
	BOOL _playbackAllowed;
	PXAssetVariationRenderProvider* _renderProvider;
	PXAssetVariationRenderResult* _renderResult;
	PXAssetVariationOption* _variationOption;
	PXAssetEditOperationManager* _editOperationManager;
	PXWidgetSpec* _spec;
	NSError* _error;
	UIImage* _placeholderImage;
	UIColor* _titleColor;
	UIColor* _selectedTitleColor;
	double _placeholderOverlayAlpha;
	long long _assetVariationContentMode;
	NSProgress* __renderProgress;

}

@property (setter=_setError:,nonatomic,retain) NSError * error;                                    //@synthesize error=_error - In the implementation block
@property (setter=_setRenderProgress:,nonatomic,retain) NSProgress * _renderProgress;              //@synthesize _renderProgress=__renderProgress - In the implementation block
@property (nonatomic,readonly) PXAssetVariationRenderProvider * renderProvider;                    //@synthesize renderProvider=_renderProvider - In the implementation block
@property (nonatomic,readonly) PXAssetVariationRenderResult * renderResult;                        //@synthesize renderResult=_renderResult - In the implementation block
@property (nonatomic,readonly) PXAssetVariationOption * variationOption;                           //@synthesize variationOption=_variationOption - In the implementation block
@property (nonatomic,readonly) PXAssetEditOperationManager * editOperationManager;                 //@synthesize editOperationManager=_editOperationManager - In the implementation block
@property (nonatomic,readonly) PXWidgetSpec * spec;                                                //@synthesize spec=_spec - In the implementation block
@property (getter=isPlaybackAllowed,nonatomic,readonly) BOOL playbackAllowed;                      //@synthesize playbackAllowed=_playbackAllowed - In the implementation block
@property (nonatomic,readonly) UIImage * placeholderImage;                                         //@synthesize placeholderImage=_placeholderImage - In the implementation block
@property (nonatomic,readonly) UIColor * titleColor;                                               //@synthesize titleColor=_titleColor - In the implementation block
@property (nonatomic,readonly) UIColor * selectedTitleColor;                                       //@synthesize selectedTitleColor=_selectedTitleColor - In the implementation block
@property (nonatomic,readonly) double placeholderOverlayAlpha;                                     //@synthesize placeholderOverlayAlpha=_placeholderOverlayAlpha - In the implementation block
@property (nonatomic,readonly) long long assetVariationContentMode;                                //@synthesize assetVariationContentMode=_assetVariationContentMode - In the implementation block
@property (nonatomic,readonly) double distanceBetweenLastBaselineAndBottom; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)placeholderFiltersWithOverlayWhite:(double)arg1 ;
+(void)preloadResources;
-(void)setSpec:(PXWidgetSpec *)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(UIColor *)titleColor;
-(void)tintColorDidChange;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_updateIfNeeded;
-(void)prepareForReuse;
-(void)setPlaybackAllowed:(BOOL)arg1 ;
-(void)_setError:(id)arg1 ;
-(NSError *)error;
-(PXWidgetSpec *)spec;
-(BOOL)isPlaybackAllowed;
-(void)layoutSubviews;
-(void)assetEditOperationManager:(id)arg1 didChangeEditOperationsPerformedOnAsset:(id)arg2 context:(void*)arg3 ;
-(PXAssetEditOperationManager *)editOperationManager;
-(void)setVariationOption:(PXAssetVariationOption *)arg1 ;
-(void)setAssetVariationContentMode:(long long)arg1 ;
-(void)setPlaceholderOverlayAlpha:(double)arg1 ;
-(void)setSelectedTitleColor:(UIColor *)arg1 ;
-(void)setRenderProvider:(PXAssetVariationRenderProvider *)arg1 ;
-(UIImage *)placeholderImage;
-(PXAssetVariationRenderResult *)renderResult;
-(void)setRenderResult:(PXAssetVariationRenderResult *)arg1 ;
-(PXAssetVariationOption *)variationOption;
-(void)setEditOperationManager:(PXAssetEditOperationManager *)arg1 ;
-(long long)assetVariationContentMode;
-(UIColor *)selectedTitleColor;
-(double)placeholderOverlayAlpha;
-(void)_PXAssetVariationCollectionViewCellCommonInit;
-(id)loadVariationView;
-(void)updateVariationView;
-(CGSize)sizeThatFitsPreviewSize:(CGSize)arg1 ;
-(double)distanceBetweenPreviewBottomAndLastBaseline;
-(double)distanceBetweenLastBaselineAndBottom;
-(void)_invalidateRenderProgress;
-(void)_updateRenderProgressIfNeeded;
-(void)_invalidateError;
-(void)_updateErrorIfNeeded;
-(void)_invalidateSelectedView;
-(void)_updateSelectedViewIfNeeded;
-(void)_invalidateTitleLabel;
-(void)_updateTitleLabelIfNeeded;
-(void)_invalidateVariationView;
-(void)_updateVariationViewIfNeeded;
-(void)_invalidateProgressView;
-(void)_updateProgressViewIfNeeded;
-(void)_invalidateFailureView;
-(void)_updateFailureViewIfNeeded;
-(void)_setRenderProgress:(id)arg1 ;
-(NSProgress *)_renderProgress;
-(BOOL)_needsUpdate;
-(id)initWithCoder:(id)arg1 ;
-(PXAssetVariationRenderProvider *)renderProvider;
-(void)setPlaceholderImage:(UIImage *)arg1 ;
-(void)_setNeedsUpdate;
-(void)updateError;
-(void)performChanges:(/*^block*/id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)dealloc;
-(void)setTitleColor:(UIColor *)arg1 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

