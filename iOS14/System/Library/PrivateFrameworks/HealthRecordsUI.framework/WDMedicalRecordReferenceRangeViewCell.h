/*
* Generated on Thursday, January 14, 2021 at 2:24:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(NSString *)subtitle;
-(void)setValueInRange:(HKInspectableValueInRange *)arg1 ;
-(UILabel *)subtitleLabel;
-(void)setupSubviews;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)setReferenceRangeView:(HKReferenceRangeView *)arg1 ;
-(HKReferenceRangeView *)referenceRangeView;
-(HKInspectableValueInRange *)valueInRange;
@end

