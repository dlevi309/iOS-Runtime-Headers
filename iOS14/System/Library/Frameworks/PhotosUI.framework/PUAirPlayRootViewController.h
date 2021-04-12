/*
* Generated on Thursday, January 14, 2021 at 2:22:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <UIKitCore/UIViewController.h>

@class UIViewController, NSArray;

@interface PUAirPlayRootViewController : UIViewController {

	UIViewController* _childViewController;
	NSArray* __childViewConstraints;

}

@property (setter=_setChildViewConstraints:,nonatomic,copy) NSArray * _childViewConstraints;              //@synthesize _childViewConstraints=__childViewConstraints - In the implementation block
@property (nonatomic,retain) UIViewController * childViewController;                                      //@synthesize childViewController=_childViewController - In the implementation block
-(void)updateViewConstraints;
-(UIViewController *)childViewController;
-(void)setChildViewController:(UIViewController *)arg1 ;
-(NSArray *)_childViewConstraints;
-(void)_setChildViewConstraints:(id)arg1 ;
-(void)setChildViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)viewDidLoad;
@end

