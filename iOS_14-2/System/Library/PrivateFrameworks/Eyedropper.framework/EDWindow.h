/*
* Generated on Thursday, January 14, 2021 at 2:27:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Eyedropper.framework/Eyedropper
*/

#import <Eyedropper/Eyedropper-Structs.h>
#import <UIKitCore/UIWindow.h>

@protocol EDWindowTrackingDelegate;
@class EDWindowRootViewController;

@interface EDWindow : UIWindow {

	EDWindowRootViewController* _root;
	id<EDWindowTrackingDelegate> _trackingDelegate;

}

@property (nonatomic,retain) EDWindowRootViewController * root;                                 //@synthesize root=_root - In the implementation block
@property (assign,nonatomic,__weak) id<EDWindowTrackingDelegate> trackingDelegate;              //@synthesize trackingDelegate=_trackingDelegate - In the implementation block
+(BOOL)_isSecure;
-(BOOL)_shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(EDWindowRootViewController *)root;
-(void)handleStatusBarChangeFromHeight:(double)arg1 toHeight:(double)arg2 ;
-(BOOL)_canBecomeKeyWindow;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setRoot:(EDWindowRootViewController *)arg1 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)_shouldControlAutorotation;
-(BOOL)_preventsRootPresentationController;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(id<EDWindowTrackingDelegate>)trackingDelegate;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)setTrackingDelegate:(id<EDWindowTrackingDelegate>)arg1 ;
@end

