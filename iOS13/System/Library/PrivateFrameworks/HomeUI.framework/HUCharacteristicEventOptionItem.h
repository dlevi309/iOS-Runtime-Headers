/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItem.h>

@protocol NSCopying;
@class NSSet, HMNumberRange, NSNumber, HMCharacteristic, NSArray;

@interface HUCharacteristicEventOptionItem : HFItem {

	NSSet* _characteristics;
	id<NSCopying> _triggerValue;
	HMNumberRange* _triggerValueRange;
	HMNumberRange* _thresholdValueRange;
	HUCharacteristicEventOptionItem* _childItem;
	NSNumber* _thresholdValue;

}

@property (nonatomic,readonly) NSSet * characteristics;                                                //@synthesize characteristics=_characteristics - In the implementation block
@property (nonatomic,copy,readonly) HMCharacteristic * mainCharacteristic; 
@property (nonatomic,copy,readonly) id<NSCopying> triggerValue;                                        //@synthesize triggerValue=_triggerValue - In the implementation block
@property (nonatomic,copy,readonly) HMNumberRange * triggerValueRange;                                 //@synthesize triggerValueRange=_triggerValueRange - In the implementation block
@property (nonatomic,copy,readonly) HMNumberRange * thresholdValueRange;                               //@synthesize thresholdValueRange=_thresholdValueRange - In the implementation block
@property (nonatomic,retain) HUCharacteristicEventOptionItem * childItem;                              //@synthesize childItem=_childItem - In the implementation block
@property (nonatomic,retain) NSNumber * thresholdValue;                                                //@synthesize thresholdValue=_thresholdValue - In the implementation block
@property (nonatomic,copy,readonly) HMNumberRange * triggerValueRangeByApplyingThreshold; 
@property (nonatomic,copy,readonly) NSArray * validTriggerValues; 
@property (nonatomic,readonly) id representativeTriggerValue; 
-(id)init;
-(NSSet *)characteristics;
-(NSNumber *)thresholdValue;
-(id<NSCopying>)triggerValue;
-(void)setThresholdValue:(NSNumber *)arg1 ;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(HUCharacteristicEventOptionItem *)childItem;
-(HMCharacteristic *)mainCharacteristic;
-(HMNumberRange *)thresholdValueRange;
-(id)representativeTriggerValue;
-(HMNumberRange *)triggerValueRange;
-(id)initWithCharacteristics:(id)arg1 triggerValue:(id)arg2 ;
-(id)initWithCharacteristics:(id)arg1 triggerValueRange:(id)arg2 ;
-(id)initWithCharacteristics:(id)arg1 thresholdValueRange:(id)arg2 ;
-(NSArray *)validTriggerValues;
-(HMNumberRange *)triggerValueRangeByApplyingThreshold;
-(BOOL)isValidThresholdValue:(id)arg1 ;
-(id)localizedDescriptionForThresholdValue:(id)arg1 ;
-(void)setChildItem:(HUCharacteristicEventOptionItem *)arg1 ;
@end

