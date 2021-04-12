/*
* Generated on Thursday, January 14, 2021 at 2:20:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class _UIHyperInteractor;

@interface _UIPageControlInteractor : NSObject {

	double _scrubbingOffset;
	double _lowerBound;
	double _upperBound;
	_UIHyperInteractor* _interactor;

}

@property (nonatomic,retain) _UIHyperInteractor * interactor;                //@synthesize interactor=_interactor - In the implementation block
@property (nonatomic,readonly) double joggingDistance; 
@property (nonatomic,readonly) double unconstrainedPosition; 
@property (nonatomic,readonly) double boundedScrubPosition; 
@property (nonatomic,readonly) double unboundedScrubPosition; 
@property (nonatomic,readonly) double hyperConstrainedPosition; 
-(void)setInteractor:(_UIHyperInteractor *)arg1 ;
-(double)boundedScrubPosition;
-(void)setUnconstrainedPosition:(double)arg1 offset:(double)arg2 ;
-(void)reduceScrubOffsetByOffset:(double)arg1 ;
-(void)updateScrubLowerBound:(double)arg1 upperBound:(double)arg2 ;
-(id)initWithMaximumDistance:(double)arg1 ;
-(void)setTranslation:(double)arg1 velocity:(double)arg2 ;
-(void)reduceScrubOffsetByRatio:(double)arg1 ;
-(double)joggingDistance;
-(void)commitTranslation;
-(double)hyperConstrainedPosition;
-(void)updateRubberbandLowerBound:(double)arg1 upperBound:(double)arg2 ;
-(double)unboundedScrubPosition;
-(_UIHyperInteractor *)interactor;
-(double)unconstrainedPosition;
@end

