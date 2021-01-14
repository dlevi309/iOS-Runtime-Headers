/*
* Generated on Thursday, January 14, 2021 at 2:27:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
*/

#import <Preferences/PSTableCell.h>

@class UIActivityIndicatorView, UIImageView;

@interface CNFRegAliasTableCell : PSTableCell {

	BOOL _hasSpinner;
	UIActivityIndicatorView* _spinner;
	UIImageView* _temporaryPhoneGlyph;
	UIImageView* _iconView;

}

@property (nonatomic,retain) UIActivityIndicatorView * spinner;              //@synthesize spinner=_spinner - In the implementation block
@property (nonatomic,retain) UIImageView * temporaryPhoneGlyph;              //@synthesize temporaryPhoneGlyph=_temporaryPhoneGlyph - In the implementation block
@property (nonatomic,retain) UIImageView * iconView;                         //@synthesize iconView=_iconView - In the implementation block
@property (assign,nonatomic) BOOL hasSpinner;                                //@synthesize hasSpinner=_hasSpinner - In the implementation block
-(UIActivityIndicatorView *)spinner;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(void)layoutSubviews;
-(UIImageView *)iconView;
-(void)setIconView:(UIImageView *)arg1 ;
-(void)setChecked:(BOOL)arg1 ;
-(void)_updateIcon;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
-(void)dealloc;
-(BOOL)usesStandardBackgroundImage;
-(void)setHasSpinner:(BOOL)arg1 ;
-(void)setIsTemporaryPhone:(BOOL)arg1 ;
-(UIImageView *)temporaryPhoneGlyph;
-(void)setTemporaryPhoneGlyph:(UIImageView *)arg1 ;
-(BOOL)hasSpinner;
@end

