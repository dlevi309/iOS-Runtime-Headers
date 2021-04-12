/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


#import <PhotosUICore/PhotosUICore-Structs.h>
@interface _PXValueAnimation : NSObject {

	double _duration;
	double _startTime;
	double _currentMediaTime;
	PXValueAnimationSpec _spec;

}

@property (nonatomic,readonly) double duration;                        //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) PXValueAnimationSpec spec;              //@synthesize spec=_spec - In the implementation block
@property (nonatomic,readonly) double currentValue; 
@property (nonatomic,readonly) BOOL completed; 
@property (assign,nonatomic) double startTime;                         //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) double currentMediaTime;                  //@synthesize currentMediaTime=_currentMediaTime - In the implementation block
-(double)remainingTime;
-(id)init;
-(BOOL)completed;
-(void)setStartTime:(double)arg1 ;
-(void)setCurrentMediaTime:(double)arg1 ;
-(PXValueAnimationSpec)spec;
-(double)elapsedTime;
-(id)description;
-(double)currentMediaTime;
-(double)currentValue;
-(double)duration;
-(id)initWithDuration:(double)arg1 currentMediaTime:(double)arg2 spec:(PXValueAnimationSpec)arg3 ;
-(double)startTime;
@end

