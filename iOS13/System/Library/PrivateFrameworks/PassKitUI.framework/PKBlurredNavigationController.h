/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UINavigationController.h>
#import <libobjc.A.dylib/PKObservableContentContainer.h>

@class UIVisualEffectView, NSLock, NSHashTable, NSString;

@interface PKBlurredNavigationController : UINavigationController <PKObservableContentContainer> {

	UIVisualEffectView* _backdropView;
	NSLock* _observersLock;
	NSHashTable* _observers;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CGSize preferredContentSize; 
-(id)_observers;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(void)addContentContainerObserver:(id)arg1 ;
-(void)removeContentContainerObserver:(id)arg1 ;
@end

