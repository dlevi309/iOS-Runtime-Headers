/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HKMedicalIDEditorCell.h>

@class _HKEmergencyContact;

@interface HKMedicalIDEditorEmergencyContactCell : HKMedicalIDEditorCell {

	_HKEmergencyContact* _contact;

}

@property (nonatomic,retain) _HKEmergencyContact * contact;              //@synthesize contact=_contact - In the implementation block
-(_HKEmergencyContact *)contact;
-(void)setContact:(_HKEmergencyContact *)arg1 ;
-(id)formattedValue;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)_labelTapped:(id)arg1 ;
@end

