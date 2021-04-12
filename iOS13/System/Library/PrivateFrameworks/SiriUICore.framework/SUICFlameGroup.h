/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
*/


@interface SUICFlameGroup : NSObject {

	BOOL _isAura;
	BOOL _isDyingOff;
	float _stateTime;
	float _zTime;
	float _globalAlpha;
	float _transitionPhase;
	float* _transitionPhasePtr;
	* _stateModifiersPtr;
	 _stateModifiers;

}

@property (assign,nonatomic) float stateTime;                        //@synthesize stateTime=_stateTime - In the implementation block
@property (assign,nonatomic) float zTime;                            //@synthesize zTime=_zTime - In the implementation block
@property (assign,nonatomic) float globalAlpha;                      //@synthesize globalAlpha=_globalAlpha - In the implementation block
@property (assign,nonatomic) float transitionPhase;                  //@synthesize transitionPhase=_transitionPhase - In the implementation block
@property (assign,nonatomic) float* transitionPhasePtr;              //@synthesize transitionPhasePtr=_transitionPhasePtr - In the implementation block
@property (assign,nonatomic)  stateModifiers;                        //@synthesize stateModifiers=_stateModifiers - In the implementation block
@property (assign,nonatomic) * stateModifiersPtr;                    //@synthesize stateModifiersPtr=_stateModifiersPtr - In the implementation block
@property (assign,nonatomic) BOOL isAura;                            //@synthesize isAura=_isAura - In the implementation block
@property (assign,nonatomic) BOOL isDyingOff;                        //@synthesize isDyingOff=_isDyingOff - In the implementation block
-(id)init;
-(id)description;
-(float)stateTime;
-(void)setStateTime:(float)arg1 ;
-(float)globalAlpha;
-(void)setGlobalAlpha:(float)arg1 ;
-(void)setTransitionPhase:(float)arg1 ;
-(void)setIsAura:(BOOL)arg1 ;
-(void)setIsDyingOff:(BOOL)arg1 ;
-(BOOL)isAura;
-(float*)transitionPhasePtr;
-(*)stateModifiersPtr;
-(float)zTime;
-(void)setZTime:(float)arg1 ;
-(BOOL)isDyingOff;
-(float)transitionPhase;
-(void)setTransitionPhasePtr:(float*)arg1 ;
-()stateModifiers;
-(void)setStateModifiers:;
-(void)setStateModifiersPtr:(*)arg1 ;
@end

