/*
* Generated on Thursday, January 14, 2021 at 2:24:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsArticles.framework/NewsArticles
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/NAANFHostable.h>

@class UIViewController;

@interface NewsArticles.IssueViewerViewController : UIViewController <NAANFHostable> {

	 contentViewControllerFactory;
	 styler;
	 eventHandler;
	 sceneStateManager;
	 coverViewManager;
	 navigationItemStyle;
	 contentViewController;
	 afterLoad;

}

@property (readonly,nonatomic) unsigned long long viewingLocation; 
@property (readonly,nonatomic) UIViewController * childViewControllerForStatusBarHidden; 
@property (readonly,nonatomic) UIViewController * childViewControllerForHomeIndicatorAutoHidden; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(unsigned long long)viewingLocation;
-(UIViewController *)childViewControllerForHomeIndicatorAutoHidden;
-(id)initWithCoder:(id)arg1 ;
-(UIViewController *)childViewControllerForStatusBarHidden;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

