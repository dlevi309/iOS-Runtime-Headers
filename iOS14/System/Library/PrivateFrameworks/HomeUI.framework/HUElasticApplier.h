/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)frameCount;
-(double)friction;
-(double)tension;
-(void)setFrameCount:(unsigned long long)arg1 ;
-(CADisplayLink *)displayLink;
-(void)setDisplayLink:(CADisplayLink *)arg1 ;
-(id)init;
-(void)setTension:(double)arg1 ;
-(BOOL)start;
-(void)setFriction:(double)arg1 ;
-(void)setCurrentVelocity:(double)arg1 ;
-(BOOL)complete:(BOOL)arg1 ;
-(double)currentVelocity;
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

