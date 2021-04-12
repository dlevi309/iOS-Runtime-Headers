/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBGestureSwitcherModifier.h>

@interface SBDragAndDropGestureSwitcherModifier : SBGestureSwitcherModifier {

	BOOL _floatingSwitcherVisible;
	long long _floatingConfiguration;
	long long _interfaceOrientation;
	long long _currentDropAction;
	CGPoint _location;
	CGRect _platterFrame;
	double _platterScale;

}
-(id)animationAttributesForLayoutElement:(id)arg1 ;
-(CGRect)frameForIndex:(unsigned long long)arg1 ;
-(CGRect)containerViewBounds;
-(id)handleMainTransitionEvent:(id)arg1 ;
-(double)scaleForIndex:(unsigned long long)arg1 ;
-(double)darkeningAlphaForIndex:(unsigned long long)arg1 ;
-(id)handleGestureEvent:(id)arg1 ;
-(id)initWithGestureID:(id)arg1 floatingSwitcherVisible:(BOOL)arg2 floatingConfiguration:(long long)arg3 interfaceOrientation:(long long)arg4 ;
-(BOOL)_isPlatterPreviewIntersectingFloatingApplication;
@end

