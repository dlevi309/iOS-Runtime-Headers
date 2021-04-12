/*
* Generated on Thursday, January 14, 2021 at 2:26:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureCommand.h>

@interface CAMRampToVideoZoomFactorCommand : CAMCaptureCommand {

	float __rate;
	double __videoZoomFactor;
	double __duration;

}

@property (nonatomic,readonly) double _videoZoomFactor;              //@synthesize _videoZoomFactor=__videoZoomFactor - In the implementation block
@property (nonatomic,readonly) float _rate;                          //@synthesize _rate=__rate - In the implementation block
@property (nonatomic,readonly) double _duration;                     //@synthesize _duration=__duration - In the implementation block
-(float)_rate;
-(void)executeWithContext:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(double)_videoZoomFactor;
-(id)initWithCoder:(id)arg1 ;
-(double)_duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithVideoZoomFactor:(double)arg1 rate:(float)arg2 ;
-(id)initWithVideoZoomFactor:(double)arg1 duration:(double)arg2 ;
@end

