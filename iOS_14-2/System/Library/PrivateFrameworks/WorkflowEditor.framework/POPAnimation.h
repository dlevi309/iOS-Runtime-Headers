/*
* Generated on Thursday, January 14, 2021 at 2:28:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
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
-(long long)repeatCount;
-(void)setSolver:(SpringSolver<POP::Vector4<double> >Ref)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(SpringSolver<POP::Vector4<double> >Ref)solver;
-(double)beginTime;
-(id)init;
-(id)delegate;
-(void)setBeginTime:(double)arg1 ;
-(void)setRepeatCount:(long long)arg1 ;
-(void)setAutoreverses:(BOOL)arg1 ;
-(BOOL)autoreverses;
-(id)valueForUndefinedKey:(id)arg1 ;
-(id)debugDescription;
-(void)setPaused:(BOOL)arg1 ;
-(POPAnimationTracer *)tracer;
-(NSString *)name;
-(void)setDelegate:(id)arg1 ;
-(id)description;
-(void)setAnimationDidStartBlock:(id)arg1 ;
-(void)setRemovedOnCompletion:(BOOL)arg1 ;
-(int)type;
-(void)_initState;
-(id)currentValue;
-(id)animationDidStartBlock;
-(BOOL)removedOnCompletion;
-(void)setName:(NSString *)arg1 ;
-(id)_init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isPaused;
-(void)dealloc;
-(void)_appendDescription:(id)arg1 debug:(BOOL)arg2 ;
-(id)animationDidReachToValueBlock;
-(void)setAnimationDidReachToValueBlock:(id)arg1 ;
-(id)animationDidApplyBlock;
-(void)setAnimationDidApplyBlock:(id)arg1 ;
-(BOOL)repeatForever;
-(void)setRepeatForever:(BOOL)arg1 ;
-(BOOL)_advance:(id)arg1 currentTime:(double)arg2 elapsedTime:(double)arg3 ;
-(NSArray *)progressMarkers;
-(void)setProgressMarkers:(NSArray *)arg1 ;
@end

