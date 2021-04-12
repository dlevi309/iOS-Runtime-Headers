/*
* Generated on Monday, March 1, 2021 at 2:35:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
*/

#import <OpusFoundation/OpusFoundation-Structs.h>
#import <OpusFoundation/OFUIView.h>

@class UIPageControl;

@interface _OFPageViewControllerContentView : OFUIView {

	UIPageControl* _pageControl;

}

@property (nonatomic,readonly) UIPageControl * pageControl;              //@synthesize pageControl=_pageControl - In the implementation block
+(Class)layerClass;
-(void)dealloc;
-(void)setBounds:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)_setupPageControl:(id)arg1 ;
-(void)invalidatePageViewController;
-(UIPageControl *)pageControl;
@end

