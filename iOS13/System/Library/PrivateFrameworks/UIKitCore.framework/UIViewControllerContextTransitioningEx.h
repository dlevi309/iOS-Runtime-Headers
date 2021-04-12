/*
* Generated on Monday, March 1, 2021 at 2:30:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

@class NSArray;


@protocol UIViewControllerContextTransitioningEx <UIViewControllerContextTransitioning>
@property (setter=_setContainerViews:,nonatomic,retain) NSArray * _containerViews; 
@property (assign,setter=_setPercentOffset:,nonatomic) double _percentOffset; 
@property (assign,setter=_setAllowUserInteraction:,getter=_allowUserInteraction,nonatomic) BOOL _allowUserInteraction; 
@required
-(void)__runAlongsideAnimations;
-(void)_setAllowUserInteraction:(BOOL)arg1;
-(BOOL)_allowUserInteraction;
-(long long)_alongsideAnimationsCount;
-(void)_interactivityDidChange:(BOOL)arg1;
-(double)_percentOffset;
-(NSArray *)_containerViews;
-(void)_setContainerViews:(id)arg1;
-(void)_setPercentOffset:(double)arg1;

@end

