/*
* Generated on Thursday, January 14, 2021 at 2:25:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SBAppPlatterDragSourceViewProviding.h>

@class SBOrientationTransformWrapperView, FBDisplayLayoutElement, UIView, FBSDisplayIdentity, SBLayoutElement, SBLayoutState, NSString;

@interface SBLayoutElementViewController : UIViewController <SBAppPlatterDragSourceViewProviding> {

	SBOrientationTransformWrapperView* _contentWrapperView;
	FBDisplayLayoutElement* _displayLayoutElement;
	BOOL _isViewVisible;
	BOOL _isTransitioningVisibility;
	BOOL _dragging;
	UIView* _contentContainerView;
	FBSDisplayIdentity* _displayIdentity;
	SBLayoutElement* _layoutElement;
	SBLayoutState* _layoutState;
	unsigned long long _supportedContentInterfaceOrientations;
	long long _contentWrapperInterfaceOrientation;
	CGRect _referenceFrame;

}

@property (nonatomic,readonly) UIView * _contentContainerView;                                        //@synthesize contentContainerView=_contentContainerView - In the implementation block
@property (nonatomic,readonly) BOOL _shouldDisplayLayoutElementBecomeActive; 
@property (nonatomic,readonly) FBSDisplayIdentity * displayIdentity;                                  //@synthesize displayIdentity=_displayIdentity - In the implementation block
@property (nonatomic,readonly) SBLayoutElement * layoutElement;                                       //@synthesize layoutElement=_layoutElement - In the implementation block
@property (nonatomic,readonly) SBLayoutState * layoutState;                                           //@synthesize layoutState=_layoutState - In the implementation block
@property (nonatomic,readonly) CGRect referenceFrame;                                                 //@synthesize referenceFrame=_referenceFrame - In the implementation block
@property (nonatomic,readonly) unsigned long long supportedContentInterfaceOrientations;              //@synthesize supportedContentInterfaceOrientations=_supportedContentInterfaceOrientations - In the implementation block
@property (assign,nonatomic) long long contentWrapperInterfaceOrientation;                            //@synthesize contentWrapperInterfaceOrientation=_contentWrapperInterfaceOrientation - In the implementation block
@property (nonatomic,readonly) BOOL supportsReuse; 
@property (assign,getter=isDragging,nonatomic) BOOL dragging;                                         //@synthesize dragging=_dragging - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_newDisplayLayoutElementForEntity:(id)arg1 ;
-(id)initialDiffuseShadowFilters;
-(void)_updateDisplayLayoutElementWithBuilder:(/*^block*/id)arg1 ;
-(long long)contentWrapperInterfaceOrientation;
-(void)_updateDisplayLayoutElementVisibility;
-(unsigned long long)supportedContentInterfaceOrientations;
-(FBSDisplayIdentity *)displayIdentity;
-(void)prepareForReuse;
-(CGRect)referenceFrame;
-(id)sourceView;
-(id)containerViewForBlurContentView;
-(void)willBeginTransitionToVisible:(BOOL)arg1 ;
-(id)initialRimShadowFilters;
-(BOOL)supportsReuse;
-(void)setContentWrapperInterfaceOrientation:(long long)arg1 ;
-(void)setDragging:(BOOL)arg1 ;
-(SBDragPreviewShadowParameters)initialRimShadowParameters;
-(void)didEndTransitionToVisible:(BOOL)arg1 ;
-(BOOL)_shouldDisplayLayoutElementBecomeActive;
-(BOOL)isDragging;
-(SBLayoutElement *)layoutElement;
-(SBDragPreviewShadowParameters)initialDiffuseShadowParameters;
-(id)initWithCoder:(id)arg1 ;
-(id)initialCornerRadiusConfiguration;
-(void)invalidate;
-(UIView *)_contentContainerView;
-(SBLayoutState *)layoutState;
-(void)loadView;
-(id)initWithDisplayIdentity:(id)arg1 ;
-(void)configureWithWorkspaceEntity:(id)arg1 forLayoutElement:(id)arg2 layoutState:(id)arg3 referenceFrame:(CGRect)arg4 ;
-(id)mainWorkspaceApplicationSceneLayoutElementViewController;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)animationControllerForTransitionRequest:(id)arg1 ;
@end

