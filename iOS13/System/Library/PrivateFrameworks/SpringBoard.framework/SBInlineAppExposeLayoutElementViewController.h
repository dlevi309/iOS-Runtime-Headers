/*
* Generated on Monday, March 1, 2021 at 2:35:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBLayoutElementViewController.h>
#import <libobjc.A.dylib/SBLayoutStateTransitionObserver.h>
#import <libobjc.A.dylib/SBMainDisplaySceneLayoutElementViewControlling.h>

@class SBInlineAppExposeContainerViewController, NSMutableSet, BSCornerRadiusConfiguration, NSString;

@interface SBInlineAppExposeLayoutElementViewController : SBLayoutElementViewController <SBLayoutStateTransitionObserver, SBMainDisplaySceneLayoutElementViewControlling> {

	SBInlineAppExposeContainerViewController* _inlineContainerViewController;
	NSMutableSet* _maskDisplayCornersReasons;

}

@property (nonatomic,retain) BSCornerRadiusConfiguration * cornerRadiusConfiguration; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)invalidate;
-(void)prepareForReuse;
-(void)setShadowOffset:(double)arg1 ;
-(void)setShadowOpacity:(double)arg1 ;
-(void)viewDidLayoutSubviews;
-(BSCornerRadiusConfiguration *)cornerRadiusConfiguration;
-(void)setCornerRadiusConfiguration:(BSCornerRadiusConfiguration *)arg1 ;
-(id)animationControllerForTransitionRequest:(id)arg1 ;
-(void)configureWithWorkspaceEntity:(id)arg1 forLayoutElement:(id)arg2 layoutState:(id)arg3 referenceFrame:(CGRect)arg4 ;
-(void)layoutStateTransitionCoordinator:(id)arg1 transitionDidBeginWithTransitionContext:(id)arg2 ;
-(void)layoutStateTransitionCoordinator:(id)arg1 transitionWillEndWithTransitionContext:(id)arg2 ;
-(void)layoutStateTransitionCoordinator:(id)arg1 transitionDidEndWithTransitionContext:(id)arg2 ;
-(void)setMaskDisplayCorners:(BOOL)arg1 forReason:(id)arg2 ;
-(id)relinquishInlineContainerViewController;
-(BOOL)SB_conformsToMainDisplaySceneLayoutElementViewControlling;
-(id)_newDisplayLayoutElementForEntity:(id)arg1 ;
@end

