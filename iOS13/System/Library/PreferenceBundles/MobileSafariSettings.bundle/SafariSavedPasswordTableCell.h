/*
* Generated on Monday, March 1, 2021 at 2:34:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PreferenceBundles/MobileSafariSettings.bundle/MobileSafariSettings
*/

#import <Preferences/PSTableCell.h>

@class UILabel, UIView;

@interface SafariSavedPasswordTableCell : PSTableCell {

	UILabel* _monogramLabel;
	UIView* _monogramBackgroundView;

}
+(long long)cellStyle;
+(void)setSearchPattern:(id)arg1 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(id)_savedPassword;
-(void)showPlaceholderImageForDomain:(id)arg1 backgroundColor:(id)arg2 ;
-(void)safari_copyUserName:(id)arg1 ;
-(void)safari_copyPassword:(id)arg1 ;
-(id)_warningImage;
-(void)setPasswordIcon:(id)arg1 ;
@end

