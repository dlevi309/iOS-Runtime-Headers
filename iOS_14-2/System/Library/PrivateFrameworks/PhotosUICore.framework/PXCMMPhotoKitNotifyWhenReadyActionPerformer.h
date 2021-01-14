/*
* Generated on Thursday, January 14, 2021 at 2:22:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXCMMActionPerformer.h>
#import <libobjc.A.dylib/PXCMMPhotoKitActionPerformer.h>

@class PXCMMPhotoKitSession;

@interface PXCMMPhotoKitNotifyWhenReadyActionPerformer : PXCMMActionPerformer <PXCMMPhotoKitActionPerformer>

@property (nonatomic,readonly) PXCMMPhotoKitSession * session; 
-(BOOL)_needsToNotifyForMomentShare:(id)arg1 localAssetCount:(long long)arg2 ;
-(void)performBackgroundTask;
@end

