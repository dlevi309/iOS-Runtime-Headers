/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUButtonCell.h>

@class UIActivityIndicatorView;

@interface HUSpinnerButtonCell : HUButtonCell {

	BOOL _showSpinner;
	BOOL _useFullWidthSeparator;
	UIActivityIndicatorView* _spinner;

}

@property (nonatomic,retain) UIActivityIndicatorView * spinner;              //@synthesize spinner=_spinner - In the implementation block
@property (assign,nonatomic) BOOL showSpinner;                               //@synthesize showSpinner=_showSpinner - In the implementation block
@property (assign,nonatomic) BOOL useFullWidthSeparator;                     //@synthesize useFullWidthSeparator=_useFullWidthSeparator - In the implementation block
-(CGRect)_separatorFrame;
-(UIActivityIndicatorView *)spinner;
-(void)prepareForReuse;
-(void)setShowSpinner:(BOOL)arg1 ;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
-(BOOL)showSpinner;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setUseFullWidthSeparator:(BOOL)arg1 ;
-(void)createSpinner;
-(BOOL)useFullWidthSeparator;
@end

