/*
* Generated on Thursday, January 14, 2021 at 2:24:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
*/

#import <UIKitCore/UITableViewCell.h>

@class UILabel;

@interface HealthRecordsUI.RecordPrimaryTitleCell : UITableViewCell {

	 recordTitleLabel;
	 recordDateLabel;

}

@property (readonly,nonatomic) UILabel * recordTitleLabel; 
@property (readonly,nonatomic) UILabel * recordDateLabel; 
+(id)reuseIdentifier;
-(UILabel *)recordTitleLabel;
-(UILabel *)recordDateLabel;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

