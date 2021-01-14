/*
* Generated on Thursday, January 14, 2021 at 2:24:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

@class HKDisplayTypeController, HKUnitPreferenceController;


@protocol HKDataMetadataDetailSectionDataReceiver <HKDataMetadataSectionDataReceiver>
@property (nonatomic,readonly) HKDisplayTypeController * displayTypeController; 
@property (nonatomic,readonly) HKUnitPreferenceController * unitController; 
@required
-(HKUnitPreferenceController *)unitController;
-(HKDisplayTypeController *)displayTypeController;

@end

