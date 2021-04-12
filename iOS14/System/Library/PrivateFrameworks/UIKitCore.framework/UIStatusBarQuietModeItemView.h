/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(double)_visibleAlpha;
-(void)_triggerAction:(id)arg1 ;
-(void)setVisible:(BOOL)arg1 ;
-(BOOL)updateForNewData:(id)arg1 actions:(int)arg2 ;
-(void)setVisible:(BOOL)arg1 frame:(CGRect)arg2 duration:(double)arg3 ;
-(id)accessibilityHUDRepresentation;
-(void)dealloc;
@end

