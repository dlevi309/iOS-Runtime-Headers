/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItemManager.h>

@class HFStaticItem, HUInstructionsItem;

@interface HUTriggerTypePickerItemManager : HFItemManager {

	HFStaticItem* _leavingLocationTriggerItem;
	HFStaticItem* _arrivingAtLocationTriggerItem;
	HFStaticItem* _timerTriggerItem;
	HFStaticItem* _characteristicTriggerItem;
	HFStaticItem* _alarmTriggerItem;
	HUInstructionsItem* _instructionsItem;

}

@property (nonatomic,retain) HUInstructionsItem * instructionsItem;                     //@synthesize instructionsItem=_instructionsItem - In the implementation block
@property (nonatomic,retain) HFStaticItem * leavingLocationTriggerItem;                 //@synthesize leavingLocationTriggerItem=_leavingLocationTriggerItem - In the implementation block
@property (nonatomic,retain) HFStaticItem * arrivingAtLocationTriggerItem;              //@synthesize arrivingAtLocationTriggerItem=_arrivingAtLocationTriggerItem - In the implementation block
@property (nonatomic,retain) HFStaticItem * timerTriggerItem;                           //@synthesize timerTriggerItem=_timerTriggerItem - In the implementation block
@property (nonatomic,retain) HFStaticItem * characteristicTriggerItem;                  //@synthesize characteristicTriggerItem=_characteristicTriggerItem - In the implementation block
@property (nonatomic,retain) HFStaticItem * alarmTriggerItem;                           //@synthesize alarmTriggerItem=_alarmTriggerItem - In the implementation block
-(id)_identifierForSection:(unsigned long long)arg1 ;
-(/*^block*/id)_comparatorForSectionIdentifier:(id)arg1 ;
-(unsigned long long)_numberOfSections;
-(id)_sectionIdentifierForItem:(id)arg1 ;
-(id)_buildItemProvidersForHome:(id)arg1 ;
-(HUInstructionsItem *)instructionsItem;
-(void)setInstructionsItem:(HUInstructionsItem *)arg1 ;
-(HFStaticItem *)timerTriggerItem;
-(HFStaticItem *)leavingLocationTriggerItem;
-(HFStaticItem *)arrivingAtLocationTriggerItem;
-(HFStaticItem *)characteristicTriggerItem;
-(HFStaticItem *)alarmTriggerItem;
-(id)_createLocationItemForType:(unsigned long long)arg1 ;
-(void)setLeavingLocationTriggerItem:(HFStaticItem *)arg1 ;
-(void)setArrivingAtLocationTriggerItem:(HFStaticItem *)arg1 ;
-(id)_createTimeItem;
-(void)setTimerTriggerItem:(HFStaticItem *)arg1 ;
-(id)_createCharacteristicItemForSource:(unsigned long long)arg1 ;
-(void)setCharacteristicTriggerItem:(HFStaticItem *)arg1 ;
-(void)setAlarmTriggerItem:(HFStaticItem *)arg1 ;
-(BOOL)_hasMinimumRequiredTriggerableServices:(unsigned long long)arg1 ;
-(BOOL)_hasMinimumRequiredTriggeringServices:(long long)arg1 ;
@end

