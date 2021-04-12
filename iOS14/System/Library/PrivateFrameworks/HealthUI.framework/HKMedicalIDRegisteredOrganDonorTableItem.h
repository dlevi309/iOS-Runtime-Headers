/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <HealthUI/HKEmergencyCardTableItem.h>

@protocol HKMedicalIDRegisteredOrganDonorTableItemDelegate;
@class HKOrganDonationCallToActionTableViewCell;

@interface HKMedicalIDRegisteredOrganDonorTableItem : HKEmergencyCardTableItem {

	long long _organization;
	id<HKMedicalIDRegisteredOrganDonorTableItemDelegate> _delegate;
	HKOrganDonationCallToActionTableViewCell* _notRegisteredCell;

}

@property (nonatomic,retain) HKOrganDonationCallToActionTableViewCell * notRegisteredCell;                      //@synthesize notRegisteredCell=_notRegisteredCell - In the implementation block
@property (assign,nonatomic,__weak) id<HKMedicalIDRegisteredOrganDonorTableItemDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(UIEdgeInsets)separatorInset;
-(id<HKMedicalIDRegisteredOrganDonorTableItemDelegate>)delegate;
-(id)titleForFooter;
-(void)setDelegate:(id<HKMedicalIDRegisteredOrganDonorTableItemDelegate>)arg1 ;
-(id)title;
-(BOOL)hasPresentableData;
-(id)tableView:(id)arg1 cellForRowAtIndex:(long long)arg2 ;
-(BOOL)shouldHighlightRowAtIndex:(long long)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndex:(long long)arg2 ;
-(BOOL)canEditRowAtIndex:(long long)arg1 ;
-(void)presentDonateLifeRegistrationSequence;
-(id)initInEditMode:(BOOL)arg1 organDonationOrganization:(long long)arg2 ;
-(id)organizationLogo;
-(HKOrganDonationCallToActionTableViewCell *)notRegisteredCell;
-(void)setNotRegisteredCell:(HKOrganDonationCallToActionTableViewCell *)arg1 ;
@end

