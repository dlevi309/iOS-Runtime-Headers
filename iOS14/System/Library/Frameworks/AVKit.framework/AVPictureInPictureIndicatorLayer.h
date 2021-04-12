/*
* Generated on Thursday, January 14, 2021 at 2:23:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/

#import <AVKit/AVKit-Structs.h>
#import <QuartzCore/CALayer.h>

@class AVPictureInPictureIndicatorSublayer, NSString;

@interface AVPictureInPictureIndicatorLayer : CALayer {

	AVPictureInPictureIndicatorSublayer* _contentLayer;
	CGRect _videoRectWhenPIPBegan;

}

@property (nonatomic,readonly) AVPictureInPictureIndicatorSublayer * contentLayer;              //@synthesize contentLayer=_contentLayer - In the implementation block
@property (nonatomic,readonly) CGRect videoRectWhenPIPBegan;                                    //@synthesize videoRectWhenPIPBegan=_videoRectWhenPIPBegan - In the implementation block
@property (nonatomic,copy) NSString * customText; 
-(void)layoutSublayers;
-(id)init;
-(void)setCustomText:(NSString *)arg1 ;
-(id)initWithDisplayScale:(double)arg1 placeholderImage:(CGImageRef)arg2 opaque:(BOOL)arg3 videoRectWhenPIPBegan:(CGRect)arg4 ;
-(CGRect)videoRectWhenPIPBegan;
-(NSString *)customText;
-(AVPictureInPictureIndicatorSublayer *)contentLayer;
@end

