/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
*/


@class UIScrollView;

@interface UIAccessibilityAutoscrollManager : NSObject {

	BOOL _autoscrolling;
	UIScrollView* _scrollView;
	unsigned long long _scrollDirection;
	double _autoscrollSpeed;

}

@property (assign,getter=isAutoscrolling,nonatomic) BOOL autoscrolling;              //@synthesize autoscrolling=_autoscrolling - In the implementation block
@property (assign,nonatomic) unsigned long long scrollDirection;                     //@synthesize scrollDirection=_scrollDirection - In the implementation block
@property (assign,nonatomic) double autoscrollSpeed;                                 //@synthesize autoscrollSpeed=_autoscrollSpeed - In the implementation block
@property (nonatomic,retain) UIScrollView * scrollView;                              //@synthesize scrollView=_scrollView - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)pause;
-(void)setScrollDirection:(unsigned long long)arg1 ;
-(unsigned long long)scrollDirection;
-(UIScrollView *)scrollView;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(void)_autoscroll;
-(void)autoscrollInDirection:(unsigned long long)arg1 ;
-(BOOL)isAutoscrolling;
-(void)scrollToTop;
-(void)scrollToBottom;
-(unsigned long long)availableAutoscrollDirections;
-(void)incrementAutoscrollSpeed;
-(void)decrementAutoscrollSpeed;
-(void)setAutoscrollSpeed:(double)arg1 ;
-(void)setAutoscrolling:(BOOL)arg1 ;
-(double)autoscrollSpeed;
@end

