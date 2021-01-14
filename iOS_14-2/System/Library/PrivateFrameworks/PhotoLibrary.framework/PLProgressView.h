/*
* Generated on Thursday, January 14, 2021 at 2:28:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKitCore/UIView.h>

@class UIButton, UILabel, UIProgressView, UIView, NSNumberFormatter, _UIBackdropView;

@interface PLProgressView : UIView {

	UIButton* _cancelButton;
	UILabel* _labelView;
	UIProgressView* _progressView;
	UIView* _topDivider;
	unsigned _didLayout : 1;
	unsigned _didSetPermanantTextOnLabelView : 1;
	NSNumberFormatter* _progressFormatter;
	long long _backgroundType;
	UIView* _backgroundView;
	UIView* _backgroundTintedView;
	_UIBackdropView* _backgroundBlurredView;
	BOOL _showsCancelButton;
	/*^block*/id _cancelationHandler;

}

@property (assign,nonatomic) long long backgroundType;                             //@synthesize backgroundType=_backgroundType - In the implementation block
@property (nonatomic,retain) UIView * backgroundView;                              //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) UIView * backgroundTintedView;                        //@synthesize backgroundTintedView=_backgroundTintedView - In the implementation block
@property (nonatomic,retain) _UIBackdropView * backgroundBlurredView;              //@synthesize backgroundBlurredView=_backgroundBlurredView - In the implementation block
@property (assign,nonatomic) float percentComplete; 
@property (assign,nonatomic) BOOL showsCancelButton;                               //@synthesize showsCancelButton=_showsCancelButton - In the implementation block
@property (nonatomic,copy) id cancelationHandler;                                  //@synthesize cancelationHandler=_cancelationHandler - In the implementation block
-(void)setCancelationHandler:(id)arg1 ;
-(BOOL)showsCancelButton;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundView:(UIView *)arg1 ;
-(UIView *)backgroundView;
-(long long)backgroundType;
-(void)setShowsCancelButton:(BOOL)arg1 ;
-(void)updateUIForPublishingAgent:(id)arg1 ;
-(void)layoutSubviews;
-(void)setPercentComplete:(float)arg1 ;
-(float)percentComplete;
-(void)setLabelText:(id)arg1 ;
-(void)_cancel:(id)arg1 ;
-(void)setBackgroundType:(long long)arg1 ;
-(id)cancelationHandler;
-(void)dealloc;
-(void)_syncToBackgroundType;
-(void)_installBackgroundView;
-(void)_installBackgroundBlurredView;
-(void)_removeBackgroundBlurredView;
-(void)_installBackgroundTintedView;
-(void)_removeBackgroundTintedView;
-(UIView *)backgroundTintedView;
-(void)setBackgroundTintedView:(UIView *)arg1 ;
-(_UIBackdropView *)backgroundBlurredView;
-(void)setBackgroundBlurredView:(_UIBackdropView *)arg1 ;
@end

