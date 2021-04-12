/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RapportUI.framework/RapportUI
*/

#import <UIKitCore/UIViewController.h>

@protocol OS_dispatch_source;
@class NSObject, UIButton, UILabel, RPPINEntryView, UIActivityIndicatorView;

@interface RPPairingPromptViewController : UIViewController {

	NSObject*<OS_dispatch_source> _retryTimer;
	unsigned long long _retryDeadlineTicks;
	/*^block*/id _dismissHandler;
	/*^block*/id _tryPasswordHandler;
	UIButton* _cancelButton;
	UILabel* _titleLabel;
	UILabel* _subTitleLabel;
	RPPINEntryView* _pinEntryView;
	UIActivityIndicatorView* _progressSpinner;
	UILabel* _progressLabel;

}

@property (nonatomic,retain) UIButton * cancelButton;                                //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                   //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subTitleLabel;                                //@synthesize subTitleLabel=_subTitleLabel - In the implementation block
@property (nonatomic,retain) RPPINEntryView * pinEntryView;                          //@synthesize pinEntryView=_pinEntryView - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * progressSpinner;              //@synthesize progressSpinner=_progressSpinner - In the implementation block
@property (nonatomic,retain) UILabel * progressLabel;                                //@synthesize progressLabel=_progressLabel - In the implementation block
@property (nonatomic,copy) id dismissHandler;                                        //@synthesize dismissHandler=_dismissHandler - In the implementation block
@property (nonatomic,copy) id tryPasswordHandler;                                    //@synthesize tryPasswordHandler=_tryPasswordHandler - In the implementation block
+(id)instantiateViewController;
-(UILabel *)titleLabel;
-(UIButton *)cancelButton;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setCancelButton:(UIButton *)arg1 ;
-(void)setProgressLabel:(UILabel *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(UILabel *)subTitleLabel;
-(void)setSubTitleLabel:(UILabel *)arg1 ;
-(void)setDismissHandler:(id)arg1 ;
-(id)dismissHandler;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(UILabel *)progressLabel;
-(void)_retryTimer;
-(void)handleCancelButton:(id)arg1 ;
-(void)handlePINEntered:(id)arg1 ;
-(void)updateWithFlags:(unsigned)arg1 throttleSeconds:(int)arg2 ;
-(id)tryPasswordHandler;
-(void)setTryPasswordHandler:(id)arg1 ;
-(RPPINEntryView *)pinEntryView;
-(void)setPinEntryView:(RPPINEntryView *)arg1 ;
-(UIActivityIndicatorView *)progressSpinner;
-(void)setProgressSpinner:(UIActivityIndicatorView *)arg1 ;
@end

