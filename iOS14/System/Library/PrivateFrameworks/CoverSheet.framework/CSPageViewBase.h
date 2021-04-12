/*
* Generated on Thursday, January 14, 2021 at 2:26:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <CoverSheet/CSCoverSheetViewBase.h>
#import <libobjc.A.dylib/CSPageView.h>

@protocol CSPageViewControllerProtocol;
@class UIViewController;

@interface CSPageViewBase : CSCoverSheetViewBase <CSPageView> {

	UIViewController*<CSPageViewControllerProtocol> _pageViewController;
	double _contentWidth;

}

@property (assign,nonatomic,__weak) UIViewController*<CSPageViewControllerProtocol> pageViewController;              //@synthesize pageViewController=_pageViewController - In the implementation block
@property (assign,nonatomic) double contentWidth;                                                                    //@synthesize contentWidth=_contentWidth - In the implementation block
-(double)contentWidth;
-(void)setContentWidth:(double)arg1 ;
-(UIViewController*<CSPageViewControllerProtocol>)pageViewController;
-(void)setPageViewController:(UIViewController*<CSPageViewControllerProtocol>)arg1 ;
@end

