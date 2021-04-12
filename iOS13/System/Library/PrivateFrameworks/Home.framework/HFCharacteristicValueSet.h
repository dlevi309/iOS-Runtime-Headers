/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/


@class NSMutableSet, NSMutableDictionary, NSSet;

@interface HFCharacteristicValueSet : NSObject {

	NSMutableSet* _allCharacteristics;
	NSMutableDictionary* _valuesByCharacteristicUUID;

}

@property (nonatomic,readonly) NSSet * allCharacteristics;              //@synthesize allCharacteristics=_allCharacteristics - In the implementation block
-(id)init;
-(NSSet *)allCharacteristics;
-(void)setValue:(id)arg1 forCharacteristic:(id)arg2 ;
-(id)valueForCharacteristic:(id)arg1 ;
-(void)removeValueForCharacteristic:(id)arg1 ;
@end

