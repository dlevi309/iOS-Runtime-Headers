/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIClickPresentation.h>

@class UIView, _UIPlatterView, UIWindow;

@interface _UIContextMenuPresentation : _UIClickPresentation {

	UIView* _presentationContainer;
	UIView* _dragContainer;
	_UIPlatterView* _destinationPlatterView;
	/*^block*/id _postDismissItemUpdate;
	/*^block*/id _postDismissCleanUp;
	UIView* _dragAnimationPortalView;
	UIWindow* _dragAnimationWindow;

}

@property (nonatomic,readonly) UIView * presentationContainer;                     //@synthesize presentationContainer=_presentationContainer - In the implementation block
@property (nonatomic,retain) UIView * dragContainer;                               //@synthesize dragContainer=_dragContainer - In the implementation block
@property (nonatomic,retain) _UIPlatterView * destinationPlatterView;              //@synthesize destinationPlatterView=_destinationPlatterView - In the implementation block
@property (nonatomic,copy) id postDismissItemUpdate;                               //@synthesize postDismissItemUpdate=_postDismissItemUpdate - In the implementation block
@property (nonatomic,copy) id postDismissCleanUp;                                  //@synthesize postDismissCleanUp=_postDismissCleanUp - In the implementation block
@property (nonatomic,retain) UIView * dragAnimationPortalView;                     //@synthesize dragAnimationPortalView=_dragAnimationPortalView - In the implementation block
@property (nonatomic,retain) UIWindow * dragAnimationWindow;                       //@synthesize dragAnimationWindow=_dragAnimationWindow - In the implementation block
-(UIView *)presentationContainer;
-(void)setDragContainer:(UIView *)arg1 ;
-(void)setDestinationPlatterView:(_UIPlatterView *)arg1 ;
-(void)setDragAnimationWindow:(UIWindow *)arg1 ;
-(void)setDragAnimationPortalView:(UIView *)arg1 ;
-(UIWindow *)dragAnimationWindow;
-(void)setPostDismissItemUpdate:(id)arg1 ;
-(void)setPostDismissCleanUp:(id)arg1 ;
-(id)postDismissItemUpdate;
-(UIView *)dragContainer;
-(UIView *)dragAnimationPortalView;
-(id)postDismissCleanUp;
-(_UIPlatterView *)destinationPlatterView;
@end

