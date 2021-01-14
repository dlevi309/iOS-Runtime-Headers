/*
* Generated on Thursday, January 14, 2021 at 2:27:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LegacyGameKit.framework/LegacyGameKit
*/

#import <UIKitCore/UIView.h>

@class UILabel, UIImageView, UIButton, UITableView, NSArray, UIActivityIndicatorView, NSString, UIImage, UIFont;

@interface GKContentView : UIView {

	UILabel* _titleLabel;
	UILabel* _messageLabel;
	UIImageView* _iconView;
	UIButton* _cancelButton;
	UIButton* _otherButton;
	UITableView* _table;
	UIImageView* _tableWellView;
	NSArray* _connectionButtons;
	UIActivityIndicatorView* _activityIndicator;
	BOOL _needsLayout;

}

@property (nonatomic,retain) UILabel * titleLabel;                                     //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * messageLabel;                                   //@synthesize messageLabel=_messageLabel - In the implementation block
@property (nonatomic,retain) UIImageView * iconView;                                   //@synthesize iconView=_iconView - In the implementation block
@property (assign,nonatomic) NSString * title; 
@property (assign,nonatomic) NSString * message; 
@property (assign,nonatomic) UIImage * icon; 
@property (nonatomic,retain) UIButton * cancelButton;                                  //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,retain) UIButton * otherButton;                                   //@synthesize otherButton=_otherButton - In the implementation block
@property (nonatomic,retain,readonly) NSArray * connectionButtons;                     //@synthesize connectionButtons=_connectionButtons - In the implementation block
@property (nonatomic,retain,readonly) UITableView * table; 
@property (assign,nonatomic) long long numberOfTitleLines; 
@property (assign,nonatomic) long long numberOfMessageLines; 
@property (nonatomic,readonly) UIFont * titleFont; 
@property (nonatomic,readonly) UIFont * messageFont; 
@property (nonatomic,retain) UIActivityIndicatorView * activityIndicator;              //@synthesize activityIndicator=_activityIndicator - In the implementation block
+(double)maxTextWidth;
-(UILabel *)titleLabel;
-(void)setMessage:(NSString *)arg1 ;
-(UIActivityIndicatorView *)activityIndicator;
-(UITableView *)table;
-(UIButton *)cancelButton;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setCancelButton:(UIButton *)arg1 ;
-(NSString *)message;
-(void)setNumberOfTitleLines:(long long)arg1 ;
-(void)showActivityIndicator:(BOOL)arg1 ;
-(UIImage *)icon;
-(void)setTitle:(NSString *)arg1 ;
-(void)setMessageLabel:(UILabel *)arg1 ;
-(void)setIcon:(UIImage *)arg1 ;
-(UIFont *)titleFont;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(void)layoutIfNeeded;
-(UILabel *)messageLabel;
-(long long)numberOfTitleLines;
-(UIImageView *)iconView;
-(void)setIconView:(UIImageView *)arg1 ;
-(NSString *)title;
-(void)dealloc;
-(void)layout;
-(void)setOtherButton:(UIButton *)arg1 ;
-(UIButton *)otherButton;
-(UIFont *)messageFont;
-(void)_createCancelButtonWithTitle:(id)arg1 ;
-(void)_createOtherButtonWithTitle:(id)arg1 ;
-(id)_createConnectionButtonWithType:(unsigned long long)arg1 ;
-(void)_createTitleLabelIfNeeded;
-(void)_createMessageLabelIfNeeded;
-(id)_createButton:(BOOL)arg1 ;
-(id)initWithTitle:(id)arg1 message:(id)arg2 icon:(id)arg3 cancelButtonTitle:(id)arg4 otherButtonTitle:(id)arg5 ;
-(void)setConnectionButtonTypes:(unsigned long long)arg1 ;
-(long long)numberOfMessageLines;
-(void)setNumberOfMessageLines:(long long)arg1 ;
-(NSArray *)connectionButtons;
@end

