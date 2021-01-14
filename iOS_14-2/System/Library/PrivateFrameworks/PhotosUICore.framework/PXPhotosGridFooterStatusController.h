/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PXCloudQuotaControllerDelegate.h>

@protocol PXPhotosGridFooterStatusControllerDelegate;
@class PXPhotosViewModel, PXAssetsDataSourceCountsController, PXCPLUIStatusProvider, PXCloudQuotaController, PXContentFilterFooterController, NSString;

@interface PXPhotosGridFooterStatusController : NSObject <PXChangeObserver, PXCloudQuotaControllerDelegate> {

	PXPhotosViewModel* _viewModel;
	PXAssetsDataSourceCountsController* _countsController;
	PXCPLUIStatusProvider* _cplUIStatusProvider;
	PXCloudQuotaController* _cloudQuotaController;
	PXContentFilterFooterController* _filterFooterController;
	id<PXPhotosGridFooterStatusControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PXPhotosGridFooterStatusControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_systemPhotoLibraryDidChange;
-(id)_createCPLUIStatusProvider;
-(void)_updateHasImportantInformation;
-(void)setCplUIStatusProvider:(id)arg1 ;
-(id)init;
-(void)viewDidAppear;
-(id<PXPhotosGridFooterStatusControllerDelegate>)delegate;
-(id)initWithViewModel:(id)arg1 itemsCountsController:(id)arg2 ;
-(void)cloudQuotaController:(id)arg1 informationBannerDidChange:(id)arg2 ;
-(void)setDelegate:(id<PXPhotosGridFooterStatusControllerDelegate>)arg1 ;
-(id)presentingViewControllerForCloudQuotaController:(id)arg1 ;
-(void)_refreshCPLUIStatusProvider;
-(void)_updateFooterViewModel;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

