/*
* Generated on Thursday, January 14, 2021 at 2:27:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/

#import <SceneKit/SCNImageSource.h>

@class CALayer;

@interface SCNCoreAnimationSource : SCNImageSource {

	CALayer* _layer;

}

@property (nonatomic,retain) CALayer * layer;              //@synthesize layer=_layer - In the implementation block
-(BOOL)isOpaque;
-(CALayer *)layer;
-(void)setLayer:(CALayer *)arg1 ;
-(void)dealloc;
-(id)textureSource;
@end

