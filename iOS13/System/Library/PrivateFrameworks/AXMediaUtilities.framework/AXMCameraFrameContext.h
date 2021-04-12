/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(float)videoZoomFactor;
-(float)videoFieldOfView;
-(long long)videoSourceWidth;
-(long long)videoSourceHeight;
-(double)presentationTimestamp;
-(CMAttitude *)deviceAttitude;
-(id)initWithVideoFieldOfView:(float)arg1 zoomFactor:(float)arg2 sourceWidth:(long long)arg3 sourceHeight:(long long)arg4 presentationTimestamp:(double)arg5 attitude:(id)arg6 ;
-(CGRect)motionCorrectedNormalizedFrame:(CGRect)arg1 targetAttitude:(id)arg2 targetZoomFactor:(float)arg3 interfaceOrientation:(long long)arg4 mirrored:(BOOL)arg5 ;
@end

