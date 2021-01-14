/*
* Generated on Thursday, January 14, 2021 at 2:27:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(SKScene *)scene;
-(void)setScene:(SKScene *)arg1 ;
-(id)init;
-(BOOL)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)dealloc;
@end

