/*
* Generated on Monday, March 1, 2021 at 2:33:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/


@protocol CSCoverSheetViewTransitionSource <CSCoverSheetParticipating>
@property (getter=isTransitioning,nonatomic,readonly) BOOL transitioning; 
@property (nonatomic,readonly) SCD_Struct_CS3 transitionContext; 
@required
-(SCD_Struct_CS3)transitionContext;
-(BOOL)isTransitioning;
-(void)cancelTransition;

@end

