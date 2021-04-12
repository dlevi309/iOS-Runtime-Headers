/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBFluidSwitcherViewController.h>
#import <libobjc.A.dylib/SBFSpringLoadedInteractionBehaviorDelegate.h>
#import <libobjc.A.dylib/SBFSpringLoadedInteractionEffectDelegate.h>

@class NSString;

@interface SBGridSwitcherViewController : SBFluidSwitcherViewController <SBFSpringLoadedInteractionBehaviorDelegate, SBFSpringLoadedInteractionEffectDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidLoad;
-(id)targetItemForSpringLoadingInteractionInView:(id)arg1 atLocation:(CGPoint)arg2 forDropSession:(id)arg3 ;
-(id)targetViewForSpringLoadingEffectForView:(id)arg1 ;
-(void)_setupSpringLoadingSupport;
@end

