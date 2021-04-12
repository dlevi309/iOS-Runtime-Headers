/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXCuratedLibraryActionViewController.h>

@class UIImageView, UISlider;

@interface PXCuratedLibraryZoomActionViewController : PXCuratedLibraryActionViewController {

	UIImageView* _leadingIconView;
	UISlider* _slider;
	UIImageView* _trailingIconView;

}
-(void)viewWillLayoutSubviews;
-(CGSize)preferredContentSize;
-(void)_handleSlider:(id)arg1 ;
-(void)loadView;
@end

