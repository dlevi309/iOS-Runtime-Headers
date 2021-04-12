/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXGPPTViewController.h>
#import <libobjc.A.dylib/PXGDisplayAssetSource.h>
#import <libobjc.A.dylib/PXGSolidColorSource.h>
#import <libobjc.A.dylib/PXGSublayoutProvider.h>
#import <libobjc.A.dylib/PXGDisplayAssetPixelBufferSourcesProvider.h>

@protocol OS_dispatch_queue;
@class UIColor, PXAssetsDataSource, NSObject, NSMapTable, NSString;

@interface PXGPPTVideoPlaybackViewController : PXGPPTViewController <PXGDisplayAssetSource, PXGSolidColorSource, PXGSublayoutProvider, PXGDisplayAssetPixelBufferSourcesProvider> {

	UIColor* _spriteColor;
	long long _numberOfColumns;
	PXAssetsDataSource* _dataSource;
	NSObject*<OS_dispatch_queue> _pixelBufferSources_queue;
	NSMapTable* _pixelBufferSourcesByDisplayAsset;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)displayAssetFetchResultForSpritesInRange:(PXGSpriteIndexRange)arg1 inLayout:(id)arg2 ;
-(id)initWithLayout:(id)arg1 ;
-(id)layout:(id)arg1 createSublayoutAtIndex:(long long)arg2 ;
-(id)displayAssetRequestObserverForSpritesInRange:(PXGSpriteIndexRange)arg1 inLayout:(id)arg2 ;
-(BOOL)shouldDisplayPreviousNonnullPixelBufferForPixelBufferSource:(id)arg1 ;
-(unsigned long long)supportedDisplayAssetPresentationStylesInLayout:(id)arg1 ;
-(id)pixelBufferSourceForDisplayAsset:(id)arg1 mediaProvider:(id)arg2 spriteReference:(id)arg3 ;
-(unsigned long long)desiredPlaceholderStyleInLayout:(id)arg1 ;
-(CGSize)layout:(id)arg1 estimatedContentSizeForSublayoutAtIndex:(long long)arg2 referenceSize:(CGSize)arg3 ;
-(CGSize)minSpriteSizeForPresentationStyle:(unsigned long long)arg1 ;
-(id)colorAtIndex:(unsigned)arg1 inLayout:(id)arg2 ;
-(void)recyclePixelBufferSourceForDisplayAssets:(id)arg1 ;
-(void)viewDidLoad;
-(id)initWithAssetsDataSource:(id)arg1 ;
@end

