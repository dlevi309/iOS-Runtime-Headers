/*
* Generated on Thursday, January 14, 2021 at 2:24:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
*/

#import <SiriUICore/SiriUICore-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/SUICFlamesViewProviding.h>

@protocol SUICFlamesViewProvidingDelegate;
@class UIImage, UIColor, CADisplayLink, EAGLContext, NSMutableSet, NSMutableArray, SUICFlameGroup, UIScreen, UIImageView, SUICAudioLevelSmoother, NSString;

@interface SUICFlamesViewLegacy : UIView <SUICFlamesViewProviding> {

	CADisplayLink* _displayLink;
	EAGLContext* _eaglContext;
	EAGLContext* _previousContext;
	long long _currentContextCount;
	NSMutableSet* _renderingDisabledReasons;
	unsigned _framebufferHandle;
	unsigned _renderbufferHandle;
	int _flameProgramHandle;
	int _auraProgramHandle;
	int _vShadID;
	int _fShadID;
	unsigned _vertexArrayObjectHandle;
	unsigned _vertexBufferHandle;
	unsigned _elementArrayHandle;
	unsigned _numVertices;
	unsigned _numAuraIndices;
	unsigned _numAuraIndicesCulled;
	unsigned _numWaveIndices;
	unsigned _maxVertexCircles;
	unsigned _auraVertexCircles;
	float _maxSubdivisionLevel;
	float _auraMinSubdivisionLevel;
	float _auraMaxSubdivisionLevel;
	NSMutableArray* _flameGroups;
	SUICFlameGroup* _currentFlameGroup;
	int _viewWidth;
	int _viewHeight;
	float _dictationUnitSize;
	UIScreen* _screen;
	UIImageView* _overlayImageView;
	double _startTime;
	double _dictationRedColor;
	double _dictationGreenColor;
	double _dictationBlueColor;
	SUICAudioLevelSmoother* _levelSmoother;
	long long _fidelity;
	double _frameRateScalingFactor;
	BOOL _transitionFinished;
	BOOL _isInitialized;
	BOOL _hasCustomActiveFrame;
	BOOL _shadersAreCompiled;
	BOOL _reduceMotionEnabled;
	BOOL _showAura;
	BOOL _freezesAura;
	BOOL _renderInBackground;
	BOOL _flamesPaused;
	BOOL _accelerateTransitions;
	BOOL _reduceFrameRate;
	BOOL _reduceThinkingFramerate;
	long long _mode;
	long long _state;
	double _horizontalScaleFactor;
	UIImage* _overlayImage;
	id<SUICFlamesViewProvidingDelegate> _flamesDelegate;
	UIColor* _dictationColor;
	CGRect _activeFrame;

}

