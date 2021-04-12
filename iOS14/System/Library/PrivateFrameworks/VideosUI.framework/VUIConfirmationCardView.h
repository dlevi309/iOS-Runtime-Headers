/*
* Generated on Thursday, January 14, 2021 at 2:24:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class VUIConfirmationCardLayout, VUILabel, _TVImageView, UIView, UIVisualEffectView;

@interface VUIConfirmationCardView : UIView {

	VUIConfirmationCardLayout* _layout;
	VUILabel* _textLabel;
	_TVImageView* _badgeView;
	UIView* _cardView;
	UIVisualEffectView* _backdropView;

}

@property (nonatomic,retain) VUIConfirmationCardLayout * layout;               //@synthesize layout=_layout - In the implementation block
@property (nonatomic,retain) VUILabel * textLabel;                             //@synthesize textLabel=_textLabel - In the implementation block
@property (nonatomic,retain) _TVImageView * badgeView;                         //@synthesize badgeView=_badgeView - In the implementation block
@property (nonatomic,retain) UIView * cardView;                                //@synthesize cardView=_cardView - In the implementation block
@property (nonatomic,readonly) UIVisualEffectView * backdropView;              //@synthesize backdropView=_backdropView - In the implementation block
-(UIVisualEffectView *)backdropView;
-(_TVImageView *)badgeView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBadgeView:(_TVImageView *)arg1 ;
-(UIView *)cardView;
-(void)setTextLabel:(VUILabel *)arg1 ;
-(void)layoutSubviews;
-(void)_configureSubviews;
-(id)initWithCoder:(id)arg1 ;
-(void)setCardView:(UIView *)arg1 ;
-(VUILabel *)textLabel;
-(void)setLayout:(VUIConfirmationCardLayout *)arg1 ;
-(VUIConfirmationCardLayout *)layout;
@end

