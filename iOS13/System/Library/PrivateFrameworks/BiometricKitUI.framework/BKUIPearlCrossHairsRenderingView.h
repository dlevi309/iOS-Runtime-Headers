/*
* Generated on Monday, March 1, 2021 at 2:34:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BiometricKitUI.framework/BiometricKitUI
*/

#import <BiometricKitUI/BiometricKitUI-Structs.h>
#import <MetalKit/MTKView.h>

@protocol OS_dispatch_semaphore, MTLCommandQueue;
@class NSObject, MTLSAnimatablePathCollection, BKUIPearlCrossHairsManager, MTLSPathBufferData, MTLSplineRenderer;

@interface BKUIPearlCrossHairsRenderingView : MTKView {

	NSObject*<OS_dispatch_semaphore> _inFlightSemaphore;
	id<MTLCommandQueue> _commandQueue;
	double _time;
	float _pathBlend;
	float _pathBlendDest;
	unsigned long long _state;
	MTLSAnimatablePathCollection* _crosshairsPathCollection;
	BKUIPearlCrossHairsManager* _crosshairsInstanceManager;
	MTLSPathBufferData* _crosshairsData;
	MTLSAnimatablePathCollection* _checkMarkPathCollection;
	MTLSPathBufferData* _checkMarkData;
	MTLSplineRenderer* _renderer;
	 _axis;

}

@property (assign,nonatomic) unsigned long long state;                                   //@synthesize state=_state - In the implementation block
@property (assign)  axis;                                                                //@synthesize axis=_axis - In the implementation block
@property (retain) MTLSAnimatablePathCollection * crosshairsPathCollection;              //@synthesize crosshairsPathCollection=_crosshairsPathCollection - In the implementation block
@property (retain) BKUIPearlCrossHairsManager * crosshairsInstanceManager;               //@synthesize crosshairsInstanceManager=_crosshairsInstanceManager - In the implementation block
@property (retain) MTLSPathBufferData * crosshairsData;                                  //@synthesize crosshairsData=_crosshairsData - In the implementation block
@property (retain) MTLSAnimatablePathCollection * checkMarkPathCollection;               //@synthesize checkMarkPathCollection=_checkMarkPathCollection - In the implementation block
@property (retain) MTLSPathBufferData * checkMarkData;                                   //@synthesize checkMarkData=_checkMarkData - In the implementation block
@property (retain) MTLSplineRenderer * renderer;                                         //@synthesize renderer=_renderer - In the implementation block
@property (assign,nonatomic) BOOL grayscale; 
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(void)setSampleCount:(unsigned long long)arg1 ;
-()axis;
-(void)setAxis:;
-(void)drawRect:(CGRect)arg1 ;
-(BOOL)grayscale;
-(void)setGrayscale:(BOOL)arg1 ;
-(MTLSplineRenderer *)renderer;
-(void)setRenderer:(MTLSplineRenderer *)arg1 ;
-(unsigned long long)getState;
-(id)initWithFrame:(CGRect)arg1 device:(id)arg2 ;
-(void)setAxis:()arg1 ;
-(void)setCrosshairsPathCollection:(MTLSAnimatablePathCollection *)arg1 ;
-(MTLSAnimatablePathCollection *)crosshairsPathCollection;
-(void)setCrosshairsInstanceManager:(BKUIPearlCrossHairsManager *)arg1 ;
-(BKUIPearlCrossHairsManager *)crosshairsInstanceManager;
-(void)setCrosshairsData:(MTLSPathBufferData *)arg1 ;
-(void)setCheckMarkPathCollection:(MTLSAnimatablePathCollection *)arg1 ;
-(MTLSAnimatablePathCollection *)checkMarkPathCollection;
-(void)setCheckMarkData:(MTLSPathBufferData *)arg1 ;
-(MTLSPathBufferData *)checkMarkData;
-(MTLSPathBufferData *)crosshairsData;
@end

