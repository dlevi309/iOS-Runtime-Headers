/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
*/

#import <TVRemoteUI/TVRemoteUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol _TVRAlertViewDelegate;
@class UIView, UIVisualEffectView, UILabel, _TVRPasscodeField, _TVRMAlertButton, NSString, TVRCPINEntryAttributes;

@interface _TVRAlertView : UIView {

	id<_TVRAlertViewDelegate> _delegate;
	UIView* _blendModeView;
	UIVisualEffectView* _effectView;
	UIView* _hairlineView;
	UILabel* _titleLabel;
	_TVRPasscodeField* _passcodeField;
	_TVRMAlertButton* _cancelButton;

}

@property (nonatomic,retain) UIView * blendModeView;                                   //@synthesize blendModeView=_blendModeView - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * effectView;                          //@synthesize effectView=_effectView - In the implementation block
@property (nonatomic,retain) UIView * hairlineView;                                    //@synthesize hairlineView=_hairlineView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                     //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) _TVRPasscodeField * passcodeField;                        //@synthesize passcodeField=_passcodeField - In the implementation block
@property (nonatomic,retain) _TVRMAlertButton * cancelButton;                          //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,retain) TVRCPINEntryAttributes * PINEntryAttributes; 
@property (assign,nonatomic,__weak) id<_TVRAlertViewDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
-(id<_TVRAlertViewDelegate>)delegate;
-(void)setDelegate:(id<_TVRAlertViewDelegate>)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)titleLabel;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(BOOL)becomeFirstResponder;
-(BOOL)resignFirstResponder;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(UIVisualEffectView *)effectView;
-(_TVRMAlertButton *)cancelButton;
-(void)setCancelButton:(_TVRMAlertButton *)arg1 ;
-(void)setEffectView:(UIVisualEffectView *)arg1 ;
-(void)setPasscodeField:(_TVRPasscodeField *)arg1 ;
-(_TVRPasscodeField *)passcodeField;
-(void)setHairlineView:(UIView *)arg1 ;
-(UIView *)hairlineView;
-(void)_cancelButton:(id)arg1 ;
-(TVRCPINEntryAttributes *)PINEntryAttributes;
-(void)setPINEntryAttributes:(TVRCPINEntryAttributes *)arg1 ;
-(void)_pinTextDidChange:(id)arg1 ;
-(void)_passcodeFieldTapped;
-(UIView *)blendModeView;
-(void)setBlendModeView:(UIView *)arg1 ;
@end

