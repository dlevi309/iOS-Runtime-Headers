/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/


#import <HomeAI/HomeAI-Structs.h>
@class NSArray;

@interface HMIFaceTrackerMotionRecord : NSObject {

	NSArray* _motionVectors;
	SCD_Struct_HM3 _time;
	CGRect _regionOfInterest;

}

@property (readonly) NSArray * motionVectors;              //@synthesize motionVectors=_motionVectors - In the implementation block
@property (readonly) CGRect regionOfInterest;              //@synthesize regionOfInterest=_regionOfInterest - In the implementation block
@property (readonly) SCD_Struct_HM3 time;                  //@synthesize time=_time - In the implementation block
-(SCD_Struct_HM3)time;
-(CGRect)regionOfInterest;
-(id)initWithMotionVectors:(id)arg1 regionOfInterest:(CGRect)arg2 time:(SCD_Struct_HM3)arg3 ;
-(NSArray *)motionVectors;
@end

