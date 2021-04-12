/*
* Generated on Monday, March 1, 2021 at 2:33:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HomeAI/HomeAI-Structs.h>
#import <HMFoundation/HMFObject.h>

@interface HMISparseOpticalFlowFeatureVector : HMFObject {

	long long _eventType;
	CGPoint _origin;
	CGVector _motion;

}

@property (readonly) CGPoint origin;                 //@synthesize origin=_origin - In the implementation block
@property (readonly) CGPoint target; 
@property (readonly) CGVector motion;                //@synthesize motion=_motion - In the implementation block
@property (assign) long long eventType;              //@synthesize eventType=_eventType - In the implementation block
-(CGPoint)target;
-(CGPoint)origin;
-(long long)eventType;
-(double)distance;
-(void)setEventType:(long long)arg1 ;
-(CGVector)motion;
-(id)initWithOrigin:(CGPoint)arg1 motion:(CGVector)arg2 ;
@end

