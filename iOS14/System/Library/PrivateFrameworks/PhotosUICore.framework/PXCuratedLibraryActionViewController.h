/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <UIKitCore/UIViewController.h>

@class PXCuratedLibraryViewModel, PXGLayout;

@interface PXCuratedLibraryActionViewController : UIViewController {

	PXCuratedLibraryViewModel* _viewModel;
	PXGLayout* _layout;

}

@property (nonatomic,readonly) PXCuratedLibraryViewModel * viewModel;              //@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,readonly) PXGLayout * layout;                                 //@synthesize layout=_layout - In the implementation block
-(PXCuratedLibraryViewModel *)viewModel;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithViewModel:(id)arg1 layout:(id)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(PXGLayout *)layout;
@end

