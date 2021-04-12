/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/


@class AKController, UINavigationController, UIViewController;

@interface AKToolsPickerController : NSObject {

	AKController* _controller;
	UINavigationController* _navController;
	UIViewController* _toolsListController;

}

@property (nonatomic,retain) UINavigationController * navController;              //@synthesize navController=_navController - In the implementation block
@property (nonatomic,retain) UIViewController * toolsListController;              //@synthesize toolsListController=_toolsListController - In the implementation block
@property (__weak) AKController * controller;                                     //@synthesize controller=_controller - In the implementation block
-(UINavigationController *)navController;
-(void)setController:(AKController *)arg1 ;
-(AKController *)controller;
-(id)initWithController:(id)arg1 ;
-(void)setToolsListController:(UIViewController *)arg1 ;
-(void)setNavController:(UINavigationController *)arg1 ;
-(UIViewController *)toolsListController;
@end

