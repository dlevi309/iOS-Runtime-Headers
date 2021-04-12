/*
* Generated on Thursday, January 14, 2021 at 2:24:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItemModule.h>
#import <libobjc.A.dylib/HUCameraSettingsModule.h>

@class NSSet, HFConditionCollection, HFStaticItem, HFItemProvider, HFCameraSmartDetectionCondition, UIViewController, NSString;

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
@property (nonatomic,readonly) unsigned long long displayStyle; 
@property (nonatomic,retain) UIViewController * presentingViewController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCondition:(HFCameraSmartDetectionCondition *)arg1 ;
-(id)didSelectItem:(id)arg1 ;
-(HFCameraSmartDetectionCondition *)condition;
-(id)itemProviders;
-(HFConditionCollection *)conditionCollection;
-(NSSet *)cameraProfiles;
-(id)initWithItemUpdater:(id)arg1 ;
-(id)buildSectionsWithDisplayedItems:(id)arg1 ;
-(BOOL)isItemHeader:(id)arg1 ;
-(id)initWithItemUpdater:(id)arg1 cameraProfiles:(id)arg2 conditionCollection:(id)arg3 settingsContext:(unsigned long long)arg4 ;
-(HFStaticItem *)specificMotionDetectedItem;
-(id)updateMotionDetectionSettingForItem:(id)arg1 ;
-(unsigned long long)settingsContext;
-(HFStaticItem *)anyMotionDetectedItem;
-(id)updateSignificantEventConfiguration:(id)arg1 ;
-(HFItemProvider *)motionDetectionSettingsItemProvider;
-(HFItemProvider *)motionDetectionOffOnItemProvider;
-(id)enableSmartMotion:(BOOL)arg1 forItem:(id)arg2 ;
-(void)setAnyMotionDetectedItem:(HFStaticItem *)arg1 ;
-(void)setSpecificMotionDetectedItem:(HFStaticItem *)arg1 ;
@end

