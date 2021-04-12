/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PlatterKit.framework/PlatterKit
*/

#import <PlatterKit/PlatterKit-Structs.h>
#import <PlatterKit/PLClickPresentationInteractionManager.h>

@interface PLPreviewInteractionManager : PLClickPresentationInteractionManager

@property (assign,nonatomic,__weak) id<PLPreviewInteractionManagerDelegate> delegate; 
+(void)initialize;
-(void)setDelegate:(id<PLPreviewInteractionManagerDelegate>)arg1 ;
-(id)initWithPresentingViewController:(id)arg1 ;
-(void)_delegateDidEndUserInteraction;
-(BOOL)_delegateShouldBeginInteractionWithTouchAtLocation:(CGPoint)arg1 ;
-(void)_delegateWillBeginUserInteraction;
-(id)_delegateTransitioningDelegate;
-(id)_delegateContainerView;
-(id)_delegatePresentedViewController;
-(void)_delegateWillDismissPresentedContentWithTrigger:(long long)arg1 ;
-(void)_delegateDeclinedDismissingPresentedContentWithTrigger:(long long)arg1 ;
-(void)_delegateShouldFinishInteractionWithCompletionBlock:(/*^block*/id)arg1 ;
@end

