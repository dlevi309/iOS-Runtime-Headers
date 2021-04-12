/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUCharacteristicEventOptionItem.h>

@protocol HFCharacteristicValueSource;
@class HMCharacteristic;

@interface HUProgrammableSwitchEventOptionItem : HUCharacteristicEventOptionItem {

	id<HFCharacteristicValueSource> _valueSource;

}

@property (nonatomic,retain) id<HFCharacteristicValueSource> valueSource;              //@synthesize valueSource=_valueSource - In the implementation block
@property (nonatomic,readonly) HMCharacteristic * characteristic; 
+(id)_buildOutTriggerEditorOptionsForCharacteristic:(id)arg1 triggerValue:(id)arg2 latestResults:(id)arg3 ;
+(id)_shortformTitleForLatestResults:(id)arg1 ;
+(id)_sectionTitleForCharacteristic:(id)arg1 latestResults:(id)arg2 ;
+(id)_triggerBuilderContextAwareTitleForCharacteristic:(id)arg1 latestResults:(id)arg2 ;
+(id)_longformTitleForCharacteristic:(id)arg1 latestResults:(id)arg2 ;
-(HMCharacteristic *)characteristic;
-(id<HFCharacteristicValueSource>)valueSource;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(void)setValueSource:(id<HFCharacteristicValueSource>)arg1 ;
-(id)initWithCharacteristics:(id)arg1 triggerValue:(id)arg2 ;
-(id)initWithCharacteristics:(id)arg1 triggerValueRange:(id)arg2 ;
-(id)initWithCharacteristics:(id)arg1 thresholdValueRange:(id)arg2 ;
-(id)initWithCharacteristic:(id)arg1 triggerValue:(id)arg2 valueSource:(id)arg3 ;
@end

