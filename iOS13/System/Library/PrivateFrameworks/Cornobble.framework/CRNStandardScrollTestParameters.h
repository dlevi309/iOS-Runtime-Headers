/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Cornobble.framework/Cornobble
*/

#import <Cornobble/Cornobble-Structs.h>
#import <Cornobble/CRNGroupScrollTestParameters.h>

@class NSString;

@interface CRNStandardScrollTestParameters : CRNGroupScrollTestParameters {

	BOOL _preventDismissalGestures;
	BOOL _shouldFlick;
	NSString* _testName;
	/*^block*/id _completionHandler;
	double _amplitude;
	long long _direction;
	double _iterationDuration;
	unsigned long long _iterations;
	CGRect _scrollingBounds;

}

@property (assign,nonatomic) CGRect scrollingBounds;                     //@synthesize scrollingBounds=_scrollingBounds - In the implementation block
@property (assign,nonatomic) double amplitude;                           //@synthesize amplitude=_amplitude - In the implementation block
@property (assign,nonatomic) long long direction;                        //@synthesize direction=_direction - In the implementation block
@property (assign,nonatomic) BOOL preventDismissalGestures;              //@synthesize preventDismissalGestures=_preventDismissalGestures - In the implementation block
@property (assign,nonatomic) double iterationDuration;                   //@synthesize iterationDuration=_iterationDuration - In the implementation block
@property (assign,nonatomic) unsigned long long iterations;              //@synthesize iterations=_iterations - In the implementation block
@property (assign,nonatomic) BOOL shouldFlick;                           //@synthesize shouldFlick=_shouldFlick - In the implementation block
@property (nonatomic,copy) id completionHandler;                         //@synthesize completionHandler=_completionHandler - In the implementation block
+(id)parametersForTestName:(id)arg1 scrollView:(id)arg2 iterations:(unsigned long long)arg3 direction:(long long)arg4 preventDismissalGestures:(BOOL)arg5 canUseFlicks:(BOOL)arg6 completionHandler:(/*^block*/id)arg7 ;
+(id)parametersForTestName:(id)arg1 scrollView:(id)arg2 iterations:(unsigned long long)arg3 amplitude:(double)arg4 direction:(long long)arg5 preventDismissalGestures:(BOOL)arg6 canUseFlicks:(BOOL)arg7 completionHandler:(/*^block*/id)arg8 ;
+(id)parametersForTestName:(id)arg1 scrollView:(id)arg2 iterations:(unsigned long long)arg3 direction:(long long)arg4 preventDismissalGestures:(BOOL)arg5 canUseFlicks:(BOOL)arg6 ;
+(id)parametersForTestName:(id)arg1 scrollView:(id)arg2 iterations:(unsigned long long)arg3 preventDismissalGestures:(BOOL)arg4 canUseFlicks:(BOOL)arg5 completionHandler:(/*^block*/id)arg6 ;
-(long long)direction;
-(void)setDirection:(long long)arg1 ;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(id)testName;
-(void)setTestName:(id)arg1 ;
-(unsigned long long)iterations;
-(void)setIterations:(unsigned long long)arg1 ;
-(double)amplitude;
-(void)setAmplitude:(double)arg1 ;
-(/*^block*/id)composerBlock;
-(id)initWithTestName:(id)arg1 iterations:(unsigned long long)arg2 scrollingBounds:(CGRect)arg3 amplitude:(double)arg4 direction:(long long)arg5 preventDismissalGestures:(BOOL)arg6 iterationDuration:(double)arg7 canUseFlicks:(BOOL)arg8 completionHandler:(/*^block*/id)arg9 ;
-(CGRect)scrollingBounds;
-(BOOL)preventDismissalGestures;
-(double)iterationDuration;
-(BOOL)shouldFlick;
-(id)initWithTestName:(id)arg1 iterations:(unsigned long long)arg2 scrollingBounds:(CGRect)arg3 amplitude:(double)arg4 direction:(long long)arg5 preventDismissalGestures:(BOOL)arg6 iterationDuration:(double)arg7 canUseFlicks:(BOOL)arg8 ;
-(void)setScrollingBounds:(CGRect)arg1 ;
-(void)setPreventDismissalGestures:(BOOL)arg1 ;
-(void)setIterationDuration:(double)arg1 ;
-(void)setShouldFlick:(BOOL)arg1 ;
@end

