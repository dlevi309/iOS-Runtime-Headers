/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
*/

#import <HeartRhythmUI/HRFeatureRegulatoryPanelViewController.h>

@class NSArray;

@interface HRElectrocardiogramRegulatoryPanelViewController : HRFeatureRegulatoryPanelViewController {

	NSArray* _displayableItems;
	long long _reenableFeatureSection;

}

@property (assign,nonatomic) long long reenableFeatureSection;              //@synthesize reenableFeatureSection=_reenableFeatureSection - In the implementation block
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)viewDidLoad;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(id)displayableItems;
-(void)receivedHeartRhythmAvailabilityNotification;
-(id)_displayableItemsForFeatureName;
-(id)_displayableItemsForPhone;
-(BOOL)_shouldDisplayItemsForWatch;
-(id)_displayableItemsForWatch;
-(id)_displayableItemsForInstructionManual;
-(void)setReenableFeatureSection:(long long)arg1 ;
-(id)_displayableItemsForReenableFeature;
-(id)_displayableItemsForContactSupport;
-(long long)reenableFeatureSection;
@end

