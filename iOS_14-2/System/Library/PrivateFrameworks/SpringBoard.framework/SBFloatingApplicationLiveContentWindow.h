/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBWindow.h>

@class UIViewController, UIView;

@interface SBFloatingApplicationLiveContentWindow : SBWindow {

	UIViewController* _deviceApplicationSceneViewController;
	UIView* _effectiveCoordinateSpace;

}

@property (assign,nonatomic,__weak) UIViewController * deviceApplicationSceneViewController;              //@synthesize deviceApplicationSceneViewController=_deviceApplicationSceneViewController - In the implementation block
@property (assign,nonatomic,__weak) UIView * effectiveCoordinateSpace;                                    //@synthesize effectiveCoordinateSpace=_effectiveCoordinateSpace - In the implementation block
+(BOOL)sb_autorotates;
-(CGPoint)convertPoint:(CGPoint)arg1 toView:(id)arg2 ;
-(CGPoint)convertPoint:(CGPoint)arg1 fromView:(id)arg2 ;
-(CGRect)convertRect:(CGRect)arg1 fromView:(id)arg2 ;
-(BOOL)_usesWindowServerHitTesting;
-(id)_hitTest:(CGPoint)arg1 withEvent:(id)arg2 windowServerHitTestWindow:(id)arg3 ;
-(CGRect)convertRect:(CGRect)arg1 toView:(id)arg2 ;
-(BOOL)_canBecomeKeyWindow;
-(CGRect)convertRect:(CGRect)arg1 toCoordinateSpace:(id)arg2 ;
-(CGRect)convertRect:(CGRect)arg1 fromCoordinateSpace:(id)arg2 ;
-(CGPoint)convertPoint:(CGPoint)arg1 toCoordinateSpace:(id)arg2 ;
-(CGPoint)convertPoint:(CGPoint)arg1 fromCoordinateSpace:(id)arg2 ;
-(id)initWithDebugName:(id)arg1 ;
-(void)setRootViewController:(id)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(UIViewController *)deviceApplicationSceneViewController;
-(void)setDeviceApplicationSceneViewController:(UIViewController *)arg1 ;
-(UIView *)effectiveCoordinateSpace;
-(void)setEffectiveCoordinateSpace:(UIView *)arg1 ;
@end

