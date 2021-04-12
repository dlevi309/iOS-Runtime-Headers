/*
* Generated on Monday, March 1, 2021 at 2:33:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

