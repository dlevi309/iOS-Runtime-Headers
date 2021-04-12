/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString, POPAnimationTracer;

@interface POPAnimation : NSObject <NSCopying> {

	POPAnimationState* _state;
	SpringSolver<POP::Vector4<double> >Ref _solver;
	id _currentValue;
	NSArray* _progressMarkers;

}

@property (assign,nonatomic) SpringSolver<POP::Vector4<double> >Ref solver;              //@synthesize solver=_solver - In the implementation block
@property (nonatomic,readonly) int type; 
@property (nonatomic,copy,readonly) id currentValue;                                     //@synthesize currentValue=_currentValue - In the implementation block
@property (nonatomic,copy) NSArray * progressMarkers;                                    //@synthesize progressMarkers=_progressMarkers - In the implementation block
@property (nonatomic,copy) NSString * name; 
@property (assign,nonatomic) double beginTime; 
@property (assign,nonatomic,__weak) id delegate; 
@property (nonatomic,readonly) POPAnimationTracer * tracer; 
@property (nonatomic,copy) id animationDidStartBlock; 
@property (nonatomic,copy) id animationDidReachToValueBlock; 
@property (nonatomic,copy) id completionBlock; 
@property (nonatomic,copy) id animationDidApplyBlock; 
@property (assign,nonatomic) BOOL removedOnCompletion; 
@property (assign,getter=isPaused,nonatomic) BOOL paused; 
@property (assign,nonatomic) BOOL autoreverses; 
@property (assign,nonatomic) long long repeatCount; 
@property (assign,nonatomic) BOOL repeatForever; 
-(id)init;
-(void)dealloc;
-(id)description;
-(id)debugDescription;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)type;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(id)_init;
-(void)setName:(NSString *)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(BOOL)isPaused;
-(void)setPaused:(BOOL)arg1 ;
-(double)beginTime;
-(void)setBeginTime:(double)arg1 ;
-(void)setAutoreverses:(BOOL)arg1 ;
-(void)setRepeatCount:(long long)arg1 ;
-(SpringSolver<POP::Vector4<double> >Ref)solver;
-(void)setSolver:(SpringSolver<POP::Vector4<double> >Ref)arg1 ;
-(void)setRemovedOnCompletion:(BOOL)arg1 ;
-(id)currentValue;
-(BOOL)autoreverses;
-(long long)repeatCount;
-(id)animationDidStartBlock;
-(void)setAnimationDidStartBlock:(id)arg1 ;
-(BOOL)removedOnCompletion;
-(void)_initState;
-(POPAnimationTracer *)tracer;
-(id)animationDidReachToValueBlock;
-(void)setAnimationDidReachToValueBlock:(id)arg1 ;
-(id)animationDidApplyBlock;
-(void)setAnimationDidApplyBlock:(id)arg1 ;
-(BOOL)repeatForever;
-(void)setRepeatForever:(BOOL)arg1 ;
-(BOOL)_advance:(id)arg1 currentTime:(double)arg2 elapsedTime:(double)arg3 ;
-(NSArray *)progressMarkers;
-(void)setProgressMarkers:(NSArray *)arg1 ;
-(void)_appendDescription:(id)arg1 debug:(BOOL)arg2 ;
@end

