/*
* Generated on Monday, March 1, 2021 at 2:33:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

@class CSAppearance, CSBehavior, CSPresentation;


@protocol CSCoverSheetViewPresenting <CSCoverSheetViewControlling,CSActionHandling>
@property (nonatomic,copy,readonly) CSAppearance * activeAppearance; 
@property (nonatomic,copy,readonly) CSBehavior * activeBehavior; 
@property (nonatomic,copy,readonly) CSPresentation * externalPresentation; 
@required
-(CSBehavior *)activeBehavior;
-(CSAppearance *)activeAppearance;
-(void)updateAppearanceForController:(id)arg1;
-(void)updateBehaviorForController:(id)arg1;
-(void)updateAppearanceForController:(id)arg1 withAnimationSettings:(id)arg2 completion:(/*^block*/id)arg3;
-(void)_conformsToCSCoverSheetViewPresenting;
-(CSPresentation *)externalPresentation;

@end

