/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIScrollView, UIView, VUILabel;

@interface VUILibraryAlertView : UIView {

	UIScrollView* _scrollView;
	UIView* _containerView;
	VUILabel* _titleLabel;
	VUILabel* _subtitleLabel;

}

@property (nonatomic,readonly) VUILabel * titleLabel;                 //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) VUILabel * subtitleLabel;              //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(VUILabel *)titleLabel;
-(void)layoutSubviews;
-(VUILabel *)subtitleLabel;
@end

