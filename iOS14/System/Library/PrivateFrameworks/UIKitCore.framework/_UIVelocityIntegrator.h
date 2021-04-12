/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSMutableArray;

@interface _UIVelocityIntegrator : NSObject {

	BOOL _hasMemoizedVelocity;
	double _minimumRequiredMovement;
	double _hysteresisTimeInterval;
	NSMutableArray* _samples;
	double _resetHysteresisOnSampleThetaDiff;
	/*^block*/id _didResetHysteresisOnThetaDiffHandler;
	CGVector _offset;
	CGVector _totalTranslation;
	CGVector _memoizedVelocity;

}

@property (assign,nonatomic) CGVector offset;                                      //@synthesize offset=_offset - In the implementation block
@property (nonatomic,retain) NSMutableArray * samples;                             //@synthesize samples=_samples - In the implementation block
@property (assign,nonatomic) CGVector totalTranslation;                            //@synthesize totalTranslation=_totalTranslation - In the implementation block
@property (assign,nonatomic) BOOL hasMemoizedVelocity;                             //@synthesize hasMemoizedVelocity=_hasMemoizedVelocity - In the implementation block
@property (assign,nonatomic) CGVector memoizedVelocity;                            //@synthesize memoizedVelocity=_memoizedVelocity - In the implementation block
@property (assign,nonatomic) double resetHysteresisOnSampleThetaDiff;              //@synthesize resetHysteresisOnSampleThetaDiff=_resetHysteresisOnSampleThetaDiff - In the implementation block
@property (nonatomic,copy) id didResetHysteresisOnThetaDiffHandler;                //@synthesize didResetHysteresisOnThetaDiffHandler=_didResetHysteresisOnThetaDiffHandler - In the implementation block
@property (assign,nonatomic) double minimumRequiredMovement;                       //@synthesize minimumRequiredMovement=_minimumRequiredMovement - In the implementation block
@property (nonatomic,readonly) CGVector velocity; 
@property (assign,nonatomic) double hysteresisTimeInterval;                        //@synthesize hysteresisTimeInterval=_hysteresisTimeInterval - In the implementation block
-(NSMutableArray *)samples;
-(void)setMinimumRequiredMovement:(double)arg1 ;
-(double)minimumRequiredMovement;
-(void)setSamples:(NSMutableArray *)arg1 ;
-(CGVector)velocity;
-(id)init;
-(void)addSample:(CGPoint)arg1 ;
-(void)setTotalTranslation:(CGVector)arg1 ;
-(BOOL)hasMemoizedVelocity;
-(void)setDidResetHysteresisOnThetaDiffHandler:(id)arg1 ;
-(id)didResetHysteresisOnThetaDiffHandler;
-(void)setHasMemoizedVelocity:(BOOL)arg1 ;
-(CGVector)offset;
-(BOOL)hasVelocity;
-(CGVector)totalTranslation;
-(double)hysteresisTimeInterval;
-(double)resetHysteresisOnSampleThetaDiff;
-(void)setResetHysteresisOnSampleThetaDiff:(double)arg1 ;
-(void)setMemoizedVelocity:(CGVector)arg1 ;
-(void)setOffset:(CGVector)arg1 ;
-(void)reset;
-(CGVector)_computedVelocity;
-(void)setHysteresisTimeInterval:(double)arg1 ;
-(long long)_sampleCount;
-(CGVector)memoizedVelocity;
@end

