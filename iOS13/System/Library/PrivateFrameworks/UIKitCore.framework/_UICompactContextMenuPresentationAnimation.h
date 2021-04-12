/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIPreviewPlatterPresentationAnimator.h>

@class _UIContextMenuLayoutArbiterOutput;

@interface _UICompactContextMenuPresentationAnimation : _UIPreviewPlatterPresentationAnimator {

	BOOL _isDismissTransition;
	_UIContextMenuLayoutArbiterOutput* _expandedLayout;

}

@property (nonatomic,retain) _UIContextMenuLayoutArbiterOutput * expandedLayout;              //@synthesize expandedLayout=_expandedLayout - In the implementation block
@property (assign,nonatomic) BOOL isDismissTransition;                                        //@synthesize isDismissTransition=_isDismissTransition - In the implementation block
-(void)prepareTransitionFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3 ;
-(void)performTransitionFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3 ;
-(void)setExpandedLayout:(_UIContextMenuLayoutArbiterOutput *)arg1 ;
-(BOOL)isDismissTransition;
-(_UIContextMenuLayoutArbiterOutput *)expandedLayout;
-(void)_setBackgroundVisible:(BOOL)arg1 ;
-(void)setIsDismissTransition:(BOOL)arg1 ;
@end

