/*
* Generated on Thursday, January 14, 2021 at 2:26:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClockKit.framework/ClockKit
*/

#import <ClockKit/ClockKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CLKDevice, CLKVideo, UIImage;

@interface CLKMediaAsset : NSObject <NSCopying> {

	CLKDevice* _device;
	CLKVideo* _video;
	UIImage* _image;
	double _videoDuration;
	double _stillDisplayTime;

}

@property (nonatomic,readonly) CLKVideo * video;                     //@synthesize video=_video - In the implementation block
@property (nonatomic,readonly) UIImage * image;                      //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) double videoDuration;                 //@synthesize videoDuration=_videoDuration - In the implementation block
@property (nonatomic,readonly) double stillDisplayTime;              //@synthesize stillDisplayTime=_stillDisplayTime - In the implementation block
+(id)mediaAssetWithVideo:(id)arg1 image:(id)arg2 videoDuration:(double)arg3 stillDisplayTime:(double)arg4 forDevice:(id)arg5 ;
+(id)mediaAssetWithImage:(id)arg1 forDevice:(id)arg2 ;
+(id)mediaAssetWithVideo:(id)arg1 image:(id)arg2 forDevice:(id)arg3 ;
+(id)mediaAssetWithVideoAndImageNamed:(id)arg1 forDevice:(id)arg2 ;
-(CLKVideo *)video;
-(double)videoDuration;
-(UIImage *)image;
-(id)description;
-(double)stillDisplayTime;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithImage:(id)arg1 forDevice:(id)arg2 ;
-(id)initWithVideo:(id)arg1 image:(id)arg2 forDevice:(id)arg3 ;
-(id)initWithVideo:(id)arg1 image:(id)arg2 videoDuration:(double)arg3 stillDisplayTime:(double)arg4 forDevice:(id)arg5 ;
@end

