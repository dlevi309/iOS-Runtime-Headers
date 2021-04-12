/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(CGRect)frameForIndex:(unsigned long long)arg1 ;
-(id)handleGestureEvent:(id)arg1 ;
-(id)layoutSettings;
-(double)scaleForIndex:(unsigned long long)arg1 ;
-(double)darkeningAlphaForIndex:(unsigned long long)arg1 ;
-(CGRect)containerViewBounds;
-(long long)layoutUpdateMode;
-(id)initWithGestureID:(id)arg1 floatingSwitcherVisible:(BOOL)arg2 floatingConfiguration:(long long)arg3 interfaceOrientation:(long long)arg4 ;
-(BOOL)_isPlatterPreviewIntersectingFloatingApplication;
@end

