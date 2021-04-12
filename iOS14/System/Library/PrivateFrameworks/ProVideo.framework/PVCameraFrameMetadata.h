/*
* Generated on Thursday, January 14, 2021 at 2:28:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/


#import <ProVideo/ProVideo-Structs.h>
@interface PVCameraFrameMetadata : NSObject {

	long long _cameraPosition;
	double _rollRadians;
	long long _interfaceOrientation;
	long long _captureVideoOrientation;
	SCD_Struct_PV21 _orientation;

}

@property (nonatomic,readonly) long long cameraPosition;                       //@synthesize cameraPosition=_cameraPosition - In the implementation block
@property (nonatomic,readonly) SCD_Struct_PV21 orientation;                    //@synthesize orientation=_orientation - In the implementation block
@property (nonatomic,readonly) double rollRadians;                             //@synthesize rollRadians=_rollRadians - In the implementation block
@property (nonatomic,readonly) long long interfaceOrientation;                 //@synthesize interfaceOrientation=_interfaceOrientation - In the implementation block
@property (nonatomic,readonly) long long captureVideoOrientation;              //@synthesize captureVideoOrientation=_captureVideoOrientation - In the implementation block
+(id)frameMetadata:(long long)arg1 :(SCD_Struct_PV21)arg2 :(double)arg3 :(long long)arg4 :(long long)arg5 ;
-(long long)cameraPosition;
-(double)rollRadians;
-(id)description;
-(long long)interfaceOrientation;
-(SCD_Struct_PV21)orientation;
-(long long)captureVideoOrientation;
@end

