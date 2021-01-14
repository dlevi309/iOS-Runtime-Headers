/*
* Generated on Thursday, January 14, 2021 at 2:28:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <UIKitCore/UINavigationController.h>
#import <TVMLKit/_TVModalPresenterFocusing.h>

@class NSHashTable, UIViewController, NSArray, NSMapTable, UIAlertController, TVModalPresentationConfiguration, UIView, NSString;

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
@property (nonatomic,copy,readonly) NSArray * preferredFocusEnvironments; 
@property (nonatomic,__weak,readonly) id<UIFocusEnvironment> parentFocusEnvironment; 
@property (nonatomic,readonly) id<UIFocusItemContainer> focusItemContainer; 
@property (nonatomic,__weak,readonly) UIView * preferredFocusedView; 
@property (nonatomic,copy,readonly) NSString * focusGroupIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithConfiguration:(id)arg1 ;
-(TVModalPresentationConfiguration *)configuration;
-(void)_updateConfiguration;
-(void)pushViewController:(id)arg1 animated:(BOOL)arg2 ;
-(id)popViewControllerAnimated:(BOOL)arg1 ;
-(void)didShowViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)setConfiguration:(TVModalPresentationConfiguration *)arg1 ;
-(NSHashTable *)presentedViewControllers;
-(id)popViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)updatePreferredFocusedViewStateForFocus:(BOOL)arg1 ;
-(UIAlertController *)containingAlertController;
-(void)pushViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_dismissForLastViewController:(BOOL)arg1 ;
-(void)setContainingAlertController:(UIAlertController *)arg1 ;
@end

