/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@protocol UIViewControllerContextTransitioning;
@class UIPanGestureRecognizer, UIView, NSString;

@interface CNAvatarCardTransition : NSObject <UIViewControllerAnimatedTransitioning> {

	BOOL _reversed;
	BOOL _interactive;
	UIPanGestureRecognizer* _gestureRecognizer;
	id<UIViewControllerContextTransitioning> _context;
	UIView* _presentedView;

}

@property (nonatomic,retain) UIPanGestureRecognizer * gestureRecognizer;                    //@synthesize gestureRecognizer=_gestureRecognizer - In the implementation block
@property (nonatomic,retain) id<UIViewControllerContextTransitioning> context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) UIView * presentedView;                                        //@synthesize presentedView=_presentedView - In the implementation block
@property (nonatomic,readonly) BOOL interactive;                                            //@synthesize interactive=_interactive - In the implementation block
@property (assign) BOOL reversed;                                                           //@synthesize reversed=_reversed - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<UIViewControllerContextTransitioning>)context;
-(void)setContext:(id<UIViewControllerContextTransitioning>)arg1 ;
-(UIView *)presentedView;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(void)setReversed:(BOOL)arg1 ;
-(BOOL)interactive;
-(void)setGestureRecognizer:(UIPanGestureRecognizer *)arg1 ;
-(UIPanGestureRecognizer *)gestureRecognizer;
-(BOOL)reversed;
-(void)setPresentedView:(UIView *)arg1 ;
@end

