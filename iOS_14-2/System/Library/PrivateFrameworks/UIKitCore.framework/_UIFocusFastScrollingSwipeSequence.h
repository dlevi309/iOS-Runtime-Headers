/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class UIScrollView;

@interface _UIFocusFastScrollingSwipeSequence : NSObject {

	UIScrollView* _scrollView;
	unsigned long long _headingLock;
	long long _consecutiveSwipeCount;

}

@property (assign,nonatomic,__weak) UIScrollView * scrollView;              //@synthesize scrollView=_scrollView - In the implementation block
@property (assign,nonatomic) unsigned long long headingLock;                //@synthesize headingLock=_headingLock - In the implementation block
@property (assign,nonatomic) long long consecutiveSwipeCount;               //@synthesize consecutiveSwipeCount=_consecutiveSwipeCount - In the implementation block
-(unsigned long long)headingLock;
-(void)setHeadingLock:(unsigned long long)arg1 ;
-(long long)consecutiveSwipeCount;
-(void)setConsecutiveSwipeCount:(long long)arg1 ;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(UIScrollView *)scrollView;
@end

