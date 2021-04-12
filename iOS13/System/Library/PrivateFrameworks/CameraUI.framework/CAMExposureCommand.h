/*
* Generated on Monday, March 1, 2021 at 2:33:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)_exposureMode;
-(CGPoint)_exposurePointOfInterest;
-(void)executeWithContext:(id)arg1 ;
-(id)initWithExposureMode:(long long)arg1 ;
-(id)initWithExposureMode:(long long)arg1 atPointOfInterest:(CGPoint)arg2 ;
@end

