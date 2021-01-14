/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXSectionedObjectReference.h>
#import <libobjc.A.dylib/PXAssetReferenceProtocol.h>

@class NSString;

@interface PXAssetReference : PXSectionedObjectReference <PXAssetReferenceProtocol>

@property (nonatomic,readonly) id asset; 
@property (nonatomic,readonly) id assetCollection; 
@property (nonatomic,readonly) PXSimpleIndexPath simpleIndexPath; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<PXDisplayAsset> asset; 
@property (nonatomic,readonly) id<PXDisplayAssetCollection> assetCollection; 
-(id)asset;
-(id)assetCollection;
-(PXSimpleIndexPath)simpleIndexPath;
@end

