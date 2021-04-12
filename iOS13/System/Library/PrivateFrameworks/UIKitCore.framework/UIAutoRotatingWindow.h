/*
* Generated on Monday, March 1, 2021 at 2:30:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIApplicationRotationFollowingWindow.h>

@interface UIAutoRotatingWindow : UIApplicationRotationFollowingWindow {

	long long _interfaceOrientation;
	BOOL _unknownOrientation;

}
+(id)sharedPopoverHostingWindow;
-(void)commonInit;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)_didRemoveSubview:(id)arg1 ;
-(id)_initWithFrame:(CGRect)arg1 attached:(BOOL)arg2 ;
-(void)updateForOrientation:(long long)arg1 ;
-(id)_initWithFrame:(CGRect)arg1 debugName:(id)arg2 windowScene:(id)arg3 ;
@end

