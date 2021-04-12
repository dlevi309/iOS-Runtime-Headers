/*
* Generated on Monday, March 1, 2021 at 2:30:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class UIMoveEvent, UITouchesEvent, UIPressesEvent, UIWheelEvent, _UIGameControllerEvent, UIPhysicalKeyboardEvent, UIPencilEvent, UIScrollEvent, UIHoverEvent, UITransformEvent;

@interface _UISceneEventRegistry : NSObject {

	UIMoveEvent* _moveEvent;
	UITouchesEvent* _touchesEvent;
	UIPressesEvent* _pressesEvent;
	UIWheelEvent* _wheelEvent;
	_UIGameControllerEvent* _gameControllerEvent;
	UIPhysicalKeyboardEvent* _physicalKeyboardEvent;
	UIPencilEvent* _pencilEvent;
	UIScrollEvent* _scrollEvent;
	UIHoverEvent* _hoverEvent;
	UITransformEvent* _transformEvent;

}

@property (nonatomic,readonly) UIMoveEvent * moveEvent;                                      //@synthesize moveEvent=_moveEvent - In the implementation block
@property (nonatomic,readonly) UITouchesEvent * touchesEvent;                                //@synthesize touchesEvent=_touchesEvent - In the implementation block
@property (nonatomic,readonly) UIPressesEvent * pressesEvent;                                //@synthesize pressesEvent=_pressesEvent - In the implementation block
@property (nonatomic,readonly) UIWheelEvent * wheelEvent;                                    //@synthesize wheelEvent=_wheelEvent - In the implementation block
@property (nonatomic,readonly) _UIGameControllerEvent * gameControllerEvent;                 //@synthesize gameControllerEvent=_gameControllerEvent - In the implementation block
@property (nonatomic,readonly) UIPhysicalKeyboardEvent * physicalKeyboardEvent;              //@synthesize physicalKeyboardEvent=_physicalKeyboardEvent - In the implementation block
@property (nonatomic,readonly) UIPencilEvent * pencilEvent;                                  //@synthesize pencilEvent=_pencilEvent - In the implementation block
@property (nonatomic,readonly) UIScrollEvent * scrollEvent;                                  //@synthesize scrollEvent=_scrollEvent - In the implementation block
@property (nonatomic,readonly) UIHoverEvent * hoverEvent;                                    //@synthesize hoverEvent=_hoverEvent - In the implementation block
@property (nonatomic,readonly) UITransformEvent * transformEvent;                            //@synthesize transformEvent=_transformEvent - In the implementation block
-(void)invalidate;
-(UIMoveEvent *)moveEvent;
-(void)addMoveEvent:(id)arg1 ;
-(UITouchesEvent *)touchesEvent;
-(void)addTouchesEvent:(id)arg1 ;
-(UIPressesEvent *)pressesEvent;
-(void)addPressesEvent:(id)arg1 ;
-(UIWheelEvent *)wheelEvent;
-(void)addWheelEvent:(id)arg1 ;
-(_UIGameControllerEvent *)gameControllerEvent;
-(void)addGameControllerEvent:(id)arg1 ;
-(UIPhysicalKeyboardEvent *)physicalKeyboardEvent;
-(void)addPhysicalKeyboardEvent:(id)arg1 ;
-(UIPencilEvent *)pencilEvent;
-(void)addPencilEvent:(id)arg1 ;
-(UIScrollEvent *)scrollEvent;
-(void)addScrollEvent:(id)arg1 ;
-(UIHoverEvent *)hoverEvent;
-(void)addHoverEvent:(id)arg1 ;
-(UITransformEvent *)transformEvent;
-(void)addTransformEvent:(id)arg1 ;
@end

