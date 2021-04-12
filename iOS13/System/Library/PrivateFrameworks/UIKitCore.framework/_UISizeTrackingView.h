/*
* Generated on Monday, March 1, 2021 at 2:30:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKitCore/_UIScrollToTopView.h>
#import <UIKitCore/_UIRemoteViewFocusProxy.h>
#import <UIKitCore/_UIViewBoundingPathChangeObserver.h>

@class _UIRemoteViewController, NSString;

@interface _UISizeTrackingView : UIView <_UIScrollToTopView, _UIRemoteViewFocusProxy, _UIViewBoundingPathChangeObserver> {

	_UIRemoteViewController* _remoteViewController;
	id _viewControllerOperatorProxy;
	id _textEffectsOperatorProxy;
	CGSize _intrinsicContentSize;
	CGRect _formerTextEffectsContentFrame;
	BOOL _observingTextEffectsWindowRotation;
	struct {
		unsigned hasIntrinsicContentSize : 1;
		unsigned observingBoundingPathChanges : 1;
		unsigned needsRemoteViewServiceBoundingPathUpdate : 1;
		unsigned remoteViewServiceBoundingPathUpdateScheduled : 1;
	}  _sizeTrackingViewFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) _UIRemoteViewController * remoteViewController; 
+(id)viewWithRemoteViewController:(id)arg1 viewControllerOperatorProxy:(id)arg2 textEffectsOperatorProxy:(id)arg3 ;
-(void)dealloc;
-(void)setBounds:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(BOOL)canBecomeFocused;
-(BOOL)isScrollEnabled;
-(void)_geometryChanges:(id)arg1 forAncestor:(id)arg2 ;
-(void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2 ;
-(CGSize)_intrinsicSizeWithinSize:(CGSize)arg1 ;
-(void)_willMoveToWindow:(id)arg1 ;
-(id)_childFocusRegionsInRect:(CGRect)arg1 inCoordinateSpace:(id)arg2 ;
-(_UIRemoteViewController *)remoteViewController;
-(void)_scrollToTopFromTouchAtScreenLocation:(CGPoint)arg1 resultHandler:(/*^block*/id)arg2 ;
-(void)_boundingPathMayHaveChangedForView:(id)arg1 relativeToBoundsOriginOnly:(BOOL)arg2 ;
-(void)_updateTextEffectsGeometriesImmediately;
-(void)_updateTextEffectsGeometries:(CGRect)arg1 ;
-(void)_updateTextEffectsGeometries:(CGRect)arg1 textEffectsWindow:(id)arg2 ;
-(void)_textEffectsWindowDidRotate:(id)arg1 ;
-(BOOL)_needsTextEffectsUpdateToFrame:(CGRect)arg1 ;
-(id)_boundingPathForRemoteViewService;
-(void)_clearNeedsRemoteViewServiceBoundingPathUpdate;
-(long long)_interfaceOrientationForScene:(id)arg1 ;
-(void)_updateSceneGeometries:(id)arg1 forOrientation:(long long)arg2 ;
-(BOOL)_canSendViewServiceActualBoundingPath;
-(void)_setNeedsRemoteViewServiceBoundingPathUpdate;
-(void)updateIntrinsicContentSize:(CGSize)arg1 ;
-(BOOL)_fencingEffectsAreVisible;
@end

