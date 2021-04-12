/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUTriggerConditionEditorExpandingSectionModule.h>

@class HFItem, HFTransformItem, NSArray;

@interface HUTriggerTimeConditionEditorSectionModule : HUTriggerConditionEditorExpandingSectionModule {

	HFItem* _anyTimeOptionItem;
	HFTransformItem* _onlyDayOptionItem;
	HFTransformItem* _onlyNightOptionItem;
	HFTransformItem* _specificTimesOptionItem;
	HFTransformItem* _customOptionItem;

}

@property (nonatomic,retain) HFItem * anyTimeOptionItem;                             //@synthesize anyTimeOptionItem=_anyTimeOptionItem - In the implementation block
@property (nonatomic,retain) HFTransformItem * onlyDayOptionItem;                    //@synthesize onlyDayOptionItem=_onlyDayOptionItem - In the implementation block
@property (nonatomic,retain) HFTransformItem * onlyNightOptionItem;                  //@synthesize onlyNightOptionItem=_onlyNightOptionItem - In the implementation block
@property (nonatomic,retain) HFTransformItem * specificTimesOptionItem;              //@synthesize specificTimesOptionItem=_specificTimesOptionItem - In the implementation block
@property (nonatomic,retain) HFTransformItem * customOptionItem;                     //@synthesize customOptionItem=_customOptionItem - In the implementation block
@property (nonatomic,readonly) NSArray * optionItems; 
-(id)noConditionSummaryTitle;
-(id)conditionTitle;
-(BOOL)conditionIsDisabled;
-(id)buildConditionOptionItems;
-(id)conditionForOptionItem:(id)arg1 ;
-(id)selectOptionItemForCondition:(id)arg1 ;
-(BOOL)doesOptionItemRequireInitialUserConfiguration:(id)arg1 ;
-(id)preferredConditionFromConditions:(id)arg1 ;
-(HFItem *)anyTimeOptionItem;
-(id)_conditionItemForType:(unsigned long long)arg1 ;
-(void)setAnyTimeOptionItem:(HFItem *)arg1 ;
-(id)_createConditionItemForType:(unsigned long long)arg1 ;
-(void)setOnlyDayOptionItem:(HFTransformItem *)arg1 ;
-(void)setOnlyNightOptionItem:(HFTransformItem *)arg1 ;
-(void)setSpecificTimesOptionItem:(HFTransformItem *)arg1 ;
-(void)setCustomOptionItem:(HFTransformItem *)arg1 ;
-(HFTransformItem *)specificTimesOptionItem;
-(HFTransformItem *)onlyDayOptionItem;
-(HFTransformItem *)onlyNightOptionItem;
-(HFTransformItem *)customOptionItem;
@end

