/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UINavigationController.h>
#import <libobjc.A.dylib/PKObservableContentContainer.h>

@class UIVisualEffectView, NSHashTable, NSString;

@interface PKBlurredNavigationController : UINavigationController <PKObservableContentContainer> {

	UIVisualEffectView* _backdropView;
	os_unfair_lock_s _observersLock;
	NSHashTable* _observers;

}

@property (nonatomic,readonly) CGSize preferredContentSize; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewWillLayoutSubviews;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(id)_observers;
-(void)viewDidLoad;
-(void)addContentContainerObserver:(id)arg1 ;
-(void)removeContentContainerObserver:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

