/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUApplier.h>

@class CADisplayLink;

@interface HUDisplayLinkApplier : HUApplier {

	BOOL _applyOnlyOnProgressChanges;
	BOOL _completesWhenAtRest;
	BOOL _atRest;
	/*^block*/id _progressInputBlock;
	CADisplayLink* _displayLink;
	unsigned long long _restingFrameCount;

}

@property (nonatomic,copy) id progressInputBlock;                               //@synthesize progressInputBlock=_progressInputBlock - In the implementation block
@property (nonatomic,retain) CADisplayLink * displayLink;                       //@synthesize displayLink=_displayLink - In the implementation block
@property (assign,getter=isAtRest,nonatomic) BOOL atRest;                       //@synthesize atRest=_atRest - In the implementation block
@property (assign,nonatomic) unsigned long long restingFrameCount;              //@synthesize restingFrameCount=_restingFrameCount - In the implementation block
@property (assign,nonatomic) BOOL applyOnlyOnProgressChanges;                   //@synthesize applyOnlyOnProgressChanges=_applyOnlyOnProgressChanges - In the implementation block
@property (assign,nonatomic) BOOL completesWhenAtRest;                          //@synthesize completesWhenAtRest=_completesWhenAtRest - In the implementation block
-(id)init;
-(BOOL)start;
-(CADisplayLink *)displayLink;
-(void)setDisplayLink:(CADisplayLink *)arg1 ;
-(BOOL)complete:(BOOL)arg1 ;
-(id)initWithProgressInputBlock:(/*^block*/id)arg1 ;
-(double)effectiveInputProgressForBlock:(/*^block*/id)arg1 ;
-(void)_displayLinkTick;
-(void)_invalidateDisplayLinkIfNecessary;
-(void)setCompletesWhenAtRest:(BOOL)arg1 ;
-(void)setProgressInputBlock:(id)arg1 ;
-(void)_updateProgressForInitialUpdate:(BOOL)arg1 ;
-(id)progressInputBlock;
-(BOOL)applyOnlyOnProgressChanges;
-(unsigned long long)restingFrameCount;
-(void)setRestingFrameCount:(unsigned long long)arg1 ;
-(void)setAtRest:(BOOL)arg1 ;
-(BOOL)completesWhenAtRest;
-(void)restingStateDidChange;
-(void)setApplyOnlyOnProgressChanges:(BOOL)arg1 ;
-(BOOL)isAtRest;
@end

