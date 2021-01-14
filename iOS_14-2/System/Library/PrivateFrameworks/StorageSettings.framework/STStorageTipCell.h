/*
* Generated on Thursday, January 14, 2021 at 2:28:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StorageSettings.framework/StorageSettings
*/

#import <Preferences/PSTableCell.h>

@class NSMutableArray, UIImageView, UILabel, UIButton, UIActivityIndicatorView, STStorageProgressView, NSString;

@interface STStorageTipCell : PSTableCell {

	NSMutableArray* _constraints;
	UIImageView* _appIconView;
	UILabel* _titleLabel;
	UIImageView* _checkIconView;
	UIButton* _enableButton;
	UIActivityIndicatorView* _spinner;
	UILabel* _progressLabel;
	STStorageProgressView* _progressView;
	BOOL _isOption;
	float _percent;
	NSString* _hformat;
	NSString* _h2format;
	double _titleWidth;
	double _enableWidth;
	double _progressWidth;
	double _nativeSpinnerWidth;
	float _prevPercent;

}
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(void)updateConstraints;
-(void)_activateOption;
@end

