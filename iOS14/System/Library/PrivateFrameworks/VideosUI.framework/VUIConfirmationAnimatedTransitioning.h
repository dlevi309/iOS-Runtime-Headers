/*
* Generated on Thursday, January 14, 2021 at 2:24:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@protocol VUIConfirmationAnimatedTransitioningDelegate;
@class NSString;

@interface VUIConfirmationAnimatedTransitioning : NSObject <UIViewControllerAnimatedTransitioning> {

	BOOL _presenting;
	id<VUIConfirmationAnimatedTransitioningDelegate> _delegate;

}

@property (getter=isPresenting,nonatomic,readonly) BOOL presenting;                                         //@synthesize presenting=_presenting - In the implementation block
@property (assign,nonatomic,__weak) id<VUIConfirmationAnimatedTransitioningDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)animateTransition:(id)arg1 ;
-(void)animationEnded:(BOOL)arg1 ;
-(double)transitionDuration:(id)arg1 ;
-(id)init;
-(id)initWithPresenting:(BOOL)arg1 ;
-(id<VUIConfirmationAnimatedTransitioningDelegate>)delegate;
-(void)setDelegate:(id<VUIConfirmationAnimatedTransitioningDelegate>)arg1 ;
-(BOOL)isPresenting;
@end

