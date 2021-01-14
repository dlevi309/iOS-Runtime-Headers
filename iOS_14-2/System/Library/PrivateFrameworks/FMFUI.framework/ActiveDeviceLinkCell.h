/*
* Generated on Thursday, January 14, 2021 at 2:25:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FMFUI.framework/FMFUI
*/

#import <Preferences/PSTableCell.h>

@class UILabel, NSLayoutConstraint;

@interface ActiveDeviceLinkCell : PSTableCell {

	UILabel* _fromLabel;
	UILabel* _deviceNameLabel;
	UILabel* _detailsLabel;
	NSLayoutConstraint* _detailsHeightContraint;

}

@property (nonatomic,retain) UILabel * fromLabel;                                      //@synthesize fromLabel=_fromLabel - In the implementation block
@property (nonatomic,retain) UILabel * deviceNameLabel;                                //@synthesize deviceNameLabel=_deviceNameLabel - In the implementation block
@property (nonatomic,retain) UILabel * detailsLabel;                                   //@synthesize detailsLabel=_detailsLabel - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * detailsHeightContraint;              //@synthesize detailsHeightContraint=_detailsHeightContraint - In the implementation block
+(long long)cellStyle;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(UILabel *)detailsLabel;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(void)setupSubviews;
-(void)layoutSubviews;
-(UILabel *)fromLabel;
-(void)setupConstraints;
-(void)setFromLabel:(UILabel *)arg1 ;
-(void)setDetailsLabel:(UILabel *)arg1 ;
-(UILabel *)deviceNameLabel;
-(NSLayoutConstraint *)detailsHeightContraint;
-(void)setDeviceNameLabel:(UILabel *)arg1 ;
-(void)setDetailsHeightContraint:(NSLayoutConstraint *)arg1 ;
@end

