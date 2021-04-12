/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INCodableAttributeMetadata.h>

@class NSUnit, NSOrderedSet;

@interface INCodableMeasurementAttributeMetadata : INCodableAttributeMetadata {

	BOOL _supportsNegativeNumbers;
	NSUnit* _unit;
	NSOrderedSet* _defaultUnits;
	double _defaultValue;

}

@property (nonatomic,retain) NSUnit * unit;                             //@synthesize unit=_unit - In the implementation block
@property (nonatomic,retain) NSOrderedSet * defaultUnits;               //@synthesize defaultUnits=_defaultUnits - In the implementation block
@property (assign,nonatomic) double defaultValue;                       //@synthesize defaultValue=_defaultValue - In the implementation block
@property (assign,nonatomic) BOOL supportsNegativeNumbers;              //@synthesize supportsNegativeNumbers=_supportsNegativeNumbers - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUnit *)unit;
-(double)defaultValue;
-(void)setDefaultValue:(double)arg1 ;
-(void)setUnit:(NSUnit *)arg1 ;
-(void)updateWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentationWithLocalizer:(id)arg1 ;
-(Class)_unitClass;
-(id)_unitWithUnitName:(id)arg1 ;
-(id)_defaultUnitWithNames:(id)arg1 ;
-(NSOrderedSet *)defaultUnits;
-(void)setDefaultUnits:(NSOrderedSet *)arg1 ;
-(BOOL)supportsNegativeNumbers;
-(void)setSupportsNegativeNumbers:(BOOL)arg1 ;
@end

