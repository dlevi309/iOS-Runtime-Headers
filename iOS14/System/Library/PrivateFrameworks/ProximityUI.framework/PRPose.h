/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(SCD_Struct_PR5)pose;
-(double)timestamp;
-(id)initWithTime:(double)arg1 pose:(SCD_Struct_PR5)arg2 ;
@end

