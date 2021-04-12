/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXCMMActionPerformer.h>
#import <libobjc.A.dylib/PXCMMPhotoKitActionPerformer.h>

@class PXCMMPhotoKitSession;

@interface PXCMMPhotoKitSaveActionPerformer : PXCMMActionPerformer <PXCMMPhotoKitActionPerformer>

@property (nonatomic,readonly) PXCMMPhotoKitSession * session; 
+(id)sharedSavingWorkerQueue;
-(BOOL)isCancellable;
-(id)createActionProgress;
-(void)_completeSavingForAssets:(id)arg1 count:(long long)arg2 ;
-(void)performUserInteractionTask;
@end

