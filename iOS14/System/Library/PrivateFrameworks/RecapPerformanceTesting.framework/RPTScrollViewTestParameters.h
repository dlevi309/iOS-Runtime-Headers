/*
* Generated on Thursday, January 14, 2021 at 2:24:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RecapPerformanceTesting.framework/RecapPerformanceTesting
*/

#import <RecapPerformanceTesting/RecapPerformanceTesting-Structs.h>
#import <libobjc.A.dylib/RPTScrollTestParameters.h>
#import <libobjc.A.dylib/RPTBlockBasedScrollTestParameters.h>

@class NSString, RCPSyntheticEventStream;

@interface RPTScrollViewTestParameters : NSObject <RPTScrollTestParameters, RPTBlockBasedScrollTestParameters> {

	BOOL _preventSheetDismissal;
	BOOL _shouldFlick;
	NSString* _testName;
	double _amplitude;
	long long _direction;
	double _iterationDurationFactor;
	/*^block*/id _completionHandler;
	CGRect _scrollingBounds;

}

@property (nonatomic,copy,readonly) id composerBlock; 
@property (nonatomic,copy) NSString * testName;                                    //@synthesize testName=_testName - In the implementation block
@property (assign,nonatomic) CGRect scrollingBounds;                               //@synthesize scrollingBounds=_scrollingBounds - In the implementation block
@property (assign,nonatomic) double amplitude;                                     //@synthesize amplitude=_amplitude - In the implementation block
@property (assign,nonatomic) long long direction;                                  //@synthesize direction=_direction - In the implementation block
@property (assign,nonatomic) BOOL preventSheetDismissal;                           //@synthesize preventSheetDismissal=_preventSheetDismissal - In the implementation block
@property (assign,nonatomic) double iterationDurationFactor;                       //@synthesize iterationDurationFactor=_iterationDurationFactor - In the implementation block
@property (assign,nonatomic) BOOL shouldFlick;                                     //@synthesize shouldFlick=_shouldFlick - In the implementation block
@property (nonatomic,copy) id completionHandler;                                   //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,readonly) RCPSyntheticEventStream * eventStream; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newWithTestName:(id)arg1 scrollBounds:(CGRect)arg2 amplitude:(double)arg3 direction:(long long)arg4 completionHandler:(/*^block*/id)arg5 ;
+(id)newWithTestName:(id)arg1 scrollView:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(long long)direction;
-(RCPSyntheticEventStream *)eventStream;
-(void)setShouldFlick:(BOOL)arg1 ;
-(void)setDirection:(long long)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(BOOL)shouldFlick;
-(id)completionHandler;
-(void)setAmplitude:(double)arg1 ;
-(id)composerBlock;
-(void)setTestName:(NSString *)arg1 ;
-(double)amplitude;
-(void)setScrollingBounds:(CGRect)arg1 ;
-(NSString *)testName;
-(CGRect)scrollingBounds;
-(void)setPreventSheetDismissal:(BOOL)arg1 ;
-(void)setIterationDurationFactor:(double)arg1 ;
-(BOOL)preventSheetDismissal;
-(double)iterationDurationFactor;
@end

