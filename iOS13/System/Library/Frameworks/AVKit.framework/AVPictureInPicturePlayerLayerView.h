/*
* Generated on Monday, March 1, 2021 at 2:31:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/

#import <UIKitCore/UIView.h>

@class _AVSimplePlayerLayerView, AVPlayerLayer;

@interface AVPictureInPicturePlayerLayerView : UIView {

	_AVSimplePlayerLayerView* _simplePlayerLayerView;

}

@property (nonatomic,readonly) AVPlayerLayer * playerLayer; 
-(AVPlayerLayer *)playerLayer;
-(void)attachPlayerLayer;
-(void)detachPlayerLayer;
@end

