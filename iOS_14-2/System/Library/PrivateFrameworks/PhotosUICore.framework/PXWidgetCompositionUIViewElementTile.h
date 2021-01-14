/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXWidgetContentViewTransitionCoordinator.h>
#import <libobjc.A.dylib/PXUIViewBasicTile.h>

@protocol PXWidget;
@class PXBasicTileAnimationOptions, UIView, _PXWidgetCompositionUIViewElementTileTransitionContext, NSString;

@interface PXWidgetCompositionUIViewElementTile : NSObject <PXWidgetContentViewTransitionCoordinator, PXUIViewBasicTile> {

	BOOL __didEmbedContentView;
	id<PXWidget> _widget;
	UIView* __containerView;
	_PXWidgetCompositionUIViewElementTileTransitionContext* __currentTransitionContext;

}

@property (nonatomic,readonly) UIView * _containerView;                                                                                                            //@synthesize _containerView=__containerView - In the implementation block
@property (assign,setter=_setDidEmbedContentView:,nonatomic) BOOL _didEmbedContentView;                                                                            //@synthesize _didEmbedContentView=__didEmbedContentView - In the implementation block
@property (setter=_setCurrentTransitionContext:,nonatomic,retain) _PXWidgetCompositionUIViewElementTileTransitionContext * _currentTransitionContext;              //@synthesize _currentTransitionContext=__currentTransitionContext - In the implementation block
@property (nonatomic,readonly) id<PXWidget> widget;                                                                                                                //@synthesize widget=_widget - In the implementation block
@property (nonatomic,readonly) PXBasicTileAnimationOptions * animationOptions; 
@property (nonatomic,readonly) UIView * view; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)animateAlongsideTransition:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(id<PXWidget>)widget;
-(PXBasicTileAnimationOptions *)animationOptions;
-(void)didApplyGeometry:(PXTileGeometry*)arg1 withUserData:(id)arg2 ;
-(UIView *)_containerView;
-(UIView *)view;
-(_PXWidgetCompositionUIViewElementTileTransitionContext *)_currentTransitionContext;
-(id)initWithWidget:(id)arg1 ;
-(void)_embedContentView;
-(id)_willAnimateTileToGeometry:(PXTileGeometry*)arg1 withOptions:(id)arg2 ;
-(void)_didAnimateTileWithContext:(id)arg1 ;
-(void)_didCompleteTileAnimationWithContext:(id)arg1 ;
-(BOOL)_didEmbedContentView;
-(void)_setDidEmbedContentView:(BOOL)arg1 ;
-(void)_setCurrentTransitionContext:(id)arg1 ;
@end

