/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/SXAnalyticsEvent.h>

@interface SXArticleScrollEvent : SXAnalyticsEvent {

	double _startPosition;
	double _endPosition;
	double _targetPosition;
	double _velocity;

}

@property (assign,nonatomic) double startPosition;               //@synthesize startPosition=_startPosition - In the implementation block
@property (assign,nonatomic) double endPosition;                 //@synthesize endPosition=_endPosition - In the implementation block
@property (assign,nonatomic) double targetPosition;              //@synthesize targetPosition=_targetPosition - In the implementation block
@property (assign,nonatomic) double velocity;                    //@synthesize velocity=_velocity - In the implementation block
-(double)velocity;
-(void)setVelocity:(double)arg1 ;
-(double)startPosition;
-(void)setStartPosition:(double)arg1 ;
-(double)endPosition;
-(double)targetPosition;
-(void)setTargetPosition:(double)arg1 ;
-(void)setEndPosition:(double)arg1 ;
@end

