/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <TVMLKit/_TVCarouselViewController.h>
#import <libobjc.A.dylib/TVCarouselViewDelegate.h>

@protocol VUIPageControlView;
@class UIView, NSNumber, NSString;

@interface VUICarouselViewController : _TVCarouselViewController <TVCarouselViewDelegate> {

	UIView*<VUIPageControlView> _pageControlView;
	NSNumber* _pageControlBottomMarginNumber;

}

@property (nonatomic,retain) UIView*<VUIPageControlView> pageControlView;              //@synthesize pageControlView=_pageControlView - In the implementation block
@property (nonatomic,retain) NSNumber * pageControlBottomMarginNumber;                 //@synthesize pageControlBottomMarginNumber=_pageControlBottomMarginNumber - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidLayoutSubviews;
-(void)_pageChanged:(long long)arg1 ;
-(void)updateWithViewElement:(id)arg1 ;
-(void)carouselView:(id)arg1 didCenterItemAtIndex:(unsigned long long)arg2 ;
-(UIView*<VUIPageControlView>)pageControlView;
-(void)setPageControlView:(UIView*<VUIPageControlView>)arg1 ;
-(void)setPageControlBottomMarginNumber:(NSNumber *)arg1 ;
-(NSNumber *)pageControlBottomMarginNumber;
@end

