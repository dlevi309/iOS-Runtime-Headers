/*
* Generated on Thursday, January 14, 2021 at 2:24:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithFrame:(CGRect)arg1 ;
-(id<SiriUIAcousticIDSpinnerDelegate>)delegate;
-(BOOL)isShowing;
-(void)animateOut;
-(void)setDelegate:(id<SiriUIAcousticIDSpinnerDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)animateIn;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)_imageForSpinner;
-(id)_spinningAnimation;
@end

