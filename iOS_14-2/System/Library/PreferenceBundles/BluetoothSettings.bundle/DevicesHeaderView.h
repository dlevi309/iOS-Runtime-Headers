/*
* Generated on Thursday, January 14, 2021 at 2:27:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PreferenceBundles/BluetoothSettings.bundle/BluetoothSettings
*/

#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PSHeaderFooterView.h>

@class UIActivityIndicatorView, UILabel, NSString;

@interface DevicesHeaderView : UIView <PSHeaderFooterView> {

	UIActivityIndicatorView* _spinner;
	UILabel* _text;

}

@property (nonatomic,retain) NSString * name; 
@property (nonatomic,retain) UIActivityIndicatorView * spinner;              //@synthesize spinner=_spinner - In the implementation block
@property (nonatomic,retain) UILabel * text;                                 //@synthesize text=_text - In the implementation block
-(UIActivityIndicatorView *)spinner;
-(void)setText:(UILabel *)arg1 ;
-(id)initWithSpecifier:(id)arg1 ;
-(NSString *)name;
-(void)layoutSubviews;
-(UILabel *)text;
-(void)setName:(NSString *)arg1 ;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
-(double)preferredHeightForWidth:(double)arg1 ;
@end

