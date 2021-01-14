/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUTriggerConditionEditorExpandingSectionModule.h>
#import <libobjc.A.dylib/HFLocationManagerObserver.h>

@class HFItem, HFTransformItem, NSString;

@interface HUTriggerLocationConditionEditorSectionModule : HUTriggerConditionEditorExpandingSectionModule <HFLocationManagerObserver> {

	HFItem* _anyLocationOptionItem;
	HFTransformItem* _anyUserAtHomeOptionItem;
	HFTransformItem* _currentUserAtHomeOptionItem;
	HFTransformItem* _noUserAtHomeOptionItem;
	HFTransformItem* _currentUserNotAtHomeOptionItem;
	HFTransformItem* _customOptionItem;

}

@property (nonatomic,retain) HFItem * anyLocationOptionItem;                                //@synthesize anyLocationOptionItem=_anyLocationOptionItem - In the implementation block
@property (nonatomic,retain) HFTransformItem * anyUserAtHomeOptionItem;                     //@synthesize anyUserAtHomeOptionItem=_anyUserAtHomeOptionItem - In the implementation block
@property (nonatomic,retain) HFTransformItem * currentUserAtHomeOptionItem;                 //@synthesize currentUserAtHomeOptionItem=_currentUserAtHomeOptionItem - In the implementation block
@property (nonatomic,retain) HFTransformItem * noUserAtHomeOptionItem;                      //@synthesize noUserAtHomeOptionItem=_noUserAtHomeOptionItem - In the implementation block
@property (nonatomic,retain) HFTransformItem * currentUserNotAtHomeOptionItem;              //@synthesize currentUserNotAtHomeOptionItem=_currentUserNotAtHomeOptionItem - In the implementation block
@property (nonatomic,retain) HFTransformItem * customOptionItem;                            //@synthesize customOptionItem=_customOptionItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)conditionTitle;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(id)initWithItemUpdater:(id)arg1 conditionType:(unsigned long long)arg2 home:(id)arg3 ;
-(id)noConditionSummaryTitle;
-(BOOL)conditionIsDisabled;
-(id)buildConditionOptionItems;
-(id)conditionForOptionItem:(id)arg1 ;
-(id)selectOptionItemForCondition:(id)arg1 ;
-(id)preferredConditionFromConditions:(id)arg1 ;
-(void)setCustomOptionItem:(HFTransformItem *)arg1 ;
-(HFTransformItem *)customOptionItem;
-(HFItem *)anyLocationOptionItem;
-(id)_conditionItemForPresenceEvent:(id)arg1 ;
-(void)setAnyLocationOptionItem:(HFItem *)arg1 ;
-(id)_createConditionItemForPresenceEventType:(unsigned long long)arg1 userType:(unsigned long long)arg2 ;
-(void)setAnyUserAtHomeOptionItem:(HFTransformItem *)arg1 ;
-(void)setCurrentUserAtHomeOptionItem:(HFTransformItem *)arg1 ;
-(void)setNoUserAtHomeOptionItem:(HFTransformItem *)arg1 ;
-(void)setCurrentUserNotAtHomeOptionItem:(HFTransformItem *)arg1 ;
-(HFTransformItem *)anyUserAtHomeOptionItem;
-(HFTransformItem *)noUserAtHomeOptionItem;
-(HFTransformItem *)currentUserAtHomeOptionItem;
-(HFTransformItem *)currentUserNotAtHomeOptionItem;
@end

