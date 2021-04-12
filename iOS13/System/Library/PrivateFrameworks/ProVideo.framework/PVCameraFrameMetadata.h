/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/


#import <ProVideo/ProVideo-Structs.h>
@interface PVCameraFrameMetadata : NSObject {

	long long _cameraPosition;
	double _rollRadians;
	long long _interfaceOrientation;
	long long _captureVideoOrientation;
	SCD_Struct_PV19 _orientation;

}

@property (nonatomic,readonly) long long cameraPosition;                       //@synthesize cameraPosition=_cameraPosition - In the implementation block
@property (nonatomic,readonly) SCD_Struct_PV19 orientation;                    //@synthesize orientation=_orientation - In the implementation block
@property (nonatomic,readonly) double rollRadians;                             //@synthesize rollRadians=_rollRadians - In the implementation block
@property (nonatomic,readonly) long long interfaceOrientation;                 //@synthesize interfaceOrientation=_interfaceOrientation - In the implementation block
@property (nonatomic,readonly) long long captureVideoOrientation;              //@synthesize captureVideoOrientation=_captureVideoOrientation - In the implementation block
+(id)frameMetadata:(long long)arg1 :(SCD_Struct_PV19)arg2 :(double)arg3 :(long long)arg4 :(long long)arg5 ;
-(id)description;
-(SCD_Struct_PV19)orientation;
-(long long)interfaceOrientation;
-(long long)cameraPosition;
-(double)rollRadians;
-(long long)captureVideoOrientation;
@end

