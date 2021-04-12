/*
* Generated on Thursday, January 14, 2021 at 2:24:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RecapPerformanceTesting.framework/RecapPerformanceTesting
*/

#import <RecapPerformanceTesting/RecapPerformanceTesting-Structs.h>
#import <libobjc.A.dylib/RPTBlockBasedScrollTestParameters.h>
#import <libobjc.A.dylib/RPTScrollTestParameters.h>

@class NSString, RCPSyntheticEventStream;

@interface RPTOscillationScrollTestParameters : NSObject <RPTBlockBasedScrollTestParameters, RPTScrollTestParameters> {

	BOOL _shouldFlick;
	BOOL _preventDismissalGestures;
	BOOL _finishWithHalfIteration;
	NSString* _testName;
	/*^block*/id _completionHandler;
	unsigned long long _iterations;
	double _amplitudeVariationPerIteration;
	double _initialAmplitude;
	long long _initialDirection;
	double _iterationDuration;
	long long _realInitialDirection;
	CGRect _scrollingBounds;

}

@property (nonatomic,readonly) long long realInitialDirection;                     //@synthesize realInitialDirection=_realInitialDirection - In the implementation block
@property (assign,nonatomic) unsigned long long iterations;                        //@synthesize iterations=_iterations - In the implementation block
@property (assign,nonatomic) CGRect scrollingBounds;                               //@synthesize scrollingBounds=_scrollingBounds - In the implementation block
@property (assign,nonatomic) BOOL shouldFlick;                                     //@synthesize shouldFlick=_shouldFlick - In the implementation block
@property (assign,nonatomic) BOOL preventDismissalGestures;                        //@synthesize preventDismissalGestures=_preventDismissalGestures - In the implementation block
@property (assign,nonatomic) BOOL finishWithHalfIteration;                         //@synthesize finishWithHalfIteration=_finishWithHalfIteration - In the implementation block
@property (assign,nonatomic) double amplitudeVariationPerIteration;                //@synthesize amplitudeVariationPerIteration=_amplitudeVariationPerIteration - In the implementation block
@property (assign,nonatomic) double initialAmplitude;                              //@synthesize initialAmplitude=_initialAmplitude - In the implementation block
@property (assign,nonatomic) long long initialDirection;                           //@synthesize initialDirection=_initialDirection - In the implementation block
@property (assign,nonatomic) double iterationDuration;                             //@synthesize iterationDuration=_iterationDuration - In the implementation block
@property (nonatomic,copy) id completionHandler;                                   //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,readonly) RCPSyntheticEventStream * eventStream; 
@property (nonatomic,copy) NSString * testName;                                    //@synthesize testName=_testName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setFinishWithHalfIteration:(BOOL)arg1 ;
-(RCPSyntheticEventStream *)eventStream;
-(void)setIterations:(unsigned long long)arg1 ;
-(void)setShouldFlick:(BOOL)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(id)initWithTestName:(id)arg1 iterations:(unsigned long long)arg2 scrollingBounds:(CGRect)arg3 useFlicks:(BOOL)arg4 preventDismissalGestures:(BOOL)arg5 initialAmplitude:(double)arg6 amplitudeVariationPerIteration:(double)arg7 initialDirection:(long long)arg8 iterationDuration:(double)arg9 finishWithHalfIteration:(BOOL)arg10 ;
-(unsigned long long)iterations;
-(void)setInitialAmplitude:(double)arg1 ;
-(CGPoint)finalFingerPosition;
-(void)setAmplitudeVariationPerIteration:(double)arg1 ;
-(double)initialAmplitude;
-(BOOL)shouldFlick;
-(void)setInitialDirection:(long long)arg1 ;
-(id)completionHandler;
-(long long)realInitialDirection;
-(BOOL)preventDismissalGestures;
-(void)setIterationDuration:(double)arg1 ;
-(/*^block*/id)composerBlock;
-(void)setPreventDismissalGestures:(BOOL)arg1 ;
-(double)amplitudeVariationPerIteration;
-(void)setTestName:(NSString *)arg1 ;
-(BOOL)finishWithHalfIteration;
-(CGPoint)initialFingerPosition;
-(id)initWithTestName:(id)arg1 iterations:(unsigned long long)arg2 scrollingBounds:(CGRect)arg3 useFlicks:(BOOL)arg4 preventDismissalGestures:(BOOL)arg5 initialAmplitude:(double)arg6 amplitudeVariationPerIteration:(double)arg7 initialDirection:(long long)arg8 iterationDuration:(double)arg9 finishWithHalfIteration:(BOOL)arg10 completionHandler:(/*^block*/id)arg11 ;
-(long long)initialDirection;
-(void)scrollWithComposer:(id)arg1 fromPoint:(CGPoint)arg2 toPoint:(CGPoint)arg3 duration:(double)arg4 ;
-(void)setScrollingBounds:(CGRect)arg1 ;
-(NSString *)testName;
-(CGRect)scrollingBounds;
-(double)iterationDuration;
@end

