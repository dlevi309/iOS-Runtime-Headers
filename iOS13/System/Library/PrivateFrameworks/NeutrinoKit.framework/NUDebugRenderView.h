/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoKit.framework/NeutrinoKit
*/

#import <NeutrinoKit/NeutrinoKit-Structs.h>
#import <NeutrinoKit/NURenderView.h>

@class UILongPressGestureRecognizer, CMMotionManager;

@interface NUDebugRenderView : NURenderView {

	UILongPressGestureRecognizer* _doubleTap;
	BOOL _showDebug;
	CMMotionManager* _motionManager;

}
-(void)dealloc;
-(void)setBounds:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)debugMode;
-(void)setDebugMode:(BOOL)arg1 ;
-(void)_debugToggle:(id)arg1 ;
-(void)_orientWithX:(double)arg1 andY:(double)arg2 ;
-(void)_resetOrientation:(id)arg1 ;
-(void)_startDeviceMotion;
-(void)_stopDeviceMotion;
-(void)_setupDeviceMotion;
@end

