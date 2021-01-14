/*
* Generated on Thursday, January 14, 2021 at 2:26:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@protocol MTLDevice, MTLRenderPipelineState, MTLBuffer;
#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
@class NSCalendar, NSDate, NTKCharacterResourceLoader, NSString, _Head, _Body, _Foot, _Arms, _Background, UIColor;

@interface NTKCharacterRenderer : NSObject {

	id<MTLDevice> _mtlDevice;
	NSCalendar* _cal;
	NSDate* _overrideDate;
	float _overrideDateFraction;
	double _fromHourPercent;
	double _fromMinutePercent;
	double _toHourPercent;
	double _toMinutePercent;
	float _animationFrameInterval;
	int _prevState;
	int _idealState;
	int _curState;
	int _endState;
	int _prevPose;
	int _idealPose;
	int _curPose;
	int _endPose;
	float _hourHandPos;
	float _minHandPos;
	id<MTLRenderPipelineState> _pipelines[4];
	unsigned long long _currentPipeline;
	BOOL _animatingToNewDate;
	BOOL _animatingIntoOrb;
	BOOL _applyInstantTimeWarp;
	BOOL _pinHandsBrightnessToMax;
	BOOL _sayCheese;
	float _blinkDuration;
	float _scrubOffset;
	BOOL _inTimeTravel;
	NSDate* _timeTravelEnterDate;
	NTKCharacterResourceLoader* _loader;
	CharacterPoseSpecs _poseSpecs[2];
	CharacterStateSpecs _stateSpecs[4];
	BOOL _active;
	float _characterBrightness;
	float _glowBrightness;
	float _numbersBrightness;
	float _numbersScale;
	float _numbersAlpha;
	int _modelMatrixLoc;
	int _clothingColorLoc;
	float _characterScale;
	float _zoomFraction;
	float _dampenBones;
	float _curTimeMod1Sec;
	float _curTimeMod15Sec;
	NSString* _prefix;
	 _globalOffset;
	 _globalScale;
	id<MTLBuffer> _geometryMtlBuffer;
	_Head* _head;
	_Body* _body;
	_Foot* _foot;
	_Arms* _arms;
	_Background* _background;
	UIColor* _clothingColor;
	double _desaturation;
	 _neckBone;
	SCD_Struct_NT16 _headMatrix;

}

@property (retain) id<MTLBuffer> geometryMtlBuffer;                              //@synthesize geometryMtlBuffer=_geometryMtlBuffer - In the implementation block
@property (retain) _Head * head;                                                 //@synthesize head=_head - In the implementation block
@property (retain) _Body * body;                                                 //@synthesize body=_body - In the implementation block
@property (retain) _Foot * foot;                                                 //@synthesize foot=_foot - In the implementation block
@property (retain) _Arms * arms;                                                 //@synthesize arms=_arms - In the implementation block
@property (retain) _Background * background;                                     //@synthesize background=_background - In the implementation block
@property (readonly) UIColor * clothingColor;                                    //@synthesize clothingColor=_clothingColor - In the implementation block
@property (readonly) double desaturation;                                        //@synthesize desaturation=_desaturation - In the implementation block
@property (readonly) int modelMatrixLoc;                                         //@synthesize modelMatrixLoc=_modelMatrixLoc - In the implementation block
@property (readonly) int clothingColorLoc;                                       //@synthesize clothingColorLoc=_clothingColorLoc - In the implementation block
@property (readonly) float characterScale;                                       //@synthesize characterScale=_characterScale - In the implementation block
@property (readonly) float zoomFraction;                                         //@synthesize zoomFraction=_zoomFraction - In the implementation block
@property (readonly) SCD_Struct_NT16 headMatrix;                                 //@synthesize headMatrix=_headMatrix - In the implementation block
@property (readonly)  neckBone;                                                  //@synthesize neckBone=_neckBone - In the implementation block
@property (readonly) float dampenBones;                                          //@synthesize dampenBones=_dampenBones - In the implementation block
@property (readonly) float curTimeMod1Sec;                                       //@synthesize curTimeMod1Sec=_curTimeMod1Sec - In the implementation block
@property (readonly) float curTimeMod15Sec;                                      //@synthesize curTimeMod15Sec=_curTimeMod15Sec - In the implementation block
@property (nonatomic,readonly) NSString * prefix;                                //@synthesize prefix=_prefix - In the implementation block
@property (nonatomic,readonly) BOOL active;                                      //@synthesize active=_active - In the implementation block
@property (nonatomic,readonly) NTKCharacterResourceLoader * loader;              //@synthesize loader=_loader - In the implementation block
@property (assign,nonatomic) float characterBrightness;                          //@synthesize characterBrightness=_characterBrightness - In the implementation block
@property (assign,nonatomic) float glowBrightness;                               //@synthesize glowBrightness=_glowBrightness - In the implementation block
@property (assign,nonatomic) float numbersBrightness;                            //@synthesize numbersBrightness=_numbersBrightness - In the implementation block
@property (assign,nonatomic) float numbersScale;                                 //@synthesize numbersScale=_numbersScale - In the implementation block
@property (assign,nonatomic) float numbersAlpha;                                 //@synthesize numbersAlpha=_numbersAlpha - In the implementation block
@property (assign)  globalOffset;                                                //@synthesize globalOffset=_globalOffset - In the implementation block
@property (assign)  globalScale;                                                 //@synthesize globalScale=_globalScale - In the implementation block
+(id)rendererWithCharacter:(unsigned long long)arg1 loader:(id)arg2 ;
-(void)setHead:(_Head *)arg1 ;
-(_Background *)background;
-(void)setBody:(_Body *)arg1 ;
-(void)setBackground:(_Background *)arg1 ;
-(_Body *)body;
-(NSString *)prefix;
-(BOOL)active;
-(NTKCharacterResourceLoader *)loader;
-(_Foot *)foot;
-(_Arms *)arms;
-(void)_localeChanged;
-(_Head *)head;
-(void)setTimeOffset:(double)arg1 ;
-(void)deactivate;
-(float)zoomFraction;
-(void)activate;
-(void)setAnimationFrameInterval:(float)arg1 ;
-(int)curPose;
-(void)dealloc;
-(void)setScrubOffset:(float)arg1 ;
-(void)prepareToZoom;
-(void)cleanupAfterZoom;
-(void)_raiseFootForBodyAnimation;
-(void)_lowerFootAfterBodyAnimation;
-(void)setupGeometry;
-(void)setupPipelineState;
-(void)setupBodyState;
-(void)significantTimeChanged:(id)arg1 ;
-(void)setupTextures;
-(void)_updateStateAndPose;
-(float)_getElbowScaleForPosition:(float)arg1 ;
-(void)loadNumbersTexture;
-(void)loadBackgroundTextures;
-(void)loadBodyTextures;
-(void)loadHeadTextures;
-(void)loadFootTextures;
-(void)loadHeadBlinkTextures;
-(void)loadShiftTextures;
-(void)_updateTimeVariables;
-(void)bindPipelineState:(unsigned long long)arg1 withEncoder:(id)arg2 ;
-(void)_updateWaitingForFootRaise;
-(void)_idleBodyAfterAnimation;
-(void)_applyClothingColorWithEncoder:(id)arg1 ;
-(BOOL)_footIsRaisedEnoughToStartAnimation;
-(void)_doneWaitingForFootRaise;
-(int)getBlinkFrameFor15sTime:(float)arg1 ;
-(void)_drawArmFromShoulder:(float)arg1 toWrist:(id)arg2 ;
-(void)_resetTimeVariable;
-(void)_drawBackgroundWithEncoder:(id)arg1 ;
-(void)_drawCharacterWithEncoder:(id)arg1 ;
-(void)_drawBodyWithEncoder:(id)arg1 ;
-(void)_drawTappingFootWithEncoder:(id)arg1 ;
-(void)_drawHourHandWithEncoder:(id)arg1 ;
-(void)_drawHeadWithEncoder:(id)arg1 ;
-(void)_drawMinuteHandWithEncoder:(id)arg1 ;
-(void)copyStateFrom:(id)arg1 ;
-(void)prepareToAnimateToDate:(id)arg1 forOrb:(BOOL)arg2 ;
-(void)setOverrideDateFraction:(float)arg1 ;
-(void)cleanupToOverrideDate:(id)arg1 ;
-(void)setClothingColor:(id)arg1 andDesaturation:(double)arg2 ;
-(id)initWithCharacter:(unsigned long long)arg1 loader:(id)arg2 prefix:(id)arg3 ;
-(void)_setPoseSpecs:(CharacterPoseSpecs)arg1 ;
-(void)_setStateSpecs:(CharacterStateSpecs)arg1 ;
-(void)_setBlinkDuration:(float)arg1 ;
-(void)setZoomFraction:(double)arg1 diameter:(double)arg2 ;
-(void)forceUpdateTimeVariables;
-(void)scrubToDate:(id)arg1 ;
-(void)renderWithEncoder:(id)arg1 ;
-(int)curState;
-(float)characterBrightness;
-(void)setCharacterBrightness:(float)arg1 ;
-(float)glowBrightness;
-(void)setGlowBrightness:(float)arg1 ;
-(float)numbersBrightness;
-(void)setNumbersBrightness:(float)arg1 ;
-(float)numbersScale;
-(void)setNumbersScale:(float)arg1 ;
-(float)numbersAlpha;
-(void)setNumbersAlpha:(float)arg1 ;
-()globalOffset;
-(void)setGlobalOffset:;
-()globalScale;
-(void)setGlobalScale:;
-(id<MTLBuffer>)geometryMtlBuffer;
-(void)setGeometryMtlBuffer:(id<MTLBuffer>)arg1 ;
-(void)setFoot:(_Foot *)arg1 ;
-(void)setArms:(_Arms *)arg1 ;
-(UIColor *)clothingColor;
-(double)desaturation;
-(int)modelMatrixLoc;
-(int)clothingColorLoc;
-(float)characterScale;
-(SCD_Struct_NT16)headMatrix;
-()neckBone;
-(float)dampenBones;
-(float)curTimeMod1Sec;
-(float)curTimeMod15Sec;
@end
