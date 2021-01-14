/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/WFDrawerPaneContainerDelegate.h>

@protocol WFDrawerControllerDelegate;
@class NSArray, NSMapTable, UIViewController, NSString, WFDrawerPaneContainer;

@interface WFDrawerController : UIViewController <WFDrawerPaneContainerDelegate> {

	BOOL _inTransition;
	id<WFDrawerControllerDelegate> _delegate;
	NSArray* _viewControllers;
	double _bottomInset;
	NSArray* _paneContainers;
	NSMapTable* _paneContainersByViewControllers;
	UIViewController* _initializationViewController;
	NSString* _drawerGroup;
	unsigned long long _previousVisibilityOfCoveredPaneContainer;

}

@property (nonatomic,readonly) NSArray * paneContainers;                                                 //@synthesize paneContainers=_paneContainers - In the implementation block
@property (nonatomic,readonly) WFDrawerPaneContainer * topPaneContainer; 
@property (nonatomic,readonly) NSMapTable * paneContainersByViewControllers;                             //@synthesize paneContainersByViewControllers=_paneContainersByViewControllers - In the implementation block
@property (nonatomic,readonly) UIViewController * initializationViewController;                          //@synthesize initializationViewController=_initializationViewController - In the implementation block
@property (nonatomic,readonly) NSString * drawerGroup;                                                   //@synthesize drawerGroup=_drawerGroup - In the implementation block
@property (nonatomic,readonly) unsigned long long previousVisibilityOfCoveredPaneContainer;              //@synthesize previousVisibilityOfCoveredPaneContainer=_previousVisibilityOfCoveredPaneContainer - In the implementation block
@property (nonatomic,readonly) BOOL inTransition;                                                        //@synthesize inTransition=_inTransition - In the implementation block
@property (assign,nonatomic,__weak) id<WFDrawerControllerDelegate> delegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSArray * viewControllers;                                                //@synthesize viewControllers=_viewControllers - In the implementation block
@property (nonatomic,readonly) UIViewController * topViewController; 
@property (nonatomic,readonly) unsigned long long visibility; 
@property (assign,nonatomic) BOOL userInteractionEnabled; 
@property (assign,nonatomic) double bottomInset;                                                         //@synthesize bottomInset=_bottomInset - In the implementation block
@property (nonatomic,readonly) CGRect drawerRect; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)visibility;
-(id)init;
-(void)setUserInteractionEnabled:(BOOL)arg1 ;
-(NSArray *)viewControllers;
-(id<WFDrawerControllerDelegate>)delegate;
-(BOOL)inTransition;
-(UIViewController *)topViewController;
-(void)setDelegate:(id<WFDrawerControllerDelegate>)arg1 ;
-(id)initWithRootViewController:(id)arg1 ;
-(BOOL)userInteractionEnabled;
-(double)bottomInset;
-(void)loadView;
-(void)setViewControllers:(id)arg1 animated:(BOOL)arg2 ;
-(void)setBottomInset:(double)arg1 ;
-(BOOL)popViewControllerAnimated:(BOOL)arg1 ;
-(void)drawerPaneContainer:(id)arg1 willTransitionToVisibility:(unsigned long long)arg2 ;
-(void)drawerPaneContainer:(id)arg1 didTransitionToVisibility:(unsigned long long)arg2 ;
-(double)bottomInsetForPaneContainer:(id)arg1 ;
-(id)scrollViewOccludingDrawerPaneInsideContainer:(id)arg1 ;
-(BOOL)pushViewController:(id)arg1 withVisibility:(unsigned long long)arg2 dimming:(unsigned long long)arg3 animated:(BOOL)arg4 ;
-(BOOL)popViewControllerToVisibility:(unsigned long long)arg1 dimming:(unsigned long long)arg2 animated:(BOOL)arg3 ;
-(id)drawerPaneWithViewController:(id)arg1 ;
-(id)mutablePaneControllers;
-(WFDrawerPaneContainer *)topPaneContainer;
-(id)coveredPaneContainer;
-(id)paneContainerForViewController:(id)arg1 ;
-(CGRect)drawerRect;
-(void)transitionToVisibility:(unsigned long long)arg1 withDimming:(unsigned long long)arg2 animated:(BOOL)arg3 ;
-(void)transitionToVisibility:(unsigned long long)arg1 withDimming:(unsigned long long)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(double)heightForVisibility:(unsigned long long)arg1 ;
-(NSArray *)paneContainers;
-(NSMapTable *)paneContainersByViewControllers;
-(UIViewController *)initializationViewController;
-(NSString *)drawerGroup;
-(unsigned long long)previousVisibilityOfCoveredPaneContainer;
@end

