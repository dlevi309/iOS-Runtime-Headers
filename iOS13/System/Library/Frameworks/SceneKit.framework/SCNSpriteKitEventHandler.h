/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/


@class SKScene, NSMutableDictionary;

@interface SCNSpriteKitEventHandler : NSObject {

	SKScene* _scene;
	NSMutableDictionary* _touchMap;
	BOOL _mouseIsDown;
	BOOL _rightMouseIsDown;

}

@property (nonatomic,retain) SKScene * scene;              //@synthesize scene=_scene - In the implementation block
-(id)init;
-(void)dealloc;
-(BOOL)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(SKScene *)scene;
-(void)setScene:(SKScene *)arg1 ;
@end

