/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)cubicTimingParameters;
-(UICubicTimingParameters *)springCubicTimingParameters;
-(void)setSpringCubicTimingParameters:(UICubicTimingParameters *)arg1 ;
@end

