/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <libobjc.A.dylib/SVVideoAccessoryItemTransitionContext.h>

@class UIView, NSString;

@interface SVVideoAccessoryBarItemTransitionContext : NSObject <SVVideoAccessoryItemTransitionContext> {

	BOOL _transitionWasCancelled;
	UIView* _fromView;
	UIView* _toView;
	UIView* _containerView;
	/*^block*/id _completionBlock;

}

@property (nonatomic,copy,readonly) id completionBlock;                //@synthesize completionBlock=_completionBlock - In the implementation block
@property (assign,nonatomic) BOOL transitionWasCancelled;              //@synthesize transitionWasCancelled=_transitionWasCancelled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIView * fromView;                      //@synthesize fromView=_fromView - In the implementation block
@property (nonatomic,readonly) UIView * toView;                        //@synthesize toView=_toView - In the implementation block
@property (nonatomic,readonly) UIView * containerView;                 //@synthesize containerView=_containerView - In the implementation block
-(id)completionBlock;
-(UIView *)containerView;
-(BOOL)transitionWasCancelled;
-(void)completeTransition:(BOOL)arg1 ;
-(UIView *)toView;
-(UIView *)fromView;
-(void)setTransitionWasCancelled:(BOOL)arg1 ;
-(id)initWithContainerView:(id)arg1 fromView:(id)arg2 toView:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
@end

