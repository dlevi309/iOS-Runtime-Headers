/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItemModule.h>
#import <libobjc.A.dylib/HUCameraSettingsModule.h>

@class NSSet, HFConditionCollection, HFStaticItem, HFItemProvider, HFCameraSmartDetectionCondition, NSString, UIViewController;

@interface HUCameraSmartDetectionSettingsModule : HFItemModule <HUCameraSettingsModule> {

	NSSet* _itemProviders;
	NSSet* _cameraProfiles;
	HFConditionCollection* _conditionCollection;
	HFStaticItem* _anyMotionDetectedItem;
	HFStaticItem* _specificMotionDetectedItem;
	HFItemProvider* _motionDetectionSettingsItemProvider;
	HFItemProvider* _motionDetectionOffOnItemProvider;
	unsigned long long _settingsContext;
	HFCameraSmartDetectionCondition* _condition;

}

@property (nonatomic,readonly) HFItemProvider * motionDetectionSettingsItemProvider;              //@synthesize motionDetectionSettingsItemProvider=_motionDetectionSettingsItemProvider - In the implementation block
@property (nonatomic,readonly) HFItemProvider * motionDetectionOffOnItemProvider;                 //@synthesize motionDetectionOffOnItemProvider=_motionDetectionOffOnItemProvider - In the implementation block
@property (nonatomic,readonly) unsigned long long settingsContext;                                //@synthesize settingsContext=_settingsContext - In the implementation block
@property (nonatomic,retain) HFCameraSmartDetectionCondition * condition;                         //@synthesize condition=_condition - In the implementation block
@property (nonatomic,retain) HFStaticItem * anyMotionDetectedItem;                                //@synthesize anyMotionDetectedItem=_anyMotionDetectedItem - In the implementation block
@property (nonatomic,retain) HFStaticItem * specificMotionDetectedItem;                           //@synthesize specificMotionDetectedItem=_specificMotionDetectedItem - In the implementation block
@property (nonatomic,readonly) NSSet * cameraProfiles;                                            //@synthesize cameraProfiles=_cameraProfiles - In the implementation block
@property (nonatomic,readonly) HFConditionCollection * conditionCollection;                       //@synthesize conditionCollection=_conditionCollection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long displayStyle; 
@property (nonatomic,retain) UIViewController * presentingViewController; 
-(HFCameraSmartDetectionCondition *)condition;
-(id)itemProviders;
-(void)setCondition:(HFCameraSmartDetectionCondition *)arg1 ;
-(unsigned long long)settingsContext;
-(NSSet *)cameraProfiles;
-(id)initWithItemUpdater:(id)arg1 ;
-(id)buildSectionsWithDisplayedItems:(id)arg1 ;
-(HFConditionCollection *)conditionCollection;
-(id)didSelectItem:(id)arg1 ;
-(BOOL)isItemHeader:(id)arg1 ;
-(id)initWithItemUpdater:(id)arg1 cameraProfiles:(id)arg2 conditionCollection:(id)arg3 settingsContext:(unsigned long long)arg4 ;
-(HFStaticItem *)specificMotionDetectedItem;
-(id)updateMotionDetectionSettingForItem:(id)arg1 ;
-(HFStaticItem *)anyMotionDetectedItem;
-(void)_dispatchUpdateForCameraProfile:(id)arg1 ;
-(id)_preferredConditionFromConditions:(id)arg1 ;
-(HFItemProvider *)motionDetectionOffOnItemProvider;
-(id)enableSmartMotion:(BOOL)arg1 forItem:(id)arg2 ;
-(id)updateMotionDetectionSetting:(unsigned long long)arg1 ;
-(HFItemProvider *)motionDetectionSettingsItemProvider;
-(void)setAnyMotionDetectedItem:(HFStaticItem *)arg1 ;
-(void)setSpecificMotionDetectedItem:(HFStaticItem *)arg1 ;
@end

