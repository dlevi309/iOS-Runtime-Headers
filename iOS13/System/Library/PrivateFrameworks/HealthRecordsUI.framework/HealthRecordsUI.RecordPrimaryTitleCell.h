/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithCoder:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UILabel *)recordTitleLabel;
-(UILabel *)recordDateLabel;
@end

