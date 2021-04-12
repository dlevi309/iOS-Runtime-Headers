/*
* Generated on Monday, March 1, 2021 at 2:30:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIAccessibilityHUDGestureDelegateInternal.h>
#import <UIKit/UIInteraction.h>

@protocol UILargeContentViewerInteractionDelegate;
@class UIView, UIGestureRecognizer, NSString;

@interface UILargeContentViewerInteraction : NSObject <UIAccessibilityHUDGestureDelegateInternal, UIInteraction> {

	UIView* _view;
	id<UILargeContentViewerInteractionDelegate> _delegate;

}

@property (nonatomic,__weak,readonly) id<UILargeContentViewerInteractionDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIGestureRecognizer * gestureRecognizerForExclusionRelationship; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) UIView * view; 
+(void)initialize;
+(BOOL)isEnabled;
-(id)init;
-(id<UILargeContentViewerInteractionDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 ;
-(UIView *)view;
-(BOOL)_accessibilityHUDGestureManager:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(id)_viewControllerForAccessibilityHUDGestureManager:(id)arg1 ;
-(id)_accessibilityHUDGestureManager:(id)arg1 HUDItemForPoint:(CGPoint)arg2 ;
-(void)_accessibilityHUDGestureManager:(id)arg1 gestureLiftedAtPoint:(CGPoint)arg2 ;
-(void)willMoveToView:(id)arg1 ;
-(void)didMoveToView:(id)arg1 ;
-(id)_itemAtPoint:(CGPoint)arg1 ;
-(UIGestureRecognizer *)gestureRecognizerForExclusionRelationship;
@end

