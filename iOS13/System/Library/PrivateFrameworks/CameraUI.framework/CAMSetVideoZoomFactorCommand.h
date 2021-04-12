/*
* Generated on Monday, March 1, 2021 at 2:33:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureCommand.h>

@interface CAMSetVideoZoomFactorCommand : CAMCaptureCommand {

	double __videoZoomFactor;

}

@property (nonatomic,readonly) double _videoZoomFactor;              //@synthesize _videoZoomFactor=__videoZoomFactor - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)_videoZoomFactor;
-(void)executeWithContext:(id)arg1 ;
-(id)initWithVideoZoomFactor:(double)arg1 ;
@end

