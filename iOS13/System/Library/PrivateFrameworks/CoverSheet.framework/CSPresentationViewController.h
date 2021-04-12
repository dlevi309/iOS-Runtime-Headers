/*
* Generated on Monday, March 1, 2021 at 2:33:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <CoverSheet/CSCoverSheetViewControllerBase.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSMutableArray, NSArray, NSString;

@interface CSPresentationViewController : CSCoverSheetViewControllerBase <BSDescriptionProviding> {

	unsigned long long _mutatingPresentation;
	unsigned long long _transitioning;
	NSMutableArray* _contentViewControllers;
	NSArray* _activeContentViewControllers;

}

@property (getter=hasContent,nonatomic,readonly) BOOL hasContent; 
@property (getter=isPresentingContent,nonatomic,readonly) BOOL presentingContent; 
@property (getter=isTransitioning,nonatomic,readonly) BOOL transitioning; 
@property (nonatomic,copy,readonly) NSArray * contentViewControllers;                          //@synthesize contentViewControllers=_contentViewControllers - In the implementation block
@property (nonatomic,copy,readonly) NSArray * presentedViewControllers;                        //@synthesize activeContentViewControllers=_activeContentViewControllers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(BOOL)handleEvent:(id)arg1 ;
-(BOOL)isTransitioning;
-(BOOL)hasContent;
-(NSArray *)contentViewControllers;
-(BOOL)isPresentingContent;
-(long long)participantState;
-(void)aggregateAppearance:(id)arg1 ;
-(void)aggregateBehavior:(id)arg1 ;
-(BOOL)wouldHandleButtonEvent:(id)arg1 ;
-(void)presentContentViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)dismissContentViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)dismissPresentationAnimated:(BOOL)arg1 ;
-(void)updatePresentationAnimated:(BOOL)arg1 ;
-(NSArray *)presentedViewControllers;
-(void)presentContentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)dismissContentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)rebuildEverythingForReason:(id)arg1 ;
-(void)presentContentViewControllers:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_updateContentViewControllersAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)dismissContentViewControllers:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)dismissPresentationAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_reflowPresentationWithAnimationSettings:(id)arg1 ;
-(void)aggregatePresentation:(id)arg1 ;
-(BOOL)handleAppearanceUpdateFromController:(id)arg1 animationSettings:(inout id*)arg2 ;
-(void)_updatePresentationForViewController:(id)arg1 presentation:(id)arg2 animationSettings:(id)arg3 ;
@end

