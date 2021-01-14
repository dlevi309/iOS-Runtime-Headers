/*
* Generated on Thursday, January 14, 2021 at 2:26:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


#import <CameraUI/CameraUI-Structs.h>
@interface CAMExposureResult : NSObject {

	BOOL _adjustingExposure;
	BOOL _exposureDidStart;
	BOOL _exposureDidEnd;
	BOOL _deviceSupportsFocus;
	float _exposureTargetBias;
	long long _exposureMode;
	CGPoint _pointOfInterest;

}

@property (getter=isAdjustingExposure,nonatomic,readonly) BOOL adjustingExposure;              //@synthesize adjustingExposure=_adjustingExposure - In the implementation block
@property (nonatomic,readonly) CGPoint pointOfInterest;                                        //@synthesize pointOfInterest=_pointOfInterest - In the implementation block
@property (nonatomic,readonly) long long exposureMode;                                         //@synthesize exposureMode=_exposureMode - In the implementation block
@property (nonatomic,readonly) float exposureTargetBias;                                       //@synthesize exposureTargetBias=_exposureTargetBias - In the implementation block
@property (nonatomic,readonly) BOOL exposureDidStart;                                          //@synthesize exposureDidStart=_exposureDidStart - In the implementation block
@property (nonatomic,readonly) BOOL exposureDidEnd;                                            //@synthesize exposureDidEnd=_exposureDidEnd - In the implementation block
@property (nonatomic,readonly) BOOL deviceSupportsFocus;                                       //@synthesize deviceSupportsFocus=_deviceSupportsFocus - In the implementation block
-(BOOL)exposureDidStart;
-(BOOL)deviceSupportsFocus;
-(float)exposureTargetBias;
-(CGPoint)pointOfInterest;
-(id)description;
-(BOOL)isAdjustingExposure;
-(BOOL)exposureDidEnd;
-(id)initWithMode:(long long)arg1 pointOfInterest:(CGPoint)arg2 exposureTargetBias:(float)arg3 adjusting:(BOOL)arg4 exposureDidStart:(BOOL)arg5 exposureDidEnd:(BOOL)arg6 deviceSupportsFocus:(BOOL)arg7 ;
-(long long)exposureMode;
@end

