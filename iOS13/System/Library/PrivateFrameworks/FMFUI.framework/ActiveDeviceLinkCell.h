/*
* Generated on Monday, March 1, 2021 at 2:34:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FMFUI.framework/FMFUI
*/

#import <Preferences/PSTableCell.h>

@class UILabel, NSLayoutConstraint;

@interface ActiveDeviceLinkCell : PSTableCell {

	UILabel* _fromLabel;
	UILabel* _deviceNameLabel;
	UILabel* _detailsLabel;
	NSLayoutConstraint* _detailsHeightContraint;
	NSLayoutConstraint* _fromLabelLeadingConstraint;

}

@property (nonatomic,retain) UILabel * fromLabel;                                          //@synthesize fromLabel=_fromLabel - In the implementation block
@property (nonatomic,retain) UILabel * deviceNameLabel;                                    //@synthesize deviceNameLabel=_deviceNameLabel - In the implementation block
@property (nonatomic,retain) UILabel * detailsLabel;                                       //@synthesize detailsLabel=_detailsLabel - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * detailsHeightContraint;                  //@synthesize detailsHeightContraint=_detailsHeightContraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * fromLabelLeadingConstraint;              //@synthesize fromLabelLeadingConstraint=_fromLabelLeadingConstraint - In the implementation block
+(long long)cellStyle;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(void)setupConstraints;
-(void)setupSubviews;
-(UILabel *)fromLabel;
-(void)setFromLabel:(UILabel *)arg1 ;
-(UILabel *)detailsLabel;
-(UILabel *)deviceNameLabel;
-(void)setDeviceNameLabel:(UILabel *)arg1 ;
-(void)setDetailsLabel:(UILabel *)arg1 ;
-(NSLayoutConstraint *)detailsHeightContraint;
-(void)setFromLabelLeadingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setDetailsHeightContraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)fromLabelLeadingConstraint;
@end

