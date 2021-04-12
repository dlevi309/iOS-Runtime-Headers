/*
* Generated on Monday, March 1, 2021 at 2:34:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
*/

#import <HealthRecordsUI/WDMedicalRecordGroupableCell.h>

@class HKInspectableValueInRange, NSString, HKReferenceRangeView, UILabel;

@interface WDMedicalRecordReferenceRangeViewCell : WDMedicalRecordGroupableCell {

	HKInspectableValueInRange* _valueInRange;
	NSString* _subtitle;
	HKReferenceRangeView* _referenceRangeView;
	UILabel* _subtitleLabel;

}

@property (nonatomic,retain) HKReferenceRangeView * referenceRangeView;              //@synthesize referenceRangeView=_referenceRangeView - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                                //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) HKInspectableValueInRange * valueInRange;               //@synthesize valueInRange=_valueInRange - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                                      //@synthesize subtitle=_subtitle - In the implementation block
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(UILabel *)subtitleLabel;
-(void)setupSubviews;
-(void)setValueInRange:(HKInspectableValueInRange *)arg1 ;
-(void)setReferenceRangeView:(HKReferenceRangeView *)arg1 ;
-(HKReferenceRangeView *)referenceRangeView;
-(HKInspectableValueInRange *)valueInRange;
@end

