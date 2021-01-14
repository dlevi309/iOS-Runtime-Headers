/*
* Generated on Thursday, January 14, 2021 at 2:26:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureCommand.h>

@interface CAMExposureCommand : CAMCaptureCommand {

	long long __exposureMode;
	CGPoint __exposurePointOfInterest;

}

@property (nonatomic,readonly) long long _exposureMode;                       //@synthesize _exposureMode=__exposureMode - In the implementation block
@property (nonatomic,readonly) CGPoint _exposurePointOfInterest;              //@synthesize _exposurePointOfInterest=__exposurePointOfInterest - In the implementation block
-(void)executeWithContext:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(CGPoint)_exposurePointOfInterest;
-(id)initWithExposureMode:(long long)arg1 atPointOfInterest:(CGPoint)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithExposureMode:(long long)arg1 ;
-(long long)_exposureMode;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

