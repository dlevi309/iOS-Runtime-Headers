/*
* Generated on Thursday, January 14, 2021 at 2:23:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/

#import <UIKitCore/UIView.h>

@class NSString, AVPictureInPictureIndicatorLayer;

@interface AVPictureInPictureIndicatorView : UIView {

	NSString* _customMessage;
	AVPictureInPictureIndicatorLayer* _pipIndicatorLayer;

}

@property (nonatomic,retain) AVPictureInPictureIndicatorLayer * pipIndicatorLayer;              //@synthesize pipIndicatorLayer=_pipIndicatorLayer - In the implementation block
@property (nonatomic,copy) NSString * customMessage;                                            //@synthesize customMessage=_customMessage - In the implementation block
-(void)_updateGeometry;
-(NSString *)customMessage;
-(void)setBackgroundColor:(id)arg1 ;
-(void)didMoveToWindow;
-(void)setCustomMessage:(NSString *)arg1 ;
-(void)_addIndicatorLayerIfNeeded;
-(AVPictureInPictureIndicatorLayer *)pipIndicatorLayer;
-(void)setPipIndicatorLayer:(AVPictureInPictureIndicatorLayer *)arg1 ;
-(void)layoutSublayersOfLayer:(id)arg1 ;
@end

