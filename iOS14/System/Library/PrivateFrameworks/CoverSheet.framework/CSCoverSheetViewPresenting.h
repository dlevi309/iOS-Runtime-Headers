/*
* Generated on Thursday, January 14, 2021 at 2:26:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

@class CSAppearance, CSBehavior, CSPresentation;


@protocol CSCoverSheetViewPresenting <CSCoverSheetViewControlling,CSActionHandling>
@property (nonatomic,copy,readonly) CSAppearance * activeAppearance; 
@property (nonatomic,copy,readonly) CSBehavior * activeBehavior; 
@property (nonatomic,copy,readonly) CSPresentation * externalPresentation; 
@required
-(CSBehavior *)activeBehavior;
-(CSPresentation *)externalPresentation;
-(CSAppearance *)activeAppearance;
-(void)updateBehaviorForController:(id)arg1;
-(void)updateAppearanceForController:(id)arg1;
-(void)conformsToCSCoverSheetViewPresenting;
-(void)updateAppearanceForController:(id)arg1 withAnimationSettings:(id)arg2 completion:(/*^block*/id)arg3;

@end

