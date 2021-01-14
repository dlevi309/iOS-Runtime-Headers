/*
* Generated on Thursday, January 14, 2021 at 2:26:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureCommand.h>

@interface CAMSetVideoZoomFactorCommand : CAMCaptureCommand {

	double __videoZoomFactor;

}

@property (nonatomic,readonly) double _videoZoomFactor;              //@synthesize _videoZoomFactor=__videoZoomFactor - In the implementation block
-(void)executeWithContext:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithVideoZoomFactor:(double)arg1 ;
-(double)_videoZoomFactor;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

