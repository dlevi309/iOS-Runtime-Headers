/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UINavigationController.h>
#import <libobjc.A.dylib/PKObservableContentContainer.h>

@class UIVisualEffectView, NSHashTable, PKCompactNavigationContainerController, NSString;

@interface PKCompactNavigationContainedNavigationController : UINavigationController <PKObservableContentContainer> {

	UIVisualEffectView* _backdropView;
	os_unfair_lock_s _observersLock;
	NSHashTable* _observers;
	BOOL _propagateParentNCCBottomSafeAreaInset;
	unsigned long long _style;
	PKCompactNavigationContainerController* _parentNavigationContainerController;

}

@property (assign,nonatomic,__weak) PKCompactNavigationContainerController * parentNavigationContainerController;              //@synthesize parentNavigationContainerController=_parentNavigationContainerController - In the implementation block
@property (assign,nonatomic) BOOL propagateParentNCCBottomSafeAreaInset;                                                       //@synthesize propagateParentNCCBottomSafeAreaInset=_propagateParentNCCBottomSafeAreaInset - In the implementation block
@property (nonatomic,readonly) unsigned long long style;                                                                       //@synthesize style=_style - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CGSize preferredContentSize; 
-(id)_observers;
-(unsigned long long)style;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)initWithStyle:(unsigned long long)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(BOOL)_canShowWhileLocked;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(void)pushViewController:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)propagateParentNCCBottomSafeAreaInset;
-(PKCompactNavigationContainerController *)parentNavigationContainerController;
-(void)addContentContainerObserver:(id)arg1 ;
-(void)removeContentContainerObserver:(id)arg1 ;
-(void)setParentNavigationContainerController:(PKCompactNavigationContainerController *)arg1 ;
-(void)setPropagateParentNCCBottomSafeAreaInset:(BOOL)arg1 ;
@end

