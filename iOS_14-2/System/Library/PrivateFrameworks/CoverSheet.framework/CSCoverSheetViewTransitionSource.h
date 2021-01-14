/*
* Generated on Thursday, January 14, 2021 at 2:26:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/


@protocol CSCoverSheetViewTransitionSource <CSCoverSheetParticipating>
@property (getter=isTransitioning,nonatomic,readonly) BOOL transitioning; 
@property (nonatomic,readonly) SCD_Struct_CS4 transitionContext; 
@required
-(void)cancelTransition;
-(SCD_Struct_CS4)transitionContext;
-(BOOL)isTransitioning;

@end

