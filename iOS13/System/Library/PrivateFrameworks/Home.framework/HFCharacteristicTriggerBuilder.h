/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/HFTriggerBuilder.h>

@class NSMutableSet, NSSet;

@interface HFCharacteristicTriggerBuilder : HFTriggerBuilder {

	BOOL _markTriggerAsHomeAppCreated;
	NSMutableSet* _triggerEvents;

}

@property (nonatomic,retain) NSMutableSet * triggerEvents;                  //@synthesize triggerEvents=_triggerEvents - In the implementation block
@property (nonatomic,readonly) NSSet * characteristics; 
@property (assign,nonatomic) BOOL markTriggerAsHomeAppCreated;              //@synthesize markTriggerAsHomeAppCreated=_markTriggerAsHomeAppCreated - In the implementation block
-(NSSet *)characteristics;
-(id)initWithExistingObject:(id)arg1 inHome:(id)arg2 context:(id)arg3 ;
-(void)setTriggerEvents:(NSMutableSet *)arg1 ;
-(id)_performValidation;
-(NSMutableSet *)triggerEvents;
-(id)_updateEvents;
-(id)_lazilyMarkTriggerAsHomeAppCreated;
-(id)commitItem;
-(void)removeCharacteristic:(id)arg1 ;
-(id)_allTriggerValuesForCharacteristic:(id)arg1 similarToValue:(id)arg2 ;
-(id)_existingEventsForCharacteristic:(id)arg1 ;
-(BOOL)markTriggerAsHomeAppCreated;
-(BOOL)supportsConditions;
-(BOOL)supportsEndEvents;
-(id)commitCreateTrigger;
-(id)commitEditTrigger;
-(id)naturalLanguageNameOfType:(unsigned long long)arg1 ;
-(id)deleteTrigger;
-(void)setCharacteristic:(id)arg1 triggerValue:(id)arg2 ;
-(void)setCharacteristic:(id)arg1 triggerValueRange:(id)arg2 ;
-(void)removeAllCharacteristics;
-(BOOL)wouldFireForCharacteristic:(id)arg1 value:(id)arg2 ;
-(id)thresholdValueForCharacteristic:(id)arg1 thresholdValueRange:(id)arg2 ;
-(void)setMarkTriggerAsHomeAppCreated:(BOOL)arg1 ;
@end

