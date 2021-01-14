/*
* Generated on Thursday, January 14, 2021 at 2:24:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UINavigationController.h>
#import <libobjc.A.dylib/PKObservableContentContainer.h>

@class UIVisualEffectView, NSHashTable, NSString;

@interface PKCompactNavigationContainedNavigationController : UINavigationController <PKObservableContentContainer> {

	UIVisualEffectView* _backdropView;
	os_unfair_lock_s _observersLock;
	NSHashTable* _observers;
	unsigned long long _style;

}

@property (nonatomic,readonly) unsigned long long style;                 //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) CGSize preferredContentSize; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewWillLayoutSubviews;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(id)initWithStyle:(unsigned long long)arg1 ;
-(id)_observers;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(void)pushViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)addContentContainerObserver:(id)arg1 ;
-(void)removeContentContainerObserver:(id)arg1 ;
-(void)loadView;
-(unsigned long long)style;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

