/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXComponentView.h>
#import <libobjc.A.dylib/SXDragManagerDataSource.h>
#import <libobjc.A.dylib/SXComponentHosting.h>

@protocol SXMediaSharingPolicyProvider;
@class NSArray, SXDragManager, NSString;

@interface SXContainerComponentView : SXComponentView <SXDragManagerDataSource, SXComponentHosting> {

	NSArray* _componentViews;
	id<SXMediaSharingPolicyProvider> _mediaSharingPolicyProvider;
	SXDragManager* _dragManager;

}

@property (nonatomic,readonly) id<SXMediaSharingPolicyProvider> mediaSharingPolicyProvider;              //@synthesize mediaSharingPolicyProvider=_mediaSharingPolicyProvider - In the implementation block
@property (nonatomic,retain) SXDragManager * dragManager;                                                //@synthesize dragManager=_dragManager - In the implementation block
@property (nonatomic,retain) NSArray * componentViews;                                                   //@synthesize componentViews=_componentViews - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(void)animationDidStart:(id)arg1 ;
-(void)setComponentViews:(NSArray *)arg1 ;
-(SXDragManager *)dragManager;
-(void)addComponentView:(id)arg1 ;
-(void)removeComponentView:(id)arg1 ;
-(id<SXMediaSharingPolicyProvider>)mediaSharingPolicyProvider;
-(CGRect)originalFrameForContentView:(id)arg1 behavior:(id)arg2 ;
-(id)initWithDOMObjectProvider:(id)arg1 viewport:(id)arg2 presentationDelegate:(id)arg3 componentStyleRendererFactory:(id)arg4 mediaSharingPolicyProvider:(id)arg5 ;
-(id)viewForDragManager:(id)arg1 ;
-(id)dragManager:(id)arg1 dragableAtLocation:(CGPoint)arg2 ;
-(void)setDragManager:(SXDragManager *)arg1 ;
-(void)presentComponentWithChanges:(SCD_Struct_SX17)arg1 ;
-(BOOL)allowHierarchyRemoval;
-(id)transitionContentView;
-(BOOL)transitionViewShouldFadeInContent;
-(CGRect)transitionContentFrame;
-(BOOL)isTransitionable;
-(void)prepareForTransitionType:(unsigned long long)arg1 ;
-(BOOL)usesThumbnailWithImageIdentifier:(id)arg1 ;
-(BOOL)userInteractable;
-(id)contentViewForBehavior:(id)arg1 ;
-(void)animationDidFinish:(id)arg1 ;
-(void)didApplyBehavior:(id)arg1 ;
-(id)componentViewsForRole:(int)arg1 recursive:(BOOL)arg2 ;
-(NSArray *)componentViews;
@end
