/*
* Generated on Thursday, January 14, 2021 at 2:20:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIApplicationRotationFollowingWindow.h>

@interface UIAutoRotatingWindow : UIApplicationRotationFollowingWindow {

	long long _interfaceOrientation;
	BOOL _unknownOrientation;

}
-(id)_initWithFrame:(CGRect)arg1 debugName:(id)arg2 windowScene:(id)arg3 ;
-(void)_didRemoveSubview:(id)arg1 ;
-(id)_initWithFrame:(CGRect)arg1 attached:(BOOL)arg2 ;
-(void)updateForOrientation:(long long)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)commonInit;
@end

