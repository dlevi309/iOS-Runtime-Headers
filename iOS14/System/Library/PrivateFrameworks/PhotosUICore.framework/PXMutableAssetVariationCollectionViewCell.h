/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

@class PXAssetVariationRenderResult, PXAssetVariationRenderProvider, UIImage, PXAssetVariationOption, PXAssetEditOperationManager, PXWidgetSpec, UIColor;


@protocol PXMutableAssetVariationCollectionViewCell <NSObject>
@property (nonatomic,retain) PXAssetVariationRenderResult * renderResult; 
@property (nonatomic,retain) PXAssetVariationRenderProvider * renderProvider; 
@property (nonatomic,retain) UIImage * placeholderImage; 
@property (nonatomic,retain) PXAssetVariationOption * variationOption; 
@property (nonatomic,retain) PXAssetEditOperationManager * editOperationManager; 
@property (nonatomic,retain) PXWidgetSpec * spec; 
@property (assign,nonatomic) long long assetVariationContentMode; 
@property (nonatomic,retain) UIColor * titleColor; 
@property (nonatomic,retain) UIColor * selectedTitleColor; 
@property (assign,getter=isPlaybackAllowed,nonatomic) BOOL playbackAllowed; 
@property (assign,nonatomic) double placeholderOverlayAlpha; 
@required
-(void)setSpec:(id)arg1;
-(UIColor *)titleColor;
-(void)setPlaybackAllowed:(BOOL)arg1;
-(PXWidgetSpec *)spec;
-(BOOL)isPlaybackAllowed;
-(PXAssetEditOperationManager *)editOperationManager;
-(void)setVariationOption:(id)arg1;
-(void)setAssetVariationContentMode:(long long)arg1;
-(void)setPlaceholderOverlayAlpha:(double)arg1;
-(void)setSelectedTitleColor:(id)arg1;
-(void)setRenderProvider:(id)arg1;
-(UIImage *)placeholderImage;
-(PXAssetVariationRenderResult *)renderResult;
-(void)setRenderResult:(id)arg1;
-(PXAssetVariationOption *)variationOption;
-(void)setEditOperationManager:(id)arg1;
-(long long)assetVariationContentMode;
-(UIColor *)selectedTitleColor;
-(double)placeholderOverlayAlpha;
-(PXAssetVariationRenderProvider *)renderProvider;
-(void)setPlaceholderImage:(id)arg1;
-(void)setTitleColor:(id)arg1;

@end

