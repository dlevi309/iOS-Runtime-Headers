/*
* Generated on Monday, March 1, 2021 at 2:34:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
*/

#import <HealthRecordsUI/WDMedicalRecordGroupableCell.h>

@class HKDynamicButton;

@interface WDMedicalRecordTimelineReconnectCell : WDMedicalRecordGroupableCell {

	HKDynamicButton* _reconnectButton;

}

@property (nonatomic,retain) HKDynamicButton * reconnectButton;              //@synthesize reconnectButton=_reconnectButton - In the implementation block
-(void)prepareForReuse;
-(void)setupSubviews;
-(void)setUpConstraints;
-(void)_updateForContentSizeCategory:(id)arg1 ;
-(HKDynamicButton *)reconnectButton;
-(void)_updateBasedOnAccessibilityCategory:(BOOL)arg1 ;
-(void)setReconnectButton:(HKDynamicButton *)arg1 ;
@end

