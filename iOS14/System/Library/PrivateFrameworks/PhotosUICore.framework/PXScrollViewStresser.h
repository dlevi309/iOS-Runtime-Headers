/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@class CADisplayLink, UIScrollView;

@interface PXScrollViewStresser : NSObject {

	unsigned _scrollDirection;
	CADisplayLink* _displayLink;
	UIScrollView* _scrollView;
	long long _scrollCount;

}

@property (nonatomic,retain) CADisplayLink * displayLink;                      //@synthesize displayLink=_displayLink - In the implementation block
@property (nonatomic,retain) UIScrollView * scrollView;                        //@synthesize scrollView=_scrollView - In the implementation block
@property (assign,nonatomic) unsigned scrollDirection;                         //@synthesize scrollDirection=_scrollDirection - In the implementation block
@property (assign,nonatomic) long long scrollCount;                            //@synthesize scrollCount=_scrollCount - In the implementation block
@property (getter=isScrolling,nonatomic,readonly) BOOL scrolling; 
+(id)sharedInstance;
-(void)stopScrolling;
-(CADisplayLink *)displayLink;
-(void)setDisplayLink:(CADisplayLink *)arg1 ;
-(unsigned)scrollDirection;
-(void)setScrollDirection:(unsigned)arg1 ;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(void)startScrollingScrollView:(id)arg1 axis:(long long)arg2 ;
-(long long)scrollCount;
-(void)setScrollCount:(long long)arg1 ;
-(BOOL)isScrolling;
-(UIScrollView *)scrollView;
-(void)_handleDisplayLink:(id)arg1 ;
@end

