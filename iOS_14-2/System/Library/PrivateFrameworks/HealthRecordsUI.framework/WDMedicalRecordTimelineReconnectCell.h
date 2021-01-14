/*
* Generated on Thursday, January 14, 2021 at 2:24:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
*/

#import <HealthRecordsUI/WDMedicalRecordGroupableCell.h>

@class HKDynamicButton;

@interface WDMedicalRecordTimelineReconnectCell : WDMedicalRecordGroupableCell {

	HKDynamicButton* _reconnectButton;

}

@property (nonatomic,retain) HKDynamicButton * reconnectButton;              //@synthesize reconnectButton=_reconnectButton - In the implementation block
-(void)prepareForReuse;
-(void)_updateForContentSizeCategory:(id)arg1 ;
-(HKDynamicButton *)reconnectButton;
-(void)_updateBasedOnAccessibilityCategory:(BOOL)arg1 ;
-(void)setReconnectButton:(HKDynamicButton *)arg1 ;
-(void)setupSubviews;
-(void)setUpConstraints;
@end

