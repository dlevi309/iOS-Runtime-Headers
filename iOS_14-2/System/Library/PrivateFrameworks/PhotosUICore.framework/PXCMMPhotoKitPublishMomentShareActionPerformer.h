/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXCMMPublishActionPerformer.h>

@class UIAlertController, PHMomentShare, NSDate;

@interface PXCMMPhotoKitPublishMomentShareActionPerformer : PXCMMPublishActionPerformer {

	UIAlertController* _progressAlertController;
	int _thumbnailRequestID;
	int _previewRequestID;
	PHMomentShare* _momentShare;
	BOOL _didFinalize;
	NSDate* _initialStartDate;
	NSDate* _previewRequestStartDate;
	NSDate* _creationRequestStartDate;
	NSDate* _publishStartDate;
	NSDate* _finishedDate;

}
-(void)_requestPreviewImagesForAsset:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
-(id)_keyAssetForMomentShareCreationWithAssets:(id)arg1 ;
-(void)_presentInternalSharingAlert;
-(void)_createMomentShare;
-(void)_createMomentShareWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_creatingMomentShareDidCompleteWithMomentShare:(id)arg1 error:(id)arg2 ;
-(void)_presentBudgetOverridePromptForMomentShare:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_budgetOverridePromptForMomentShare:(id)arg1 completedWithOutcome:(BOOL)arg2 error:(id)arg3 ;
-(void)_setupSharingProgressController;
-(void)_publishMomentShare:(id)arg1 ;
-(void)_publishMomentShare:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_publishingMomentShare:(id)arg1 didCompleteWithShareURL:(id)arg2 error:(id)arg3 ;
-(void)_acceptSuggestion:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_finalizePublishWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(void)_presentAlertControllerForCurrentCPLStateIfNeededWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_handleSharingProgressCancellation;
-(void)_performCleanupIfNeeded;
-(void)performUserInteractionTask;
@end

