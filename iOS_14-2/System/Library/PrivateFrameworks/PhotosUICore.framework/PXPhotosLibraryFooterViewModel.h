/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXFooterViewModel.h>
#import <libobjc.A.dylib/PXCloudQuotaControllerDelegate.h>
#import <libobjc.A.dylib/PXAssetsDataSourceManagerObserver.h>

@protocol PXPhotosLibraryFooterViewModelPresentationDelegate;
@class NSArray, PXPhotoKitAssetsDataSourceManager, PXCPLUIStatusProvider, PXCloudQuotaController, NSString;

@interface PXPhotosLibraryFooterViewModel : PXFooterViewModel <PXCloudQuotaControllerDelegate, PXAssetsDataSourceManagerObserver> {

	NSArray* _syncProgressAlbums;
	id<PXPhotosLibraryFooterViewModelPresentationDelegate> _presentingDelegate;
	PXPhotoKitAssetsDataSourceManager* _assetsDataSourceManager;
	PXCPLUIStatusProvider* _cplUIStatusProvider;
	PXCloudQuotaController* _cloudQuotaController;

}

@property (nonatomic,readonly) PXPhotoKitAssetsDataSourceManager * assetsDataSourceManager;                                 //@synthesize assetsDataSourceManager=_assetsDataSourceManager - In the implementation block
@property (nonatomic,readonly) NSArray * syncProgressAlbums;                                                                //@synthesize syncProgressAlbums=_syncProgressAlbums - In the implementation block
@property (nonatomic,retain) PXCPLUIStatusProvider * cplUIStatusProvider;                                                   //@synthesize cplUIStatusProvider=_cplUIStatusProvider - In the implementation block
@property (nonatomic,retain) PXCloudQuotaController * cloudQuotaController;                                                 //@synthesize cloudQuotaController=_cloudQuotaController - In the implementation block
@property (assign,nonatomic,__weak) id<PXPhotosLibraryFooterViewModelPresentationDelegate> presentingDelegate;              //@synthesize presentingDelegate=_presentingDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<PXPhotosLibraryFooterViewModelPresentationDelegate>)presentingDelegate;
-(PXPhotoKitAssetsDataSourceManager *)assetsDataSourceManager;
-(void)setCplUIStatusProvider:(PXCPLUIStatusProvider *)arg1 ;
-(id)init;
-(id)initWithDataSource:(id)arg1 ;
-(void)setPresentingDelegate:(id<PXPhotosLibraryFooterViewModelPresentationDelegate>)arg1 ;
-(PXCPLUIStatusProvider *)cplUIStatusProvider;
-(void)cloudQuotaController:(id)arg1 informationBannerDidChange:(id)arg2 ;
-(void)_updateExposedProperties;
-(NSArray *)syncProgressAlbums;
-(PXCloudQuotaController *)cloudQuotaController;
-(id)presentingViewControllerForCloudQuotaController:(id)arg1 ;
-(void)setCloudQuotaController:(PXCloudQuotaController *)arg1 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

