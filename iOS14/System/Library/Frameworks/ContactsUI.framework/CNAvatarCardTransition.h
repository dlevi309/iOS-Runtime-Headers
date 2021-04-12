/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)animateTransition:(id)arg1 ;
-(UIPanGestureRecognizer *)gestureRecognizer;
-(void)setReversed:(BOOL)arg1 ;
-(void)setPresentedView:(UIView *)arg1 ;
-(double)transitionDuration:(id)arg1 ;
-(UIView *)presentedView;
-(BOOL)interactive;
-(id<UIViewControllerContextTransitioning>)context;
-(BOOL)reversed;
-(void)setGestureRecognizer:(UIPanGestureRecognizer *)arg1 ;
-(void)setContext:(id<UIViewControllerContextTransitioning>)arg1 ;
@end

