/*
* Generated on Thursday, January 14, 2021 at 2:20:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol _UICursorInteractionDelegate <NSObject>
@optional
-(id)cursorInteraction:(id)arg1 regionForLocation:(CGPoint)arg2 defaultRegion:(id)arg3;
-(id)cursorInteraction:(id)arg1 styleForRegion:(id)arg2 modifiers:(long long)arg3;
-(id)cursorInteraction:(id)arg1 styleForRegion:(id)arg2;
-(id)cursorInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;
-(void)cursorInteraction:(id)arg1 willExitRegion:(id)arg2 withAnimator:(id)arg3;
-(void)cursorInteraction:(id)arg1 willEnterRegion:(id)arg2 withAnimator:(id)arg3;
-(void)cursorInteraction:(id)arg1 willExitRegion:(id)arg2;
-(void)cursorInteraction:(id)arg1 willEnterRegion:(id)arg2;

@end

