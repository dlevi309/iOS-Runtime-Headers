/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (readonly) CGPoint midpoint; 
@property (readonly) CGVector motion;                //@synthesize motion=_motion - In the implementation block
@property (assign) long long eventType;              //@synthesize eventType=_eventType - In the implementation block
-(void)setEventType:(long long)arg1 ;
-(long long)eventType;
-(CGPoint)origin;
-(double)distance;
-(CGPoint)midpoint;
-(CGVector)motion;
-(CGPoint)target;
-(id)initWithOrigin:(CGPoint)arg1 motion:(CGVector)arg2 ;
@end

