/*
* Generated on Monday, March 1, 2021 at 2:34:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
*/

#import <Preferences/PSListController.h>

@interface PSUICarrierSpaceUsageController : PSListController
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)specifiers;
-(BOOL)shouldReloadSpecifiersOnResume;
-(void)simStatusChanged;
-(void)carrierSpaceChanged;
-(id)usageSections;
-(id)usageCategories;
-(BOOL)hasMultipleDevicesOfTheSameType;
-(BOOL)hasMultiplePlansOfTheSameTypeInTheSameSectionCategory;
-(BOOL)shouldShowPlanSection:(id)arg1 ;
-(BOOL)hasMultiplePlansOfSameTypeForNetworkUsageLabel:(id)arg1 ;
-(id)deviceTypeSectionLabelForAccountMetrics:(id)arg1 ;
-(id)planCategorySectionLabelForPlanMetrics:(id)arg1 ;
-(BOOL)shouldShowData:(id)arg1 ;
-(id)usageGraphSpecifierForSection:(id)arg1 ;
-(BOOL)shouldShowOnlyRemainingData:(id)arg1 ;
-(id)dataUsageDescription:(id)arg1 ;
-(BOOL)shouldShowCalls:(id)arg1 ;
-(BOOL)shouldShowOnlyRemainingCalls:(id)arg1 ;
-(id)callsDescription:(id)arg1 ;
-(BOOL)shouldShowMessages:(id)arg1 ;
-(BOOL)shouldShowOnlyRemainingMessages:(id)arg1 ;
-(id)messagesDescription:(id)arg1 ;
-(BOOL)shouldShowRemainingCredit:(id)arg1 ;
-(id)remainingCreditDescription:(id)arg1 ;
-(id)barGraphColors;
@end

