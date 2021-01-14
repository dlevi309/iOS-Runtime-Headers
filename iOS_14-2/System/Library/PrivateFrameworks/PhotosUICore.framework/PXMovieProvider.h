/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@protocol PXMovieProviderDelegate;
@class PHAssetCollection, PHAsset, UIViewController, PXDiagnosticsItemProvider;

@interface PXMovieProvider : NSObject {

	id<PXMovieProviderDelegate> _delegate;
	PHAssetCollection* _assetCollection;
	PHAsset* _keyAsset;

}

@property (assign,nonatomic,__weak) id<PXMovieProviderDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL canPlayMovie; 
@property (nonatomic,readonly) PHAssetCollection * assetCollection;                              //@synthesize assetCollection=_assetCollection - In the implementation block
@property (nonatomic,readonly) PHAsset * keyAsset;                                               //@synthesize keyAsset=_keyAsset - In the implementation block
@property (nonatomic,readonly) UIViewController * movieViewController; 
@property (nonatomic,readonly) PXDiagnosticsItemProvider * diagnosticsItemProvider; 
-(PHAsset *)keyAsset;
-(id)init;
-(id<PXMovieProviderDelegate>)delegate;
-(void)setDelegate:(id<PXMovieProviderDelegate>)arg1 ;
-(PHAssetCollection *)assetCollection;
-(id)initWithAssetCollection:(id)arg1 keyAsset:(id)arg2 ;
-(UIViewController *)movieViewController;
-(BOOL)canPlayMovie;
-(PXDiagnosticsItemProvider *)diagnosticsItemProvider;
-(BOOL)ppt_runTest:(id)arg1 options:(id)arg2 ;
-(id)initWithAssetCollection:(id)arg1 ;
@end

