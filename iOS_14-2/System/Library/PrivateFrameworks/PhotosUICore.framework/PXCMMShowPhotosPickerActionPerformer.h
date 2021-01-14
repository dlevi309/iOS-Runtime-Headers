/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXCMMActionPerformer.h>

@protocol PXGridPresentation;
@interface PXCMMShowPhotosPickerActionPerformer : PXCMMActionPerformer {

	id<PXGridPresentation> _gridPresentation;

}

@property (nonatomic,readonly) id<PXGridPresentation> gridPresentation;              //@synthesize gridPresentation=_gridPresentation - In the implementation block
-(id)performActionWithSession:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)performPhotosPickerActionWithSession:(id)arg1 gridPresentation:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id<PXGridPresentation>)gridPresentation;
@end

