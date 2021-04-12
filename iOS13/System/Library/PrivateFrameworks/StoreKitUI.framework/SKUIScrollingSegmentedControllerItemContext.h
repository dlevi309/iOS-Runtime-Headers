/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/


@protocol SKUIScrollingSegmentedControllerItemContextDelegate;
#import <StoreKitUI/StoreKitUI-Structs.h>
@class UIScrollView, UIViewController;

@interface SKUIScrollingSegmentedControllerItemContext : NSObject {

	UIEdgeInsets _appliedContentInsetsAdjustment;
	UIEdgeInsets _desiredContentInsetsAdjustment;
	UIScrollView* _insetAdjustedContentScrollView;
	id<SKUIScrollingSegmentedControllerItemContextDelegate> _delegate;
	UIViewController* _viewController;

}

@property (assign,nonatomic,__weak) id<SKUIScrollingSegmentedControllerItemContextDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIViewController * viewController;                                                  //@synthesize viewController=_viewController - In the implementation block
-(id)init;
-(id<SKUIScrollingSegmentedControllerItemContextDelegate>)delegate;
-(void)setDelegate:(id<SKUIScrollingSegmentedControllerItemContextDelegate>)arg1 ;
-(UIViewController *)viewController;
-(id)initWithViewController:(id)arg1 ;
-(void)applyNewContentInset:(UIEdgeInsets)arg1 ;
-(void)updateAppliedContentInsetsAdjustment;
-(void)_applyNewContentInset:(UIEdgeInsets)arg1 withOldContentInset:(UIEdgeInsets)arg2 toContentScrollView:(id)arg3 ;
@end

