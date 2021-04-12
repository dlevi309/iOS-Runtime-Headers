/*
* Generated on Thursday, January 14, 2021 at 2:22:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PUAssetActionPerformer.h>

@class PUActivityProgressController;

@interface PUAssetExplorerReviewScreenActionPerformer : PUAssetActionPerformer {

	/*^block*/id _performUserInteractionTaskBlock;
	PUActivityProgressController* __requestProgressController;

}

@property (setter=_setRequestProgressController:,nonatomic,retain) PUActivityProgressController * _requestProgressController;              //@synthesize _requestProgressController=__requestProgressController - In the implementation block
@property (nonatomic,copy) id performUserInteractionTaskBlock;                                                                             //@synthesize performUserInteractionTaskBlock=_performUserInteractionTaskBlock - In the implementation block
+(BOOL)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2 ;
+(BOOL)shouldEnableOnAsset:(id)arg1 inAssetCollection:(id)arg2 ;
-(void)performUserInteractionTask;
-(void)setPerformUserInteractionTaskBlock:(id)arg1 ;
-(void)executePerformUserInteractionTaskBlock;
-(void)requestReviewAssetForDisplayAsset:(id)arg1 reviewAssetProvider:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_setupProgressControllerForProgress:(id)arg1 ;
-(PUActivityProgressController *)_requestProgressController;
-(void)_handleReviewAssetRequestCompletedWithSuccess:(BOOL)arg1 canceled:(BOOL)arg2 error:(id)arg3 reviewAsset:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)_handleProgressControllerCanceled:(id)arg1 ;
-(void)_showFailedReviewAssetRequestAlert;
-(id)performUserInteractionTaskBlock;
-(void)_setRequestProgressController:(id)arg1 ;
@end

