/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/

#import <SceneKit/SCNImageSource.h>

@class SKScene;

@interface SCNSpriteKitSource : SCNImageSource {

	SKScene* _scene;

}

@property (nonatomic,retain) SKScene * scene;              //@synthesize scene=_scene - In the implementation block
-(void)dealloc;
-(BOOL)isOpaque;
-(SKScene *)scene;
-(void)setScene:(SKScene *)arg1 ;
-(id)textureSource;
@end

