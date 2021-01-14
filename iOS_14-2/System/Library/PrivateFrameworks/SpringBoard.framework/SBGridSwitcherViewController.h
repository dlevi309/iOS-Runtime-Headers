/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)targetViewForSpringLoadingEffectForView:(id)arg1 ;
-(id)targetItemForSpringLoadingInteractionInView:(id)arg1 atLocation:(CGPoint)arg2 forDropSession:(id)arg3 ;
-(void)_setupSpringLoadingSupport;
-(void)viewDidLoad;
@end

