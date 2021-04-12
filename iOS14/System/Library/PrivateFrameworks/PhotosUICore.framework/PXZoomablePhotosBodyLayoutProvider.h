/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PXPhotosSectionBodyLayoutProvider.h>

@protocol PXPhotosSectionBodyLayoutProviderInvalidationDelegate;
@class PXZoomablePhotosLayout, PXPhotosViewModel, PXZoomablePhotosViewModel, NSString;

@interface PXZoomablePhotosBodyLayoutProvider : NSObject <PXChangeObserver, PXPhotosSectionBodyLayoutProvider> {

	PXZoomablePhotosLayout* _zoomablePhotosLayout;
	id<PXPhotosSectionBodyLayoutProviderInvalidationDelegate> invalidationDelegate;
	PXPhotosViewModel* _viewModel;
	PXZoomablePhotosViewModel* _zoomablePhotosViewModel;

}

@property (nonatomic,readonly) PXZoomablePhotosViewModel * zoomablePhotosViewModel;                                              //@synthesize zoomablePhotosViewModel=_zoomablePhotosViewModel - In the implementation block
@property (nonatomic,readonly) PXPhotosViewModel * viewModel;                                                                    //@synthesize viewModel=_viewModel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<PXPhotosSectionBodyLayoutProviderInvalidationDelegate> invalidationDelegate; 
-(id)initWithViewModel:(id)arg1 ;
-(id)init;
-(PXPhotosViewModel *)viewModel;
-(void)_updateZoomableViewModelWithChanges:(unsigned long long)arg1 ;
-(void)_configureZoomableLayoutDecorations:(id)arg1 fromAssetSectionLayout:(id)arg2 ;
-(PXZoomablePhotosViewModel *)zoomablePhotosViewModel;
-(id)createInteractionForView:(id)arg1 ;
-(void)setInvalidationDelegate:(id<PXPhotosSectionBodyLayoutProviderInvalidationDelegate>)arg1 ;
-(BOOL)shouldPreventFaultOutOfBodyLayout:(id)arg1 inAssetSectionLayout:(id)arg2 ;
-(void)_updatePhotosViewModelWithChanges:(unsigned long long)arg1 ;
-(void)configureSectionBodyLayout:(id)arg1 inAssetSectionLayout:(id)arg2 forSectionedLayout:(id)arg3 ;
-(id<PXPhotosSectionBodyLayoutProviderInvalidationDelegate>)invalidationDelegate;
-(id)createSectionBodyLayoutForSectionedLayout:(id)arg1 dataSource:(id)arg2 sectionIndexPath:(PXSimpleIndexPath)arg3 spec:(id)arg4 outWantsDecoration:(BOOL*)arg5 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

