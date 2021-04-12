/*
* Generated on Thursday, January 14, 2021 at 2:24:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
*/

#import <UIKitCore/UITableViewCell.h>

@class HKInspectableValueInRange;

@interface HealthRecordsUI.RecordReferenceRangeCell : UITableViewCell {

	 referenceRangeView;
	 valueInRange;

}

@property (retain,nonatomic) HKInspectableValueInRange * valueInRange; 
+(id)reuseIdentifier;
-(void)setValueInRange:(HKInspectableValueInRange *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(HKInspectableValueInRange *)valueInRange;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

