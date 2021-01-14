/*
* Generated on Thursday, January 14, 2021 at 2:20:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

@class NSArray;


@protocol UIViewControllerContextTransitioningEx <UIViewControllerContextTransitioning>
@property (setter=_setContainerViews:,nonatomic,retain) NSArray * _containerViews; 
@property (assign,setter=_setPercentOffset:,nonatomic) double _percentOffset; 
@property (assign,setter=_setAllowUserInteraction:,getter=_allowUserInteraction,nonatomic) BOOL _allowUserInteraction; 
@required
-(BOOL)_allowUserInteraction;
-(void)__runAlongsideAnimations;
-(NSArray *)_containerViews;
-(void)_interactivityDidChange:(BOOL)arg1;
-(void)_setPercentOffset:(double)arg1;
-(long long)_alongsideAnimationsCount;
-(void)_setContainerViews:(id)arg1;
-(double)_percentOffset;
-(void)_setAllowUserInteraction:(BOOL)arg1;

@end

