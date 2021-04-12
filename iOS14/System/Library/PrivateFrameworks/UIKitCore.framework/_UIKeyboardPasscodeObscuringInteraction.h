/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKit/UIPointerInteractionDelegate.h>
#import <UIKit/UIInteraction.h>

@class UIView, UIPointerInteraction, NSString;

@interface _UIKeyboardPasscodeObscuringInteraction : NSObject <UIPointerInteractionDelegate, UIInteraction> {

	UIView* _view;
	UIPointerInteraction* _pointerInteraction;

}

@property (assign,nonatomic,__weak) UIView * view;                                   //@synthesize view=_view - In the implementation block
@property (nonatomic,retain) UIPointerInteraction * pointerInteraction;              //@synthesize pointerInteraction=_pointerInteraction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIPointerInteraction *)pointerInteraction;
-(void)didMoveToView:(id)arg1 ;
-(id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2 ;
-(void)willMoveToView:(id)arg1 ;
-(void)setView:(UIView *)arg1 ;
-(void)setPointerInteraction:(UIPointerInteraction *)arg1 ;
-(UIView *)view;
-(id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3 ;
@end

