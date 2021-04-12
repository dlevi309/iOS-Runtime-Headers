/*
* Generated on Thursday, January 14, 2021 at 2:21:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INCodableAttributeMetadata.h>
#import <libobjc.A.dylib/INCodableAttributeDefaultValueProviding.h>

@class NSUnit, NSOrderedSet, NSString;

@interface INCodableMeasurementAttributeMetadata : INCodableAttributeMetadata <INCodableAttributeDefaultValueProviding> {

	BOOL _supportsNegativeNumbers;
	NSUnit* _unit;
	NSOrderedSet* _defaultUnits;
	double _defaultValue;

}

@property (nonatomic,retain) NSUnit * unit;                             //@synthesize unit=_unit - In the implementation block
@property (nonatomic,retain) NSOrderedSet * defaultUnits;               //@synthesize defaultUnits=_defaultUnits - In the implementation block
@property (assign,nonatomic) double defaultValue;                       //@synthesize defaultValue=_defaultValue - In the implementation block
@property (assign,nonatomic) BOOL supportsNegativeNumbers;              //@synthesize supportsNegativeNumbers=_supportsNegativeNumbers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)dictionaryRepresentationWithLocalizer:(id)arg1 ;
-(void)updateWithDictionary:(id)arg1 ;
-(void)setDefaultValue:(double)arg1 ;
-(double)defaultValue;
-(Class)_unitClass;
-(NSOrderedSet *)defaultUnits;
-(id)_unitWithUnitName:(id)arg1 ;
-(id)_defaultUnitWithNames:(id)arg1 ;
-(void)setDefaultUnits:(NSOrderedSet *)arg1 ;
-(BOOL)supportsNegativeNumbers;
-(void)setSupportsNegativeNumbers:(BOOL)arg1 ;
-(id)__INCodableDescriptionSupportsNegativeNumbersKey;
-(id)__INIntentResponseCodableDescriptionSupportsNegativeNumbersKey;
-(id)__INTypeCodableDescriptionSupportsNegativeNumbersKey;
-(void)encodeWithCoder:(id)arg1 ;
-(NSUnit *)unit;
-(id)__INIntentResponseCodableDescriptionDefaultValueKey;
-(id)initWithCoder:(id)arg1 ;
-(id)defaultValueForIntentDefaultValueProvider;
-(id)__INCodableDescriptionUnitKey;
-(id)__INCodableDescriptionDefaultUnitKey;
-(id)__INIntentResponseCodableDescriptionUnitKey;
-(id)__INTypeCodableDescriptionUnitKey;
-(id)__INIntentResponseCodableDescriptionDefaultUnitKey;
-(id)__INTypeCodableDescriptionDefaultUnitKey;
-(id)__INTypeCodableDescriptionDefaultValueKey;
-(void)setUnit:(NSUnit *)arg1 ;
-(id)__INCodableDescriptionDefaultValueKey;
@end

