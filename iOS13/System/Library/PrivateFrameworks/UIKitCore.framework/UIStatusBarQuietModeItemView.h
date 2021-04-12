/*
* Generated on Monday, March 1, 2021 at 2:30:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIStatusBarIndicatorItemView.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@class NSString;

@interface UIStatusBarQuietModeItemView : UIStatusBarIndicatorItemView <CAAnimationDelegate> {

	BOOL _hideForAction;
	BOOL _registeredForNotifications;
	BOOL _inactive;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setVisible:(BOOL)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(id)accessibilityHUDRepresentation;
-(BOOL)updateForNewData:(id)arg1 actions:(int)arg2 ;
-(void)setVisible:(BOOL)arg1 frame:(CGRect)arg2 duration:(double)arg3 ;
-(void)_triggerAction:(id)arg1 ;
-(double)_visibleAlpha;
@end

