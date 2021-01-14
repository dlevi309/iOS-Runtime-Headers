/*
* Generated on Thursday, January 14, 2021 at 2:24:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(VUILabel *)titleLabel;
-(id)initWithFrame:(CGRect)arg1 ;
-(VUILabel *)subtitleLabel;
-(void)layoutSubviews;
@end

