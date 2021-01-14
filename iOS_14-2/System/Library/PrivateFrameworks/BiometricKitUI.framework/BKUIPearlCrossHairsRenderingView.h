/*
* Generated on Thursday, January 14, 2021 at 2:27:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setAxis:;
-(BOOL)grayscale;
-()axis;
-(void)setGrayscale:(BOOL)arg1 ;
-(void)setSampleCount:(unsigned long long)arg1 ;
-(void)setCrosshairsPathCollection:(MTLSAnimatablePathCollection *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 device:(id)arg2 ;
-(MTLSplineRenderer *)renderer;
-(MTLSAnimatablePathCollection *)crosshairsPathCollection;
-(void)drawRect:(CGRect)arg1 ;
-(void)setRenderer:(MTLSplineRenderer *)arg1 ;
-(void)setAxis:()arg1 ;
-(void)setCheckMarkData:(MTLSPathBufferData *)arg1 ;
-(MTLSPathBufferData *)checkMarkData;
-(void)setCrosshairsInstanceManager:(BKUIPearlCrossHairsManager *)arg1 ;
-(unsigned long long)getState;
-(void)setState:(unsigned long long)arg1 ;
-(MTLSPathBufferData *)crosshairsData;
-(unsigned long long)state;
-(BKUIPearlCrossHairsManager *)crosshairsInstanceManager;
-(void)setCrosshairsData:(MTLSPathBufferData *)arg1 ;
-(void)setCheckMarkPathCollection:(MTLSAnimatablePathCollection *)arg1 ;
-(MTLSAnimatablePathCollection *)checkMarkPathCollection;
@end

