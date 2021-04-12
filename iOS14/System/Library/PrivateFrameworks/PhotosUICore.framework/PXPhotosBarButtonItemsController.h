/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@class _PXPhotosBarButtonSpecManager, PXPhotosViewModel;

@interface PXPhotosBarButtonItemsController : NSObject {

	_PXPhotosBarButtonSpecManager* _specManager;
	PXPhotosViewModel* _viewModel;

}

@property (nonatomic,readonly) _PXPhotosBarButtonSpecManager * specManager;              //@synthesize specManager=_specManager - In the implementation block
@property (nonatomic,readonly) PXPhotosViewModel * viewModel;                            //@synthesize viewModel=_viewModel - In the implementation block
-(_PXPhotosBarButtonSpecManager *)specManager;
-(id)init;
-(id)initWithExtendedTraitCollection:(id)arg1 viewModel:(id)arg2 ;
-(id)_createBarButtonItemWithTitle:(id)arg1 orSystemItem:(long long)arg2 orSystemIconName:(id)arg3 target:(id)arg4 action:(SEL)arg5 ;
-(id)createBarButtonItemWithSystemIconName:(id)arg1 target:(id)arg2 action:(SEL)arg3 ;
-(id)createBarButtonItemWithSystemItem:(long long)arg1 target:(id)arg2 action:(SEL)arg3 ;
-(PXPhotosViewModel *)viewModel;
-(id)createBarButtonItemWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3 ;
@end

