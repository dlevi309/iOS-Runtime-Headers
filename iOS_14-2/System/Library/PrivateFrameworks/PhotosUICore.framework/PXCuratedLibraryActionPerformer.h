/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXActionPerformer.h>

@class PXCuratedLibraryViewModel;

@interface PXCuratedLibraryActionPerformer : PXActionPerformer {

	PXCuratedLibraryViewModel* _viewModel;
	long long _actionZoomLevel;

}

@property (nonatomic,readonly) PXCuratedLibraryViewModel * viewModel;              //@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,readonly) long long actionZoomLevel;                          //@synthesize actionZoomLevel=_actionZoomLevel - In the implementation block
-(id)activityType;
-(PXCuratedLibraryViewModel *)viewModel;
-(id)initWithActionType:(id)arg1 viewModel:(id)arg2 ;
-(long long)actionZoomLevel;
-(id)localizedTitleForUseCase:(unsigned long long)arg1 ;
-(void)performActionWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithActionType:(id)arg1 ;
-(id)activitySystemImageName;
-(BOOL)canPerformWithActivityItems:(id)arg1 forActivity:(id)arg2 ;
@end

