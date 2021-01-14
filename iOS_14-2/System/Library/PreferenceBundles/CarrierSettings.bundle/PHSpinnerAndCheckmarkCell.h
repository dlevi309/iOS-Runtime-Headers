/*
* Generated on Thursday, January 14, 2021 at 2:27:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PreferenceBundles/CarrierSettings.bundle/CarrierSettings
*/

#import <Preferences/PSTableCell.h>

@class UIActivityIndicatorView;

@interface PHSpinnerAndCheckmarkCell : PSTableCell {

	UIActivityIndicatorView* _spinner;
	unsigned _loading : 1;
	unsigned _rightAlignSpinner : 1;
	int _row;

}
-(void)setLoading:(BOOL)arg1 ;
-(void)setRow:(int)arg1 ;
-(void)setChecked:(BOOL)arg1 ;
-(void)_addSpinner;
-(void)setReallyChecked:(BOOL)arg1 ;
-(void)_removeSpinner;
@end

