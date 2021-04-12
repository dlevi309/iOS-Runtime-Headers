/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@protocol PXCuratedLibrarySkimmingControllerDelegate <NSObject>
@required
-(id)assetCollectionReferenceToShowSkimmingHints:(id)arg1;
-(id)assetCollectionReferenceForSkimmingSlideshow:(id)arg1;
-(void)skimmingController:(id)arg1 willShowSkimmingHintsForAssetCollectionReference:(id)arg2 animationDuration:(double)arg3;
-(void)skimmingController:(id)arg1 willStartSkimmingAssetCollectionReference:(id)arg2 animationDuration:(double)arg3;
-(void)skimmingController:(id)arg1 willHideSkimmingHintsForAssetCollectionReference:(id)arg2 animationDuration:(double)arg3;
-(void)skimmingControllerDidStopSkimming:(id)arg1 animationDuration:(double)arg2;

@end

