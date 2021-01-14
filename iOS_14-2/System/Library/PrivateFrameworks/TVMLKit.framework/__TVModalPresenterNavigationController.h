/*
* Generated on Thursday, January 14, 2021 at 2:28:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UINavigationController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <TVMLKit/_TVModalPresenterFocusing.h>
#import <TVMLKit/_TVApplicationInspectorDocumentProvider.h>

@class UIViewController, NSMapTable, NSArray, NSString, UIView;

@interface __TVModalPresenterNavigationController : UINavigationController <UIGestureRecognizerDelegate, _TVModalPresenterFocusing, _TVApplicationInspectorDocumentProvider> {

	UIViewController* _rootViewController;
	NSMapTable* _pushCompletionBlocks;
	NSMapTable* _popCompletionBlocks;
	BOOL _isModalNavVisisble;
	NSArray* _previousViewControllers;
	/*^block*/id _dismissalBlock;

}

@property (nonatomic,retain) NSArray * previousViewControllers;                                   //@synthesize previousViewControllers=_previousViewControllers - In the implementation block
@property (nonatomic,copy) id dismissalBlock;                                                     //@synthesize dismissalBlock=_dismissalBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * preferredFocusEnvironments; 
@property (nonatomic,__weak,readonly) id<UIFocusEnvironment> parentFocusEnvironment; 
@property (nonatomic,readonly) id<UIFocusItemContainer> focusItemContainer; 
@property (nonatomic,__weak,readonly) UIView * preferredFocusedView; 
@property (nonatomic,copy,readonly) NSString * focusGroupIdentifier; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)initWithRootViewController:(id)arg1 ;
-(BOOL)shouldAutorotate;
-(void)pushViewController:(id)arg1 animated:(BOOL)arg2 ;
-(id)childViewControllerForHomeIndicatorAutoHidden;
-(void)setDismissalBlock:(id)arg1 ;
-(id)dismissalBlock;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)reset;
-(id)activeDocument;
-(id)popViewControllerAnimated:(BOOL)arg1 ;
-(void)didShowViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)popViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)updatePreferredFocusedViewStateForFocus:(BOOL)arg1 ;
-(void)pushViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_ensureNavigationBarHiddenSafelyForViewSize:(CGSize)arg1 ;
-(void)setPreviousViewControllers:(NSArray *)arg1 ;
-(void)_dismissForLastViewController:(BOOL)arg1 ;
-(NSArray *)previousViewControllers;
-(void)_dismissForLastViewController;
@end

