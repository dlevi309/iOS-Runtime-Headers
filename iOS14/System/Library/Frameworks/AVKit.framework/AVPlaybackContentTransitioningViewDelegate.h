/*
* Generated on Thursday, January 14, 2021 at 2:23:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/


@protocol AVPlaybackContentTransitioningViewDelegate <NSObject>
@required
-(BOOL)contentTransitioningViewShouldBeginDragging:(id)arg1 locationInView:(CGPoint)arg2;
-(BOOL)contentTransitioningView:(id)arg1 shouldBeginTransitionWithDirection:(long long)arg2;
-(id)contentTransitioningPlayerContentViewForTransition:(id)arg1;
-(void)contentTransitioningViewDidChangeTransitionStatus:(id)arg1 oldState:(long long)arg2 oldTransitionDirection:(long long)arg3 oldProgress:(double)arg4;

@end

