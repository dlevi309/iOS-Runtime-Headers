/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <UIKitCore/UISpringTimingParameters.h>

@class UICubicTimingParameters;

@interface MPCubicSpringTimingParameters : UISpringTimingParameters {

	UICubicTimingParameters* _springCubicTimingParameters;

}

@property (nonatomic,copy) UICubicTimingParameters * springCubicTimingParameters;              //@synthesize springCubicTimingParameters=_springCubicTimingParameters - In the implementation block
+(id)standardTimingParameters;
-(id)cubicTimingParameters;
-(UICubicTimingParameters *)springCubicTimingParameters;
-(void)setSpringCubicTimingParameters:(UICubicTimingParameters *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

