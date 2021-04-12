/*
* Generated on Monday, March 1, 2021 at 2:34:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PreferenceBundles/MobilePhoneSettings.bundle/MobilePhoneSettings
*/

#import <Preferences/PSTableCell.h>

@class UIActivityIndicatorView;

@interface PHSpinnerAndCheckmarkCell : PSTableCell {

	UIActivityIndicatorView* _spinner;
	unsigned _loading : 1;
	unsigned _rightAlignSpinner : 1;
	int _row;

}
-(void)setChecked:(BOOL)arg1 ;
-(void)setLoading:(BOOL)arg1 ;
-(void)setRow:(int)arg1 ;
-(void)setReallyChecked:(BOOL)arg1 ;
-(void)_removeSpinner;
-(void)_addSpinner;
@end

