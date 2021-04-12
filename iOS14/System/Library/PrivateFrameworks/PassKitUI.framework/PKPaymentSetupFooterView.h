/*
* Generated on Thursday, January 14, 2021 at 2:24:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKTableFooterView.h>

@class UIButton, UILabel;

@interface PKPaymentSetupFooterView : PKTableFooterView {

	UIButton* _continueButton;
	UIButton* _skipCardButton;
	UILabel* _notificationText;
	BOOL _isBuddyiPad;
	BOOL _forceShowSetupLaterButton;
	long long _context;
	UIButton* _manualEntryButton;
	UIButton* _setupLaterButton;

}

@property (assign,nonatomic) long long context;                           //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) BOOL forceShowSetupLaterButton;              //@synthesize forceShowSetupLaterButton=_forceShowSetupLaterButton - In the implementation block
@property (nonatomic,retain) UILabel * notificationText; 
@property (nonatomic,retain) UIButton * manualEntryButton;                //@synthesize manualEntryButton=_manualEntryButton - In the implementation block
@property (nonatomic,retain) UIButton * setupLaterButton;                 //@synthesize setupLaterButton=_setupLaterButton - In the implementation block
@property (nonatomic,retain) UIButton * skipCardButton; 
-(long long)context;
-(void)setButtonsEnabled:(BOOL)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIButton *)manualEntryButton;
-(id)initWithFrame:(CGRect)arg1 context:(long long)arg2 ;
-(void)_createSetupLaterButton;
-(CGSize)_sizeForLabel:(id)arg1 maxText:(id)arg2 constrainedToSize:(CGSize)arg3 ;
-(UILabel *)notificationText;
-(void)setNotificationText:(UILabel *)arg1 ;
-(UIButton *)setupLaterButton;
-(void)setSetupLaterButton:(UIButton *)arg1 ;
-(UIButton *)skipCardButton;
-(void)setSkipCardButton:(UIButton *)arg1 ;
-(void)setManualEntryButton:(UIButton *)arg1 ;
-(BOOL)forceShowSetupLaterButton;
-(void)setForceShowSetupLaterButton:(BOOL)arg1 ;
-(CGSize)_sizeForButton:(id)arg1 constrainedToSize:(CGSize)arg2 ;
-(void)setContext:(long long)arg1 ;
@end

