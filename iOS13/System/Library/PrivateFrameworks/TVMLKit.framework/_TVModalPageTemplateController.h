/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UIPageViewControllerDataSource.h>

@class IKViewElement, NSArray, UIPageViewController, NSString;

@interface _TVModalPageTemplateController : UIViewController <UIPageViewControllerDataSource> {

	IKViewElement* _backgroundElement;
	NSArray* _bezelViewControllers;
	IKViewElement* _collectionListElement;
	UIPageViewController* _pageViewController;
	NSArray* _viewControllers;
	IKViewElement* _viewElement;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)loadView;
-(void)viewDidLoad;
-(void)didMoveToParentViewController:(id)arg1 ;
-(id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2 ;
-(id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2 ;
-(void)_tapAction:(id)arg1 ;
-(void)updateWithViewElement:(id)arg1 ;
-(id)_viewControllerWithElement:(id)arg1 existingController:(id)arg2 ;
-(BOOL)_updateWithCollectionListElement:(id)arg1 ;
@end

