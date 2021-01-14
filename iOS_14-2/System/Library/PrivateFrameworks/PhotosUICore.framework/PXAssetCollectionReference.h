/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXSectionedObjectReference.h>

@class PXAssetReference;

@interface PXAssetCollectionReference : PXSectionedObjectReference {

	PXAssetReference* _keyAssetReference;

}

@property (nonatomic,readonly) id<PXDisplayAssetCollection> assetCollection; 
@property (nonatomic,readonly) PXAssetReference * keyAssetReference;                      //@synthesize keyAssetReference=_keyAssetReference - In the implementation block
-(id)initWithAssetCollection:(id)arg1 keyAssetReference:(id)arg2 indexPath:(PXSimpleIndexPath)arg3 ;
-(PXAssetReference *)keyAssetReference;
-(id<PXDisplayAssetCollection>)assetCollection;
@end

