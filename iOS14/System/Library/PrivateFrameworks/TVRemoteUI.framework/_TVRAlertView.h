/*
* Generated on Thursday, January 14, 2021 at 2:28:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UILabel *)titleLabel;
-(BOOL)resignFirstResponder;
-(_TVRMAlertButton *)cancelButton;
-(BOOL)becomeFirstResponder;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(UIVisualEffectView *)effectView;
-(void)setCancelButton:(_TVRMAlertButton *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<_TVRAlertViewDelegate>)delegate;
-(void)setPasscodeField:(_TVRPasscodeField *)arg1 ;
-(_TVRPasscodeField *)passcodeField;
-(void)setTitle:(NSString *)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(void)setDelegate:(id<_TVRAlertViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)setHairlineView:(UIView *)arg1 ;
-(UIView *)hairlineView;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)text;
-(void)setEffectView:(UIVisualEffectView *)arg1 ;
-(NSString *)title;
-(TVRCPINEntryAttributes *)PINEntryAttributes;
-(void)setPINEntryAttributes:(TVRCPINEntryAttributes *)arg1 ;
-(void)_cancelButton:(id)arg1 ;
-(void)_pinTextDidChange:(id)arg1 ;
-(void)_passcodeFieldTapped;
-(UIView *)blendModeView;
-(void)setBlendModeView:(UIView *)arg1 ;
@end

