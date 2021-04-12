/*
* Generated on Thursday, January 14, 2021 at 2:28:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)debugMode;
-(void)setBounds:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setDebugMode:(BOOL)arg1 ;
-(void)dealloc;
-(void)_debugToggle:(id)arg1 ;
-(void)_orientWithX:(double)arg1 andY:(double)arg2 ;
-(void)_resetOrientation:(id)arg1 ;
-(void)_startDeviceMotion;
-(void)_stopDeviceMotion;
-(void)_setupDeviceMotion;
@end

