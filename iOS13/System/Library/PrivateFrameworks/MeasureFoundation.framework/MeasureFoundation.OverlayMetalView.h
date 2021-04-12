/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MeasureFoundation.framework/MeasureFoundation
*/

#import <MeasureFoundation/MeasureFoundation-Structs.h>
#import <MetalKit/MTKView.h>
#import <libobjc.A.dylib/MTKViewDelegate.h>

@interface MeasureFoundation.OverlayMetalView : MTKView <MTKViewDelegate> {

	 blendingEnabled;
	 depthProcessor;
	 adProcessor;
	 adWindow;
	 scene;
	 demoModes;
	 currentDemoMode;
	 swipeUpRecognizer;
	 swipeDownRecognizer;

}
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)didSwipeWithSender:(id)arg1 ;
-(void)mtkView:(id)arg1 drawableSizeWillChange:(CGSize)arg2 ;
-(void)drawInMTKView:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 device:(id)arg2 ;
@end

