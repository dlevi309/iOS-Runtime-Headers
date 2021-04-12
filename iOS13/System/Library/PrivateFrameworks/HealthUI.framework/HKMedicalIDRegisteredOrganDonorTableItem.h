/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id<HKMedicalIDRegisteredOrganDonorTableItemDelegate>)delegate;
-(void)setDelegate:(id<HKMedicalIDRegisteredOrganDonorTableItemDelegate>)arg1 ;
-(id)title;
-(UIEdgeInsets)separatorInset;
-(id)titleForFooter;
-(BOOL)hasPresentableData;
-(id)tableView:(id)arg1 cellForRowAtIndex:(long long)arg2 ;
-(BOOL)shouldHighlightRowAtIndex:(long long)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndex:(long long)arg2 ;
-(BOOL)canEditRowAtIndex:(long long)arg1 ;
-(id)initInEditMode:(BOOL)arg1 organDonationOrganization:(long long)arg2 ;
-(void)presentDonateLifeRegistrationSequence;
-(id)organizationLogo;
-(HKOrganDonationCallToActionTableViewCell *)notRegisteredCell;
-(void)setNotRegisteredCell:(HKOrganDonationCallToActionTableViewCell *)arg1 ;
@end

