/*
* Generated on Thursday, January 14, 2021 at 2:24:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIVisualEffectView, UIView;

@interface VUIConfirmationDialogTemplateView : UIView {

	UIVisualEffectView* _backdropView;
	UIView* _cardView;

}

@property (nonatomic,retain) UIView * cardView;                                //@synthesize cardView=_cardView - In the implementation block
@property (nonatomic,readonly) UIVisualEffectView * backdropView;              //@synthesize backdropView=_backdropView - In the implementation block
-(UIVisualEffectView *)backdropView;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIView *)cardView;
-(void)layoutSubviews;
-(void)_configureSubviews;
-(id)initWithCoder:(id)arg1 ;
-(void)setCardView:(UIView *)arg1 ;
@end

