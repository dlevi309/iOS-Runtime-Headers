/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIContextMenuPresentationAnimation.h>

@class _UIContextMenuLayoutArbiterOutput;

@interface _UICompactContextMenuPresentationAnimation : _UIContextMenuPresentationAnimation {

	BOOL _isDismissTransition;
	_UIContextMenuLayoutArbiterOutput* _expandedLayout;

}

@property (nonatomic,retain) _UIContextMenuLayoutArbiterOutput * expandedLayout;              //@synthesize expandedLayout=_expandedLayout - In the implementation block
@property (assign,nonatomic) BOOL isDismissTransition;                                        //@synthesize isDismissTransition=_isDismissTransition - In the implementation block
-(id)_backgroundView;
-(BOOL)isDismissTransition;
-(_UIContextMenuLayoutArbiterOutput *)expandedLayout;
-(void)setExpandedLayout:(_UIContextMenuLayoutArbiterOutput *)arg1 ;
-(void)_setBackgroundVisible:(BOOL)arg1 ;
-(void)setIsDismissTransition:(BOOL)arg1 ;
-(void)prepareTransitionFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3 ;
-(void)performTransitionFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3 ;
@end

