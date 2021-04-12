/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

@class NSSet;


@protocol SVVideoAccessoryItemDisplayModeTransitionContext <NSObject>
@property (nonatomic,readonly) NSSet * views; 
@property (nonatomic,readonly) NSSet * appearingViews; 
@property (nonatomic,readonly) NSSet * disappearingViews; 
@property (nonatomic,readonly) NSSet * transitioningViews; 
@property (nonatomic,readonly) NSSet * containerViews; 
@property (nonatomic,readonly) BOOL transitionWasCancelled; 
@required
-(BOOL)transitionWasCancelled;
-(void)completeTransition:(BOOL)arg1;
-(NSSet *)views;
-(NSSet *)appearingViews;
-(CGRect*)initialFrameForView:(id)arg1;
-(NSSet *)containerViews;
-(unsigned long long)initialDisplayModeForView:(id)arg1;
-(unsigned long long)targetDisplayModeForView:(id)arg1;
-(CGRect*)targetFrameForView:(id)arg1;
-(NSSet *)transitioningViews;
-(NSSet *)disappearingViews;

@end

