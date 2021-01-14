/*
* Generated on Thursday, January 14, 2021 at 2:23:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/

#import <UIKitCore/UIView.h>

@class _AVSimplePlayerLayerView, AVPlayerLayer;

@interface AVPictureInPicturePlayerLayerView : UIView {

	_AVSimplePlayerLayerView* _simplePlayerLayerView;

}

@property (nonatomic,readonly) AVPlayerLayer * playerLayer; 
-(void)attachPlayerLayer;
-(void)detachPlayerLayer;
-(AVPlayerLayer *)playerLayer;
@end

