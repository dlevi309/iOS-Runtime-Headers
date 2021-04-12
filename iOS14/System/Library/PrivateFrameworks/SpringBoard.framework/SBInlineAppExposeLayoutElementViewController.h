/*
* Generated on Thursday, January 14, 2021 at 2:25:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)_newDisplayLayoutElementForEntity:(id)arg1 ;
-(void)setShadowOffset:(double)arg1 ;
-(void)layoutStateTransitionCoordinator:(id)arg1 transitionDidEndWithTransitionContext:(id)arg2 ;
-(void)layoutStateTransitionCoordinator:(id)arg1 transitionDidBeginWithTransitionContext:(id)arg2 ;
-(void)layoutStateTransitionCoordinator:(id)arg1 transitionWillEndWithTransitionContext:(id)arg2 ;
-(id)relinquishInlineContainerViewController;
-(void)setShadowOpacity:(double)arg1 ;
-(void)prepareForReuse;
-(void)setCornerRadiusConfiguration:(BSCornerRadiusConfiguration *)arg1 ;
-(BSCornerRadiusConfiguration *)cornerRadiusConfiguration;
-(void)invalidate;
-(void)configureWithWorkspaceEntity:(id)arg1 forLayoutElement:(id)arg2 layoutState:(id)arg3 referenceFrame:(CGRect)arg4 ;
-(BOOL)SB_conformsToMainDisplaySceneLayoutElementViewControlling;
-(void)viewDidLayoutSubviews;
-(void)setMaskDisplayCorners:(BOOL)arg1 forReason:(id)arg2 ;
-(id)animationControllerForTransitionRequest:(id)arg1 ;
@end

