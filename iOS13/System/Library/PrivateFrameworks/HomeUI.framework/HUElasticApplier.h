/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUApplier.h>

@class CADisplayLink;

@interface HUElasticApplier : HUApplier {

	BOOL _completesWhenAtRest;
	BOOL _progressBeginsFromInitialInputProgress;
	BOOL _applyOnlyOnProgressChanges;
	double _friction;
	double _tension;
	double _currentVelocity;
	/*^block*/id _progressInputBlock;
	CADisplayLink* _displayLink;
	unsigned long long _frameCount;
	unsigned long long _restingFrameCount;
	double _previousForce;

}

@property (nonatomic,copy) id progressInputBlock;                                      //@synthesize progressInputBlock=_progressInputBlock - In the implementation block
@property (nonatomic,retain) CADisplayLink * displayLink;                              //@synthesize displayLink=_displayLink - In the implementation block
@property (assign,nonatomic) unsigned long long frameCount;                            //@synthesize frameCount=_frameCount - In the implementation block
@property (assign,nonatomic) unsigned long long restingFrameCount;                     //@synthesize restingFrameCount=_restingFrameCount - In the implementation block
@property (assign,nonatomic) double previousForce;                                     //@synthesize previousForce=_previousForce - In the implementation block
@property (assign,nonatomic) double currentVelocity;                                   //@synthesize currentVelocity=_currentVelocity - In the implementation block
@property (assign,nonatomic) double friction;                                          //@synthesize friction=_friction - In the implementation block
@property (assign,nonatomic) double tension;                                           //@synthesize tension=_tension - In the implementation block
@property (assign,nonatomic) BOOL completesWhenAtRest;                                 //@synthesize completesWhenAtRest=_completesWhenAtRest - In the implementation block
@property (assign,nonatomic) BOOL progressBeginsFromInitialInputProgress;              //@synthesize progressBeginsFromInitialInputProgress=_progressBeginsFromInitialInputProgress - In the implementation block
@property (assign,nonatomic) BOOL applyOnlyOnProgressChanges;                          //@synthesize applyOnlyOnProgressChanges=_applyOnlyOnProgressChanges - In the implementation block
-(id)init;
-(BOOL)start;
-(void)setFrameCount:(unsigned long long)arg1 ;
-(unsigned long long)frameCount;
-(double)friction;
-(void)setFriction:(double)arg1 ;
-(CADisplayLink *)displayLink;
-(void)setDisplayLink:(CADisplayLink *)arg1 ;
-(double)currentVelocity;
-(double)tension;
-(void)setTension:(double)arg1 ;
-(BOOL)complete:(BOOL)arg1 ;
-(void)setCurrentVelocity:(double)arg1 ;
-(id)initWithProgressInputBlock:(/*^block*/id)arg1 ;
-(void)_displayLinkTick;
-(void)_invalidateDisplayLinkIfNecessary;
-(void)setProgressBeginsFromInitialInputProgress:(BOOL)arg1 ;
-(void)setCompletesWhenAtRest:(BOOL)arg1 ;
-(void)setProgressInputBlock:(id)arg1 ;
-(void)_updateProgressForInitialUpdate:(BOOL)arg1 ;
-(id)progressInputBlock;
-(BOOL)applyOnlyOnProgressChanges;
-(unsigned long long)restingFrameCount;
-(void)setRestingFrameCount:(unsigned long long)arg1 ;
-(BOOL)completesWhenAtRest;
-(void)setApplyOnlyOnProgressChanges:(BOOL)arg1 ;
-(BOOL)progressBeginsFromInitialInputProgress;
-(double)previousForce;
-(void)setPreviousForce:(double)arg1 ;
@end

