/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isDragging,nonatomic) BOOL dragging;                                         //@synthesize dragging=_dragging - In the implementation block
-(void)dealloc;
-(void)invalidate;
-(id)initWithCoder:(id)arg1 ;
-(void)prepareForReuse;
-(CGRect)referenceFrame;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(BOOL)isDragging;
-(id)sourceView;
-(SBLayoutState *)layoutState;
-(FBSDisplayIdentity *)displayIdentity;
-(void)setDragging:(BOOL)arg1 ;
-(UIView *)_contentContainerView;
-(id)animationControllerForTransitionRequest:(id)arg1 ;
-(SBLayoutElement *)layoutElement;
-(void)configureWithWorkspaceEntity:(id)arg1 forLayoutElement:(id)arg2 layoutState:(id)arg3 referenceFrame:(CGRect)arg4 ;
-(id)_newDisplayLayoutElementForEntity:(id)arg1 ;
-(id)mainWorkspaceApplicationSceneLayoutElementViewController;
-(id)initialCornerRadiusConfiguration;
-(SBDragPreviewShadowParameters)initialDiffuseShadowParameters;
-(SBDragPreviewShadowParameters)initialRimShadowParameters;
-(id)initialDiffuseShadowFilters;
-(id)initialRimShadowFilters;
-(id)containerViewForBlurContentView;
-(void)setContentWrapperInterfaceOrientation:(long long)arg1 ;
-(BOOL)supportsReuse;
-(id)initWithDisplayIdentity:(id)arg1 ;
-(void)willBeginTransitionToVisible:(BOOL)arg1 ;
-(void)didEndTransitionToVisible:(BOOL)arg1 ;
-(long long)contentWrapperInterfaceOrientation;
-(void)_updateDisplayLayoutElementVisibility;
-(BOOL)_shouldDisplayLayoutElementBecomeActive;
-(void)_updateDisplayLayoutElementWithBuilder:(/*^block*/id)arg1 ;
-(unsigned long long)supportedContentInterfaceOrientations;
@end

