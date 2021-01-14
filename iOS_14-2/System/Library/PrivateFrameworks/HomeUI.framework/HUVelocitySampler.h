/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CGVector)velocity;
-(void)reset;
-(HUVelocitySample *)currentSample;
-(void)setPreviousSample:(HUVelocitySample *)arg1 ;
-(void)setCurrentSample:(HUVelocitySample *)arg1 ;
-(HUVelocitySample *)previousSample;
-(void)addTouchSample:(CGPoint)arg1 ;
@end

