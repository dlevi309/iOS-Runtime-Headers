/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setAutoscrollSpeed:(double)arg1 ;
-(void)setAutoscrolling:(BOOL)arg1 ;
-(unsigned long long)scrollDirection;
-(double)autoscrollSpeed;
-(BOOL)isAutoscrolling;
-(void)setScrollDirection:(unsigned long long)arg1 ;
-(void)scrollToTop;
-(void)scrollToBottom;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(UIScrollView *)scrollView;
-(void)_autoscroll;
-(void)autoscrollInDirection:(unsigned long long)arg1 ;
-(unsigned long long)availableAutoscrollDirections;
-(void)incrementAutoscrollSpeed;
-(void)decrementAutoscrollSpeed;
@end

