/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/


#import <HomeUI/HomeUI-Structs.h>
@class HUVelocitySample;

@interface HUVelocitySampler : NSObject {

	HUVelocitySample* _currentSample;
	HUVelocitySample* _previousSample;

}

@property (nonatomic,retain) HUVelocitySample * currentSample;               //@synthesize currentSample=_currentSample - In the implementation block
@property (nonatomic,retain) HUVelocitySample * previousSample;              //@synthesize previousSample=_previousSample - In the implementation block
@property (nonatomic,readonly) CGVector velocity; 
-(void)reset;
-(CGVector)velocity;
-(HUVelocitySample *)currentSample;
-(void)setCurrentSample:(HUVelocitySample *)arg1 ;
-(HUVelocitySample *)previousSample;
-(void)setPreviousSample:(HUVelocitySample *)arg1 ;
-(void)addTouchSample:(CGPoint)arg1 ;
@end

