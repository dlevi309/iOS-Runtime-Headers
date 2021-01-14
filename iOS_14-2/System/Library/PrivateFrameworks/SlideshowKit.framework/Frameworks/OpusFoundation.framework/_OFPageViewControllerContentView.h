/*
* Generated on Thursday, January 14, 2021 at 2:28:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setBounds:(CGRect)arg1 ;
-(void)invalidatePageViewController;
-(void)layoutSubviews;
-(void)setFrame:(CGRect)arg1 ;
-(UIPageControl *)pageControl;
-(void)_setupPageControl:(id)arg1 ;
-(void)dealloc;
@end