@property (nonatomic,readonly) BOOL isRenderingEnabled; 
@property (assign,nonatomic,__weak) id<SUICFlamesViewProvidingDelegate> flamesDelegate;              //@synthesize flamesDelegate=_flamesDelegate - In the implementation block
@property (assign,nonatomic) long long mode;                                                         //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) long long state;                                                        //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) BOOL showAura;                                                          //@synthesize showAura=_showAura - In the implementation block
@property (assign,nonatomic) BOOL freezesAura;                                                       //@synthesize freezesAura=_freezesAura - In the implementation block
@property (assign,nonatomic) BOOL reduceFrameRate;                                                   //@synthesize reduceFrameRate=_reduceFrameRate - In the implementation block
@property (assign,nonatomic) BOOL reduceThinkingFramerate;                                           //@synthesize reduceThinkingFramerate=_reduceThinkingFramerate - In the implementation block
@property (assign,nonatomic) CGRect activeFrame;                                                     //@synthesize activeFrame=_activeFrame - In the implementation block
@property (nonatomic,retain) UIImage * overlayImage;                                                 //@synthesize overlayImage=_overlayImage - In the implementation block
@property (nonatomic,retain) UIColor * dictationColor;                                               //@synthesize dictationColor=_dictationColor - In the implementation block
@property (assign,nonatomic) BOOL renderInBackground;                                                //@synthesize renderInBackground=_renderInBackground - In the implementation block
@property (assign,nonatomic) BOOL flamesPaused;                                                      //@synthesize flamesPaused=_flamesPaused - In the implementation block
@property (assign,nonatomic) double horizontalScaleFactor;                                           //@synthesize horizontalScaleFactor=_horizontalScaleFactor - In the implementation block
@property (assign,nonatomic) BOOL accelerateTransitions;                                             //@synthesize accelerateTransitions=_accelerateTransitions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)prewarmShadersForScreen:(id)arg1 size:(CGSize)arg2 fidelity:(long long)arg3 ;
+(id)_indexCache;
+(void)setIndexCacheSize:(unsigned long long)arg1 ;
+(void)prewarmShadersForScreen:(id)arg1 activeFrame:(CGRect)arg2 fidelity:(long long)arg3 ;
+(void)prewarmShadersForScreen:(id)arg1 initialFrame:(CGRect)arg2 activeFrame:(CGRect)arg3 fidelity:(long long)arg4 prewarmInBackground:(BOOL)arg5 ;
+(BOOL)_supportsAdaptiveFramerate;
+(Class)layerClass;
+(void)prewarmShadersForScreen:(id)arg1 size:(CGSize)arg2 fidelity:(long long)arg3 prewarmInBackground:(BOOL)arg4 ;
+(void)prewarmShadersForScreen:(id)arg1 size:(CGSize)arg2 ;
-(void)_tearDownDisplayLink;
-(void)setAccelerateTransitions:(BOOL)arg1 ;
-(void)setActiveFrame:(CGRect)arg1 ;
-(void)_applicationWillResignActive:(id)arg1 ;
-(BOOL)renderInBackground;
-(void)_applicationDidBecomeActive:(id)arg1 ;
-(id<SUICFlamesViewProvidingDelegate>)flamesDelegate;
-(long long)mode;
-(void)resetAndReinitialize:(BOOL)arg1 ;
-(void)prewarmShadersForCurrentMode;
-(CGRect)activeFrame;
-(BOOL)reduceThinkingFramerate;
-(BOOL)isRenderingEnabled;
-(UIColor *)dictationColor;
-(double)_currentDisplayScale;
-(void)setOverlayImage:(UIImage *)arg1 ;
-(void)fadeOutCurrentAura;
-(BOOL)reduceFrameRate;
-(BOOL)_setupVertexBuffer;
-(void)setRenderingEnabled:(BOOL)arg1 forReason:(id)arg2 ;
-(void)setReduceThinkingFramerate:(BOOL)arg1 ;
-(void)setDictationColor:(UIColor *)arg1 ;
-(BOOL)showAura;
-(BOOL)accelerateTransitions;
-(void)setHidden:(BOOL)arg1 ;
-(BOOL)freezesAura;
-(UIImage *)overlayImage;
-(void)setShowAura:(BOOL)arg1 ;
-(void)setReduceFrameRate:(BOOL)arg1 ;
-(void)setFreezesAura:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 screen:(id)arg2 fidelity:(long long)arg3 ;
-(double)horizontalScaleFactor;
-(void)didMoveToSuperview;
-(void)setHorizontalScaleFactor:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 screenScale:(double)arg2 fidelity:(long long)arg3 ;
-(float)_currentMicPowerLevel;
-(void)setMode:(long long)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)_setupDisplayLink;
-(int)_generateIndicesForNumCircleShapes:(int)arg1 withMaxSubdivisionLevel:(float)arg2 startingWithNumSubdivisionLevel:(float)arg3 forIndices:(unsigned*)arg4 atStartIndex:(int)arg5 withFill:(BOOL)arg6 withCullingForAura:(BOOL)arg7 forVertices:({?=}*)arg8 ;
-(BOOL)_resizeFromLayer:(id)arg1 ;
-(BOOL)flamesPaused;
-(void)setFlamesDelegate:(id<SUICFlamesViewProvidingDelegate>)arg1 ;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(void)layoutSubviews;
-(void)setFrame:(CGRect)arg1 ;
-(void)_setPreferredFramesPerSecond;
-(BOOL)inSiriMode;
-(long long)_preferredFramesPerSecond;
-(2)_predeterminedVertexPositionForAuraWithPolarVertex:;
-(void)_didFinishTransition;
-(BOOL)_deviceNeeds2xFlamesWithCurrentScale:(double)arg1 ;
-(void)setState:(long long)arg1 ;
-(void)_updateOrthoProjection;
-(long long)state;
-(BOOL)_isOriginatingProcessInBackground;
-(void)setFlamesPaused:(BOOL)arg1 ;
-(void)setRenderInBackground:(BOOL)arg1 ;
-(void)_updateCurveLayer:(id)arg1 ;
-(void)_reduceMotionStatusChanged:(id)arg1 ;
-(void)_setValuesForFidelity:(long long)arg1 ;
-(unsigned)_numVerticesPerCircle;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)_prewarmShaders;
-(BOOL)inDictationMode;
-(void)_updateDisplayLinkPausedState;
-(void)dealloc;
-(BOOL)_setCurrentContext;
-(void)_restoreCurrentContext;
-(void)_cleanupGL;
-(BOOL)_initGLAndSetupDisplayLink:(BOOL)arg1 ;
-(BOOL)_setupFramebuffer;
-(BOOL)_setupShaders;
-(void)stopRenderingAndCleanupGL;
@end

