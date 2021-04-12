/*
* Generated on Thursday, January 14, 2021 at 2:24:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <UIKitCore/UIView.h>

@class UILabel, UIScrollView;

@interface PKPaymentSetupAboutView : UIView {

	UILabel* _aboutTextLabel;
	UIScrollView* _scrollView;

}

@property (nonatomic,readonly) UIScrollView * scrollView;              //@synthesize scrollView=_scrollView - In the implementation block
-(void)layoutSubviews;
-(id)initWithBodyText:(id)arg1 detailButtonText:(id)arg2 ;
-(id)initWithBodyText:(id)arg1 ;
-(UIScrollView *)scrollView;
-(void)dealloc;
@end

