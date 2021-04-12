/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIVisualEffectView *)backdropView;
-(void)_configureSubviews;
-(UIView *)cardView;
-(void)setCardView:(UIView *)arg1 ;
@end

