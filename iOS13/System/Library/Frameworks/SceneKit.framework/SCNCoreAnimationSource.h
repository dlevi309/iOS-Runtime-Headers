/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/

#import <SceneKit/SCNImageSource.h>

@class CALayer;

@interface SCNCoreAnimationSource : SCNImageSource {

	CALayer* _layer;

}

@property (nonatomic,retain) CALayer * layer;              //@synthesize layer=_layer - In the implementation block
-(void)dealloc;
-(BOOL)isOpaque;
-(CALayer *)layer;
-(void)setLayer:(CALayer *)arg1 ;
-(id)textureSource;
@end

