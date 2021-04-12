/*
* Generated on Thursday, January 14, 2021 at 2:22:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

@class NSString, PHAsset;


@protocol PXPhotoKitAdjustedDisplayAsset <PXDisplayAsset>
@property (nonatomic,readonly) BOOL wantsAdjustments; 
@property (nonatomic,readonly) NSString * adjustedContentIdentifier; 
@property (nonatomic,readonly) PHAsset * photoKitAsset; 
@required
-(PHAsset *)photoKitAsset;
-(id)applyAdjustmentsToCompositionController:(id)arg1 renderer:(id)arg2;
-(BOOL)wantsAdjustments;
-(NSString *)adjustedContentIdentifier;

@end

