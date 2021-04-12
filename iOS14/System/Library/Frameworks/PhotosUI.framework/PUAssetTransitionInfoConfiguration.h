/*
* Generated on Thursday, January 14, 2021 at 2:22:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

@class UIView, UIImage, NSArray, PUPhotoViewContentHelper, PXImageLayerModulator;


@protocol PUAssetTransitionInfoConfiguration <NSObject>
@property (nonatomic,retain) UIView * snapshotView; 
@property (nonatomic,retain) UIImage * image; 
@property (assign,nonatomic) SCD_Struct_PH4 seekTime; 
@property (assign,nonatomic) CGRect frame; 
@property (assign,nonatomic) BOOL allowAutoPlay; 
@property (assign,nonatomic) double cornerRadius; 
@property (nonatomic,retain) id<PUDisplayAsset> asset; 
@property (nonatomic,copy) NSArray * badgeTransitionInfos; 
@property (nonatomic,retain) PUPhotoViewContentHelper * contentHelper; 
@property (nonatomic,retain) PXImageLayerModulator * imageLayerModulator; 
@required
-(PXImageLayerModulator *)imageLayerModulator;
-(void)setAsset:(id)arg1;
-(void)setImageLayerModulator:(id)arg1;
-(SCD_Struct_PH4)seekTime;
-(UIView *)snapshotView;
-(NSArray *)badgeTransitionInfos;
-(void)setImage:(id)arg1;
-(id<PUDisplayAsset>)asset;
-(CGRect)frame;
-(UIImage *)image;
-(void)setSnapshotView:(id)arg1;
-(double)cornerRadius;
-(void)setFrame:(CGRect)arg1;
-(void)setSeekTime:(SCD_Struct_PH4)arg1;
-(void)setAllowAutoPlay:(BOOL)arg1;
-(void)setBadgeTransitionInfos:(id)arg1;
-(void)setContentHelper:(id)arg1;
-(BOOL)allowAutoPlay;
-(void)setCornerRadius:(double)arg1;
-(PUPhotoViewContentHelper *)contentHelper;

@end

