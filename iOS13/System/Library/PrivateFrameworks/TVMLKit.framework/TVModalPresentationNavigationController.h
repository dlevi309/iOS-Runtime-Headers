/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <UIKitCore/UINavigationController.h>
#import <TVMLKit/_TVModalPresenterFocusing.h>

@class NSHashTable, UIViewController, NSArray, NSMapTable, UIAlertController, TVModalPresentationConfiguration, NSString, UIView;

@interface TVModalPresentationNavigationController : UINavigationController <_TVModalPresenterFocusing> {

	NSHashTable* _presentedViewControllers;
	UIViewController* _rootViewController;
	NSArray* _previousViewControllers;
	NSMapTable* _pushCompletionBlocks;
	NSMapTable* _popCompletionBlocks;
	UIAlertController* _containingAlertController;
	TVModalPresentationConfiguration* _configuration;

}

@property (nonatomic,readonly) NSHashTable * presentedViewControllers; 
@property (assign,nonatomic,__weak) UIAlertController * containingAlertController;                //@synthesize containingAlertController=_containingAlertController - In the implementation block
@property (nonatomic,retain) TVModalPresentationConfiguration * configuration;                    //@synthesize configuration=_configuration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * preferredFocusEnvironments; 
@property (nonatomic,__weak,readonly) id<UIFocusEnvironment> parentFocusEnvironment; 
@property (nonatomic,readonly) id<UIFocusItemContainer> focusItemContainer; 
@property (nonatomic,__weak,readonly) UIView * preferredFocusedView; 
-(id)initWithConfiguration:(id)arg1 ;
-(void)setConfiguration:(TVModalPresentationConfiguration *)arg1 ;
-(TVModalPresentationConfiguration *)configuration;
-(void)pushViewController:(id)arg1 animated:(BOOL)arg2 ;
-(id)popViewControllerAnimated:(BOOL)arg1 ;
-(void)didShowViewController:(id)arg1 animated:(BOOL)arg2 ;
-(id)popViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_updateConfiguration;
-(NSHashTable *)presentedViewControllers;
-(void)updatePreferredFocusedViewStateForFocus:(BOOL)arg1 ;
-(UIAlertController *)containingAlertController;
-(void)pushViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_dismissForLastViewController:(BOOL)arg1 ;
-(void)setContainingAlertController:(UIAlertController *)arg1 ;
@end

