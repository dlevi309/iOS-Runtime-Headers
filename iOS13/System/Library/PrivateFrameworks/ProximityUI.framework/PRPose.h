/*
* Generated on Monday, March 1, 2021 at 2:35:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProximityUI.framework/ProximityUI
*/


#import <ProximityUI/ProximityUI-Structs.h>
@interface PRPose : NSObject {

	double _timestamp;
	SCD_Struct_PR5 _pose;

}

@property (nonatomic,readonly) double timestamp;                 //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) SCD_Struct_PR5 pose;              //@synthesize pose=_pose - In the implementation block
+(id)poseWithTime:(double)arg1 pose:(SCD_Struct_PR5)arg2 ;
-(double)timestamp;
-(SCD_Struct_PR5)pose;
-(id)initWithTime:(double)arg1 pose:(SCD_Struct_PR5)arg2 ;
@end

