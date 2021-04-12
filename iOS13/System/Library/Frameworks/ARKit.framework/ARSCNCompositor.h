/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/


@protocol MTLDevice, MTLLibrary, MTLRenderPipelineState;
#import <ARKit/ARKit-Structs.h>
@class ARSCNView, SCNTechnique, ARMatteGenerator, ARFrame;

@interface ARSCNCompositor : NSObject {

	id<MTLDevice> _device;
	ARSCNView* _view;
	SCNTechnique* _technique;
	ARMatteGenerator* _matteGenerator;
	id<MTLLibrary> _mattingLibrary;
	id<MTLRenderPipelineState> _resampleML;
	id<MTLRenderPipelineState> _resampleDepthML;
	unsigned long long _uncertaintyRadius;
	unsigned long long _erodeRadius;
	CGSize _screenResolution;
	CGSize _workingResolution;
	float _workingScaleFactor;
	float _mattingScaleFactor;
	BOOL _disableReverseZ;
	BOOL _showOcclusionGeometry;
	long long _compositorAlgorithm;
	ARFrame* _currentFrame;
	long long _mode;
	unsigned long long _foregroundBitMask;
	long long _currentOrientation;
	double _depthScale;
	unsigned long long _dilationRadius;
	double _filterEpsilon;
	double _filterScale;
	double _filterOffset;

}

@property (nonatomic,retain) ARFrame * currentFrame;                            //@synthesize currentFrame=_currentFrame - In the implementation block
@property (nonatomic,readonly) long long mode;                                  //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) long long compositorAlgorithm;                     //@synthesize compositorAlgorithm=_compositorAlgorithm - In the implementation block
@property (assign,nonatomic) unsigned long long foregroundBitMask;              //@synthesize foregroundBitMask=_foregroundBitMask - In the implementation block
@property (assign,nonatomic) long long currentOrientation;                      //@synthesize currentOrientation=_currentOrientation - In the implementation block
@property (assign,nonatomic) BOOL showOcclusionGeometry;                        //@synthesize showOcclusionGeometry=_showOcclusionGeometry - In the implementation block
@property (assign,nonatomic) unsigned long long uncertaintyRadius;              //@synthesize uncertaintyRadius=_uncertaintyRadius - In the implementation block
@property (assign,nonatomic) unsigned long long erosionRadius;                  //@synthesize erodeRadius=_erodeRadius - In the implementation block
@property (assign,nonatomic) double depthScale;                                 //@synthesize depthScale=_depthScale - In the implementation block
@property (assign,nonatomic) unsigned long long dilationRadius;                 //@synthesize dilationRadius=_dilationRadius - In the implementation block
@property (assign,nonatomic) double filterEpsilon;                              //@synthesize filterEpsilon=_filterEpsilon - In the implementation block
@property (assign,nonatomic) double filterScale;                                //@synthesize filterScale=_filterScale - In the implementation block
@property (assign,nonatomic) double filterOffset;                               //@synthesize filterOffset=_filterOffset - In the implementation block
+(id)mattingWithDepthAndDualTechnique;
+(id)mattingTechniqueDual;
+(id)techniqueDictionaryWithName:(id)arg1 ;
-(void)dealloc;
-(long long)mode;
-(ARFrame *)currentFrame;
-(long long)currentOrientation;
-(unsigned long long)uncertaintyRadius;
-(void)setUncertaintyRadius:(unsigned long long)arg1 ;
-(unsigned long long)erosionRadius;
-(void)setErosionRadius:(unsigned long long)arg1 ;
-(void)setDilationRadius:(unsigned long long)arg1 ;
-(unsigned long long)dilationRadius;
-(void)setCompositorAlgorithm:(long long)arg1 ;
-(void)executeOverlayMatteCallbackDual:(id)arg1 ;
-(void)executeOcclusionDepthStencilCallback:(id)arg1 ;
-(SCD_Struct_AR1)orientedVerticesWithResolution:(CGSize)arg1 ;
-(void)encodeAlphaResampleToCommandBuffer:(id)arg1 resolution:(CGSize)arg2 input:(id)arg3 output:(id)arg4 ;
-(void)encodeDepthResampleToCommandBuffer:(id)arg1 resolution:(CGSize)arg2 input:(id)arg3 output:(id)arg4 ;
-(id)initWithView:(id)arg1 mode:(long long)arg2 algorithm:(long long)arg3 ;
-(void)setForegroundBitMask:(unsigned long long)arg1 ;
-(void)setFilterEpsilon:(double)arg1 ;
-(void)setFilterScale:(double)arg1 ;
-(void)setFilterOffset:(double)arg1 ;
-(long long)compositorAlgorithm;
-(void)setCurrentFrame:(ARFrame *)arg1 ;
-(unsigned long long)foregroundBitMask;
-(void)setCurrentOrientation:(long long)arg1 ;
-(BOOL)showOcclusionGeometry;
-(void)setShowOcclusionGeometry:(BOOL)arg1 ;
-(double)depthScale;
-(void)setDepthScale:(double)arg1 ;
-(double)filterEpsilon;
-(double)filterScale;
-(double)filterOffset;
@end

