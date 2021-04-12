/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setContext:(long long)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 context:(long long)arg2 ;
-(void)setButtonsEnabled:(BOOL)arg1 ;
-(UILabel *)notificationText;
-(void)setNotificationText:(UILabel *)arg1 ;
-(void)setSkipCardButton:(UIButton *)arg1 ;
-(void)setSetupLaterButton:(UIButton *)arg1 ;
-(void)setManualEntryButton:(UIButton *)arg1 ;
-(void)setForceShowSetupLaterButton:(BOOL)arg1 ;
-(UIButton *)setupLaterButton;
-(UIButton *)skipCardButton;
-(UIButton *)manualEntryButton;
-(BOOL)forceShowSetupLaterButton;
-(CGSize)_sizeForButton:(id)arg1 constrainedToSize:(CGSize)arg2 ;
-(void)_createSetupLaterButton;
-(CGSize)_sizeForLabel:(id)arg1 maxText:(id)arg2 constrainedToSize:(CGSize)arg3 ;
@end

