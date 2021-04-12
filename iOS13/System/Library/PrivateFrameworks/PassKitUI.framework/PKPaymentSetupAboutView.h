/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <UIKitCore/UIView.h>

@class UILabel, UIScrollView;

@interface PKPaymentSetupAboutView : UIView {

	UILabel* _aboutTextLabel;
	UIScrollView* _scrollView;

}

@property (nonatomic,readonly) UIScrollView * scrollView;              //@synthesize scrollView=_scrollView - In the implementation block
-(void)dealloc;
-(void)layoutSubviews;
-(UIScrollView *)scrollView;
-(id)initWithBodyText:(id)arg1 detailButtonText:(id)arg2 ;
-(id)initWithBodyText:(id)arg1 ;
@end

