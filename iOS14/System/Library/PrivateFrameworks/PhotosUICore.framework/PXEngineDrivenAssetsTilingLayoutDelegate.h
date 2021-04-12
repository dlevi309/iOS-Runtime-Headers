/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@protocol PXEngineDrivenAssetsTilingLayoutDelegate <NSObject>
@optional
-(void)engineDrivenLayoutReferenceSizeDidChange:(id)arg1;
-(double)engineDrivenLayout:(id)arg1 zPositionForItemAtIndexPath:(PXSimpleIndexPath)arg2;
-(double)engineDrivenLayout:(id)arg1 aspectRatioForItemAtIndexPath:(PXSimpleIndexPath)arg2;
-(CGRect*)engineDrivenLayout:(id)arg1 contentsRectForItemAtIndexPath:(PXSimpleIndexPath)arg2 forAspectRatio:(double)arg3;
-(CGSize*)engineDrivenLayout:(id)arg1 playButtonSizeForItemAtIndexPath:(PXSimpleIndexPath)arg2 contentTileSize:(CGSize)arg3;

@end

