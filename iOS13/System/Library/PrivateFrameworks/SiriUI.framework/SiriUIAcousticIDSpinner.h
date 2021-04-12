/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
*/

#import <SiriUI/SiriUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol SiriUIAcousticIDSpinnerDelegate;
@class UIImageView, UIVisualEffectView;

@interface SiriUIAcousticIDSpinner : UIView {

	UIImageView* _musicNoteView;
	UIImageView* _spinnerView;
	UIVisualEffectView* _vibrancyView;
	id<SiriUIAcousticIDSpinnerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SiriUIAcousticIDSpinnerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<SiriUIAcousticIDSpinnerDelegate>)delegate;
-(void)setDelegate:(id<SiriUIAcousticIDSpinnerDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(BOOL)isShowing;
-(void)animateIn;
-(void)animateOut;
-(id)_imageForSpinner;
-(id)_spinningAnimation;
@end

