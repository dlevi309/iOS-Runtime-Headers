/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIViewController.h>

@class NSArray;

@interface _PXActionStackedViewController : UIViewController {

	double _separatorHeight;
	NSArray* _separatorViews;
	NSArray* _viewControllers;

}

@property (nonatomic,copy,readonly) NSArray * viewControllers;              //@synthesize viewControllers=_viewControllers - In the implementation block
-(void)viewWillLayoutSubviews;
-(NSArray *)viewControllers;
-(CGSize)preferredContentSize;
-(id)initWithViewControllers:(id)arg1 ;
-(void)loadView;
@end

