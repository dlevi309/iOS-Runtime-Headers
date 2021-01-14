/*
* Generated on Thursday, January 14, 2021 at 2:23:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/

#import <AXMediaUtilities/AXMediaUtilities-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CMAttitude;

@interface AXMCameraFrameContext : NSObject <NSSecureCoding> {

	float _videoFieldOfView;
	float _videoZoomFactor;
	long long _videoSourceWidth;
	long long _videoSourceHeight;
	double _presentationTimestamp;
	CMAttitude* _deviceAttitude;

}

@property (nonatomic,readonly) float videoFieldOfView;                    //@synthesize videoFieldOfView=_videoFieldOfView - In the implementation block
@property (nonatomic,readonly) float videoZoomFactor;                     //@synthesize videoZoomFactor=_videoZoomFactor - In the implementation block
@property (nonatomic,readonly) long long videoSourceWidth;                //@synthesize videoSourceWidth=_videoSourceWidth - In the implementation block
@property (nonatomic,readonly) long long videoSourceHeight;               //@synthesize videoSourceHeight=_videoSourceHeight - In the implementation block
@property (nonatomic,readonly) double presentationTimestamp;              //@synthesize presentationTimestamp=_presentationTimestamp - In the implementation block
@property (nonatomic,readonly) CMAttitude * deviceAttitude;               //@synthesize deviceAttitude=_deviceAttitude - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)videoSourceWidth;
-(long long)videoSourceHeight;
-(double)presentationTimestamp;
-(CMAttitude *)deviceAttitude;
-(id)initWithVideoFieldOfView:(float)arg1 zoomFactor:(float)arg2 sourceWidth:(long long)arg3 sourceHeight:(long long)arg4 presentationTimestamp:(double)arg5 attitude:(id)arg6 ;
-(float)videoZoomFactor;
-(CGRect)motionCorrectedNormalizedFrame:(CGRect)arg1 targetAttitude:(id)arg2 targetZoomFactor:(float)arg3 interfaceOrientation:(long long)arg4 mirrored:(BOOL)arg5 ;
-(void)encodeWithCoder:(id)arg1 ;
-(float)videoFieldOfView;
-(id)initWithCoder:(id)arg1 ;
@end

