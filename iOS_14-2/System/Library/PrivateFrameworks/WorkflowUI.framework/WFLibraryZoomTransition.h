/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@class UIView, NSString;

@interface WFLibraryZoomTransition : NSObject <UIViewControllerAnimatedTransitioning> {

	UIView* _cellView;
	BOOL _presenting;
	UIView* _morphView;
	UIView* _shadowView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)transitionForPresentingFromView:(id)arg1 ;
+(id)transitionForDismissingToView:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(double)transitionDuration:(id)arg1 ;
-(id)initWithView:(id)arg1 presenting:(BOOL)arg2 ;
-(id)lessStiffSpringAnimation;
-(id)stiffSpringAnimation;
-(id)centralAnimation;
-(id)morphAnimation;
-(id)crossfadeAnimation;
-(id)radiusAnimation;
-(void)configureViews:(id)arg1 ;
-(void)startAnimations:(id)arg1 ;
-(void)completeAnimations:(id)arg1 ;
-(CGImageRef)snapshotView:(id)arg1 ;
@end

