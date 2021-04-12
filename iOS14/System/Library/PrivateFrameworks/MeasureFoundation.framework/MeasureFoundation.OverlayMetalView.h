/*
* Generated on Thursday, January 14, 2021 at 2:27:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)mtkView:(id)arg1 drawableSizeWillChange:(CGSize)arg2 ;
-(void)drawInMTKView:(id)arg1 ;
-(void)didSwipeWithSender:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 device:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
@end

