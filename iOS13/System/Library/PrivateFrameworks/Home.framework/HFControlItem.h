/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/Home-Structs.h>
#import <Home/HFItem.h>
#import <libobjc.A.dylib/NAIdentifiable.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol HFAggregatedCharacteristicValueSource;
@class HFControlItemCharacteristicOptions, NSDictionary, NSSet, NSString;

@interface HFControlItem : HFItem <NAIdentifiable, NSCopying> {

	id<HFAggregatedCharacteristicValueSource> _valueSource;
	HFControlItemCharacteristicOptions* _characteristicOptions;
	NSDictionary* _displayResults;

}

@property (nonatomic,copy,readonly) NSDictionary * displayResults;                                      //@synthesize displayResults=_displayResults - In the implementation block
@property (nonatomic,readonly) id<HFAggregatedCharacteristicValueSource> valueSource;                   //@synthesize valueSource=_valueSource - In the implementation block
@property (nonatomic,readonly) HFControlItemCharacteristicOptions * characteristicOptions;              //@synthesize characteristicOptions=_characteristicOptions - In the implementation block
@property (nonatomic,readonly) long long sortPriority; 
@property (nonatomic,readonly) NSSet * characteristicTypes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)valueClass;
+(id)na_identity;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_tintColor;
-(long long)sortPriority;
-(id<HFAggregatedCharacteristicValueSource>)valueSource;
-(id)copyWithValueSource:(id)arg1 ;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(id)metadataForCharacteristicType:(id)arg1 ;
-(id)initWithValueSource:(id)arg1 characteristicOptions:(id)arg2 displayResults:(id)arg3 ;
-(NSDictionary *)displayResults;
-(id)writeValue:(id)arg1 ;
-(id)readValueAndPopulateStandardResults;
-(id)normalizedCharacteristicValuesForValues:(id)arg1 ;
-(id)initWithValueSource:(id)arg1 characteristicTypes:(id)arg2 displayResults:(id)arg3 ;
-(BOOL)canCopyWithCharacteristicOptions:(id)arg1 ;
-(id)copyWithCharacteristicOptions:(id)arg1 valueSource:(id)arg2 ;
-(id)valueForCharacteristicValues:(id)arg1 ;
-(id)characteristicValuesForValue:(id)arg1 ;
-(BOOL)supportsItemRepresentingServices:(id)arg1 ;
-(HFControlItemCharacteristicOptions *)characteristicOptions;
-(id)valueForCharacteristicType:(id)arg1 inBatchReadResponse:(id)arg2 ;
-(id)normalizedValueForValue:(id)arg1 ;
-(id)servicePredicateForCharacteristicType:(id)arg1 withUsage:(unsigned long long)arg2 ;
-(id)resultsForBatchReadResponse:(id)arg1 ;
-(id)characteristicValuesByTypeForBatchReadResponse:(id)arg1 ;
-(id)_standardResultsForResultValue:(id)arg1 characteristicValuesByType:(id)arg2 ;
-(id)normalizedValueForCharacteristicValue:(id)arg1 ofType:(id)arg2 ;
-(id)_descriptionWithCharacteristicOptions:(BOOL)arg1 includeResults:(BOOL)arg2 ;
-(long long)_primaryStateForValue:(id)arg1 ;
-(NSSet *)characteristicTypes;
@end

