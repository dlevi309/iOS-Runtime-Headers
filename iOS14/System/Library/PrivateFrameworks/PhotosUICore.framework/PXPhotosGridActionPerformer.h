/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXActionPerformer.h>

@class PXPhotosViewModel;

@interface PXPhotosGridActionPerformer : PXActionPerformer {

	PXPhotosViewModel* _viewModel;

}

@property (nonatomic,readonly) PXPhotosViewModel * viewModel;              //@synthesize viewModel=_viewModel - In the implementation block
+(BOOL)canPerformActionType:(id)arg1 withViewModel:(id)arg2 ;
-(PXPhotosViewModel *)viewModel;
-(id)initWithViewModel:(id)arg1 actionType:(id)arg2 ;
-(id)initWithActionType:(id)arg1 ;
-(BOOL)canPerformWithActivityItems:(id)arg1 forActivity:(id)arg2 ;
@end

