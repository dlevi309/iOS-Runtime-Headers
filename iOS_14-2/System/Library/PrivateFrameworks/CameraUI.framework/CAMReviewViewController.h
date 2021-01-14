/*
* Generated on Thursday, January 14, 2021 at 2:26:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PUAssetExplorerReviewScreenViewControllerDelegate.h>
#import <libobjc.A.dylib/CAMCameraReviewViewController.h>

@protocol CAMCameraReviewDelegate;
@class NSArray, PUReviewDataSource, PUReviewAssetsDataSourceManager, PUReviewAssetsMediaProvider, PUAssetExplorerReviewScreenViewController, NSString;

@interface CAMReviewViewController : UIViewController <PUAssetExplorerReviewScreenViewControllerDelegate, CAMCameraReviewViewController> {

	id<CAMCameraReviewDelegate> _reviewDelegate;
	NSArray* __initialAssets;
	PUReviewDataSource* __reviewDataSource;
	PUReviewAssetsDataSourceManager* __internalReviewDataSourceManager;
	PUReviewAssetsMediaProvider* __internalReviewMediaProvider;
	PUAssetExplorerReviewScreenViewController* __internalReviewViewController;

}

@property (nonatomic,readonly) NSArray * _initialAssets;                                                               //@synthesize _initialAssets=__initialAssets - In the implementation block
@property (nonatomic,readonly) PUReviewDataSource * _reviewDataSource;                                                 //@synthesize _reviewDataSource=__reviewDataSource - In the implementation block
@property (nonatomic,readonly) PUReviewAssetsDataSourceManager * _internalReviewDataSourceManager;                     //@synthesize _internalReviewDataSourceManager=__internalReviewDataSourceManager - In the implementation block
@property (nonatomic,readonly) PUReviewAssetsMediaProvider * _internalReviewMediaProvider;                             //@synthesize _internalReviewMediaProvider=__internalReviewMediaProvider - In the implementation block
@property (nonatomic,readonly) PUAssetExplorerReviewScreenViewController * _internalReviewViewController;              //@synthesize _internalReviewViewController=__internalReviewViewController - In the implementation block
@property (assign,nonatomic,__weak) id<CAMCameraReviewDelegate> reviewDelegate;                                        //@synthesize reviewDelegate=_reviewDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)assetExplorerReviewScreenViewControllerDidPressRetake:(id)arg1 ;
-(void)assetExplorerReviewScreenViewController:(id)arg1 didPerformCompletionAction:(unsigned long long)arg2 withSelectedAssetUUIDs:(id)arg3 livePhotoDisabledAssetUUIDs:(id)arg4 substituteAssetsByUUID:(id)arg5 ;
-(void)assetExplorerReviewScreenViewControllerDidPressCancel:(id)arg1 ;
-(BOOL)assetExplorerReviewScreenViewController:(id)arg1 shouldEnableActionType:(unsigned long long)arg2 onAsset:(id)arg3 inAssetCollection:(id)arg4 ;
-(BOOL)assetExplorerReviewScreenViewController:(id)arg1 canPerformActionType:(unsigned long long)arg2 onAsset:(id)arg3 inAssetCollection:(id)arg4 ;
-(id<CAMCameraReviewDelegate>)reviewDelegate;
-(void)setReviewDelegate:(id<CAMCameraReviewDelegate>)arg1 ;
-(PUReviewDataSource *)_reviewDataSource;
-(id)initWithAssets:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(PUReviewAssetsDataSourceManager *)_internalReviewDataSourceManager;
-(PUReviewAssetsMediaProvider *)_internalReviewMediaProvider;
-(PUAssetExplorerReviewScreenViewController *)_internalReviewViewController;
-(NSArray *)_initialAssets;
@end

