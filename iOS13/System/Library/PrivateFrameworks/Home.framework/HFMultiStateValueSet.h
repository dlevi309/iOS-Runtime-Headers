/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/Home-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class HMCharacteristicMetadata, NSMutableDictionary, NSSet, NSArray;

@interface HFMultiStateValueSet : NSObject <NSCopying, NSFastEnumeration> {

	HMCharacteristicMetadata* _characteristicMetadata;
	/*^block*/id _valueComparator;
	NSMutableDictionary* _displayResultsByValue;

}

@property (nonatomic,readonly) NSMutableDictionary * displayResultsByValue;                    //@synthesize displayResultsByValue=_displayResultsByValue - In the implementation block
@property (nonatomic,readonly) HMCharacteristicMetadata * characteristicMetadata;              //@synthesize characteristicMetadata=_characteristicMetadata - In the implementation block
@property (nonatomic,readonly) NSSet * allValues; 
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,copy) id valueComparator;                                                 //@synthesize valueComparator=_valueComparator - In the implementation block
@property (nonatomic,readonly) NSArray * sortedValues; 
+(id)binaryValueSetWithCharacteristicMetadata:(id)arg1 firstValue:(id)arg2 firstTitle:(id)arg3 secondValue:(id)arg4 secondTitle:(id)arg5 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)count;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_HF2*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(NSSet *)allValues;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)minusSet:(id)arg1 ;
-(void)removeValue:(id)arg1 ;
-(HMCharacteristicMetadata *)characteristicMetadata;
-(id)initWithCharacteristicMetadata:(id)arg1 ;
-(BOOL)addValue:(id)arg1 displayResults:(id)arg2 ;
-(void)setValueComparator:(id)arg1 ;
-(NSArray *)sortedValues;
-(NSMutableDictionary *)displayResultsByValue;
-(id)valueComparator;
-(id)displayResultsForValue:(id)arg1 ;
-(BOOL)addValue:(id)arg1 displayResults:(id)arg2 addOnlyIfValid:(BOOL)arg3 ;
-(void)removeValuesFromArray:(id)arg1 ;
-(void)addValuesFromArray:(id)arg1 displayResultsGenerator:(/*^block*/id)arg2 ;
-(void)unionSet:(id)arg1 displayResultsGenerator:(/*^block*/id)arg2 ;
@end

