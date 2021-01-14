/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <UIKitCore/UIViewController.h>

@class PXGView, PXGLayout;

@interface PXGPPTViewController : UIViewController {

	PXGView* _gridView;
	PXGLayout* _initialLayout;

}

@property (nonatomic,readonly) PXGLayout * initialLayout;              //@synthesize initialLayout=_initialLayout - In the implementation block
@property (nonatomic,readonly) PXGView * gridView;                     //@synthesize gridView=_gridView - In the implementation block
-(PXGView *)gridView;
-(id)initWithLayout:(id)arg1 ;
-(void)viewDidLoad;
-(id)initWithCoder:(id)arg1 ;
-(void)animate:(/*^block*/id)arg1 animationRenderingCompletionHandler:(/*^block*/id)arg2 proceedHandler:(/*^block*/id)arg3 ;
-(void)_handleDoubleTap:(id)arg1 ;
-(PXGLayout *)initialLayout;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

