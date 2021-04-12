/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


#import <PhotosUICore/PhotosUICore-Structs.h>
@class PXAssetReference;

@interface _PXAssetsSceneAnchor : NSObject {

	PXAssetReference* _assetReference;
	double _distance;
	CGPoint _anchorOrigin;

}

@property (nonatomic,readonly) PXAssetReference * assetReference;              //@synthesize assetReference=_assetReference - In the implementation block
@property (nonatomic,readonly) CGPoint anchorOrigin;                           //@synthesize anchorOrigin=_anchorOrigin - In the implementation block
@property (nonatomic,readonly) double distance;                                //@synthesize distance=_distance - In the implementation block
-(id)initWithAssetReference:(id)arg1 anchorOrigin:(CGPoint)arg2 distance:(double)arg3 ;
-(double)distance;
-(PXAssetReference *)assetReference;
-(CGPoint)anchorOrigin;
@end

