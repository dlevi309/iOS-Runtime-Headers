/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Cornobble.framework/Cornobble
*/

#import <Cornobble/Cornobble-Structs.h>
#import <libobjc.A.dylib/CRNScrollTestParameters.h>
#import <libobjc.A.dylib/CRNBlockBasedScrollTestParameters.h>

@class NSString, RCPSyntheticEventStream;

@interface CRNPagingScrollTestParameters : NSObject <CRNScrollTestParameters, CRNBlockBasedScrollTestParameters> {

	BOOL _useFlicks;
	NSString* _testName;
	/*^block*/id _completionHandler;
	unsigned long long _iterations;
	double _amplitude;
	long long _direction;
	double _iterationDuration;
	long long _realDirection;
	CGRect _scrollingBounds;

}

@property (nonatomic,readonly) long long realDirection;                            //@synthesize realDirection=_realDirection - In the implementation block
@property (assign,nonatomic) unsigned long long iterations;                        //@synthesize iterations=_iterations - In the implementation block
@property (assign,nonatomic) CGRect scrollingBounds;                               //@synthesize scrollingBounds=_scrollingBounds - In the implementation block
@property (assign,nonatomic) double amplitude;                                     //@synthesize amplitude=_amplitude - In the implementation block
@property (assign,nonatomic) long long direction;                                  //@synthesize direction=_direction - In the implementation block
@property (assign,nonatomic) double iterationDuration;                             //@synthesize iterationDuration=_iterationDuration - In the implementation block
@property (assign,nonatomic) BOOL useFlicks;                                       //@synthesize useFlicks=_useFlicks - In the implementation block
@property (nonatomic,copy) id completionHandler;                                   //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,readonly) RCPSyntheticEventStream * eventStream; 
@property (nonatomic,copy) NSString * testName;                                    //@synthesize testName=_testName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)direction;
-(RCPSyntheticEventStream *)eventStream;
-(void)setIterations:(unsigned long long)arg1 ;
-(void)setDirection:(long long)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(unsigned long long)iterations;
-(id)completionHandler;
-(void)setAmplitude:(double)arg1 ;
-(void)setIterationDuration:(double)arg1 ;
-(/*^block*/id)composerBlock;
-(void)setTestName:(NSString *)arg1 ;
-(double)amplitude;
-(void)scrollWithComposer:(id)arg1 fromPoint:(CGPoint)arg2 toPoint:(CGPoint)arg3 duration:(double)arg4 ;
-(void)setScrollingBounds:(CGRect)arg1 ;
-(NSString *)testName;
-(CGRect)scrollingBounds;
-(double)iterationDuration;
-(long long)realDirection;
-(BOOL)useFlicks;
-(id)initWithTestName:(id)arg1 iterations:(unsigned long long)arg2 scrollingBounds:(CGRect)arg3 amplitude:(double)arg4 direction:(long long)arg5 iterationDuration:(double)arg6 useFlicks:(BOOL)arg7 completionHandler:(/*^block*/id)arg8 ;
-(void)setUseFlicks:(BOOL)arg1 ;
@end

