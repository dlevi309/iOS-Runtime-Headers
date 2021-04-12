/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/

#import <UIKitCore/UINavigationController.h>
#import <libobjc.A.dylib/CPSPreferredFocusManaging.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@protocol UIFocusItem;
@class NSString;

@interface CPSOverlayViewController : UINavigationController <CPSPreferredFocusManaging, BSInvalidatable> {

	BOOL usePreferredItemOnNextUpdate;
	id<UIFocusItem> preferredFocusItem;

}

@property (assign,nonatomic,__weak) id<UIFocusItem> preferredFocusItem; 
@property (assign,nonatomic) BOOL usePreferredItemOnNextUpdate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)invalidate;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(id)preferredFocusEnvironments;
-(id)_linearFocusMovementSequences;
-(void)viewDidLoad;
-(id)popToRootViewControllerAnimated:(BOOL)arg1 ;
-(id)popViewControllerAnimated:(BOOL)arg1 ;
-(id)popToViewController:(id)arg1 animated:(BOOL)arg2 ;
-(id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2 ;
-(id)templates;
-(void)popToRootTemplateAnimated:(BOOL)arg1 ;
-(void)popToTemplate:(id)arg1 animated:(BOOL)arg2 ;
-(void)dismissTemplateAnimated:(BOOL)arg1 ;
-(id)topTemplate;
-(unsigned long long)indexOfTemplate:(id)arg1 ;
-(id)viewControllerForTemplate:(id)arg1 ;
-(BOOL)usePreferredItemOnNextUpdate;
-(void)setUsePreferredItemOnNextUpdate:(BOOL)arg1 ;
-(id<UIFocusItem>)preferredFocusItem;
-(void)setPreferredFocusItem:(id<UIFocusItem>)arg1 ;
-(void)pushTemplateViewController:(id)arg1 animated:(BOOL)arg2 presentationStyle:(unsigned long long)arg3 ;
-(void)presentTemplateViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)presentActionSheetTemplate:(id)arg1 animated:(BOOL)arg2 ;
-(id)presentedTemplateViewController;
@end

