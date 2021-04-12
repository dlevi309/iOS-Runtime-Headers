/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	long long _interfaceOrientation;
	struct {
		unsigned hasIntrinsicContentSize : 1;
		unsigned observingBoundingPathChanges : 1;
		unsigned needsRemoteViewServiceBoundingPathUpdate : 1;
		unsigned remoteViewServiceBoundingPathUpdateScheduled : 1;
	}  _sizeTrackingViewFlags;

}

@property (nonatomic,readonly) _UIRemoteViewController * remoteViewController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)viewWithRemoteViewController:(id)arg1 viewControllerOperatorProxy:(id)arg2 textEffectsOperatorProxy:(id)arg3 ;
-(BOOL)isScrollEnabled;
-(BOOL)canBecomeFocused;
-(BOOL)_canSendViewServiceActualBoundingPath;
-(CGSize)_intrinsicSizeWithinSize:(CGSize)arg1 ;
-(void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2 ;
-(_UIRemoteViewController *)remoteViewController;
-(void)_updateTextEffectsGeometriesImmediately;
-(void)_updateTextEffectsWindowSafeAreaInsets;
-(void)_setNeedsRemoteViewServiceBoundingPathUpdate;
-(void)_updateSceneGeometries:(id)arg1 forOrientation:(long long)arg2 ;
-(void)_updateSceneGeometries:(id)arg1 ;
-(void)_geometryChanged:(const SCD_Struct_UI29*)arg1 forAncestor:(id)arg2 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)_textEffectsWindowDidRotate:(id)arg1 ;
-(void)_scrollToTopFromTouchAtScreenLocation:(CGPoint)arg1 resultHandler:(/*^block*/id)arg2 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)updateIntrinsicContentSize:(CGSize)arg1 ;
-(BOOL)_fencingEffectsAreVisible;
-(BOOL)_needsTextEffectsUpdateToFrame:(CGRect)arg1 ;
-(long long)_interfaceOrientationForScene:(id)arg1 ;
-(void)_updateTextEffectsGeometries:(CGRect)arg1 textEffectsWindow:(id)arg2 ;
-(void)_boundingPathMayHaveChangedForView:(id)arg1 relativeToBoundsOriginOnly:(BOOL)arg2 ;
-(id)_boundingPathForRemoteViewService;
-(void)_clearNeedsRemoteViewServiceBoundingPathUpdate;
-(id)_childFocusRegionsInRect:(CGRect)arg1 inCoordinateSpace:(id)arg2 ;
-(void)_updateTextEffectsGeometries:(CGRect)arg1 ;
-(void)_updateTextEffectsWindowSceneSize;
-(void)_willMoveToWindow:(id)arg1 ;
-(void)dealloc;
@end

