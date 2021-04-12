/*
* Generated on Thursday, January 14, 2021 at 2:28:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SensorKitUI.framework/SensorKitUI
*/

#import <UIKitCore/UITableViewCell.h>

@class UILabel;

@interface SRDetailedTableCell : UITableViewCell {

	UILabel* _titleLabel;
	UILabel* _detailLabel;

}

@property (nonatomic,readonly) UILabel * titleLabel;               //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * detailLabel;              //@synthesize detailLabel=_detailLabel - In the implementation block
-(UILabel *)titleLabel;
-(UILabel *)detailLabel;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)dealloc;
@end

