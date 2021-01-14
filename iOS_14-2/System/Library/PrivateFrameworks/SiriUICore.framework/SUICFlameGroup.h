/*
* Generated on Thursday, January 14, 2021 at 2:24:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isAura;
-(float)globalAlpha;
-(id)init;
-(void)setIsDyingOff:(BOOL)arg1 ;
-(float*)transitionPhasePtr;
-(void)setZTime:(float)arg1 ;
-(void)setIsAura:(BOOL)arg1 ;
-(float)zTime;
-(float)stateTime;
-(void)setGlobalAlpha:(float)arg1 ;
-(void)setStateModifiers:;
-(void)setTransitionPhase:(float)arg1 ;
-(void)setStateTime:(float)arg1 ;
-(id)description;
-()stateModifiers;
-(*)stateModifiersPtr;
-(float)transitionPhase;
-(BOOL)isDyingOff;
-(void)setStateModifiersPtr:(*)arg1 ;
-(void)setTransitionPhasePtr:(float*)arg1 ;
@end

