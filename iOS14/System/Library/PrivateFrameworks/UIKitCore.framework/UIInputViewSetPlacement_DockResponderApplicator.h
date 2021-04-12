/*
* Generated on Thursday, January 14, 2021 at 2:20:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIInputViewSetPlacement_FloatingApplicator.h>

@class UIKeyboardPopoverContainer;

@interface UIInputViewSetPlacement_DockResponderApplicator : UIInputViewSetPlacement_FloatingApplicator {

	UIKeyboardPopoverContainer* _popover;
	CGRect _popoverRectPlaceholder;

}

@property (nonatomic,retain) UIKeyboardPopoverContainer * popover;              //@synthesize popover=_popover - In the implementation block
@property (assign,nonatomic) CGRect popoverRectPlaceholder;                     //@synthesize popoverRectPlaceholder=_popoverRectPlaceholder - In the implementation block
-(BOOL)isPopoverRequired;
-(UIEdgeInsets)contentInsets;
-(void)setPopoverRectPlaceholder:(CGRect)arg1 ;
-(CGRect)popoverRectPlaceholder;
-(BOOL)isGesture:(id)arg1 inDraggableView:(CGPoint)arg2 ;
-(void)applyChanges:(id)arg1 ;
-(id)draggableView;
-(void)invalidatePopover;
-(CGRect)popoverFrame;
-(id)twoFingerDraggableView;
-(BOOL)preBeginGesture:(id)arg1 shouldBegin:(BOOL*)arg2 ;
-(void)invalidate;
-(void)setPopover:(UIKeyboardPopoverContainer *)arg1 ;
-(void)prepare;
-(UIKeyboardPopoverContainer *)popover;
-(BOOL)isEqual:(id)arg1 ;
@end

