/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <UIKitCore/UIMoreNavigationController.h>

@protocol SKUIMoreNavigationControllerDelegate;
@class UINavigationController, UIViewController;

@interface SKUIMoreNavigationController : UIMoreNavigationController {

	UINavigationController* _displayedViewController;
	UIViewController* _firstActualViewController;
	id<SKUIMoreNavigationControllerDelegate> _storeKitDelegate;

}

@property (assign,nonatomic,__weak) id<SKUIMoreNavigationControllerDelegate> storeKitDelegate;              //@synthesize storeKitDelegate=_storeKitDelegate - In the implementation block
+(Class)_moreListControllerClass;
-(unsigned long long)supportedInterfaceOrientations;
-(void)pushViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)didShowViewController:(id)arg1 animated:(BOOL)arg2 ;
-(id)displayedViewController;
-(void)setDisplayedViewController:(id)arg1 ;
-(id<SKUIMoreNavigationControllerDelegate>)storeKitDelegate;
-(void)setStoreKitDelegate:(id<SKUIMoreNavigationControllerDelegate>)arg1 ;
@end

