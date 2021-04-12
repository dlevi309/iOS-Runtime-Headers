/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
*/

#import <Preferences/PSTableCell.h>

@class UIActivityIndicatorView;

@interface CNFRegAliasTableCell : PSTableCell {

	BOOL _hasSpinner;
	UIActivityIndicatorView* _spinner;

}

@property (nonatomic,retain) UIActivityIndicatorView * spinner;              //@synthesize spinner=_spinner - In the implementation block
@property (assign,nonatomic) BOOL hasSpinner;                                //@synthesize hasSpinner=_hasSpinner - In the implementation block
-(void)dealloc;
-(void)layoutSubviews;
-(void)setChecked:(BOOL)arg1 ;
-(UIActivityIndicatorView *)spinner;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(BOOL)usesStandardBackgroundImage;
-(void)_updateIcon;
-(void)setHasSpinner:(BOOL)arg1 ;
-(BOOL)hasSpinner;
@end

