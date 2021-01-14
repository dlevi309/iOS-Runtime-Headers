/*
* Generated on Thursday, January 14, 2021 at 2:21:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INCodableAttributeMetadata.h>
#import <libobjc.A.dylib/INCodableAttributeDefaultValueProviding.h>

@class NSNumber, NSString;

@interface INCodableTimeIntervalAttributeMetadata : INCodableAttributeMetadata <INCodableAttributeDefaultValueProviding> {

	long long _defaultUnit;
	long long _minimumUnit;
	long long _maximumUnit;
	NSNumber* _defaultValue;
	NSNumber* _minimumValue;
	NSNumber* _maximumValue;

}

@property (assign,nonatomic) long long defaultUnit;                 //@synthesize defaultUnit=_defaultUnit - In the implementation block
@property (assign,nonatomic) long long minimumUnit;                 //@synthesize minimumUnit=_minimumUnit - In the implementation block
@property (assign,nonatomic) long long maximumUnit;                 //@synthesize maximumUnit=_maximumUnit - In the implementation block
@property (nonatomic,retain) NSNumber * defaultValue;               //@synthesize defaultValue=_defaultValue - In the implementation block
@property (nonatomic,retain) NSNumber * minimumValue;               //@synthesize minimumValue=_minimumValue - In the implementation block
@property (nonatomic,retain) NSNumber * maximumValue;               //@synthesize maximumValue=_maximumValue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)dictionaryRepresentationWithLocalizer:(id)arg1 ;
-(void)updateWithDictionary:(id)arg1 ;
-(NSNumber *)maximumValue;
-(void)setDefaultValue:(NSNumber *)arg1 ;
-(NSNumber *)defaultValue;
-(void)setMinimumValue:(NSNumber *)arg1 ;
-(void)setDefaultUnit:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)__INIntentResponseCodableDescriptionDefaultValueKey;
-(id)initWithCoder:(id)arg1 ;
-(id)defaultValueForIntentDefaultValueProvider;
-(long long)minimumUnit;
-(long long)maximumUnit;
-(void)setMinimumUnit:(long long)arg1 ;
-(void)setMaximumUnit:(long long)arg1 ;
-(id)__INCodableDescriptionMaximumValueKey;
-(id)__INCodableDescriptionUnitKey;
-(id)__INCodableDescriptionMinimumValueKey;
-(id)__INCodableDescriptionMaximumUnitKey;
-(id)__INCodableDescriptionMinimumUnitKey;
-(id)__INCodableDescriptionDefaultUnitKey;
-(id)__INIntentResponseCodableDescriptionMaximumUnitKey;
-(id)__INTypeCodableDescriptionMaximumUnitKey;
-(id)__INIntentResponseCodableDescriptionUnitKey;
-(id)__INTypeCodableDescriptionUnitKey;
-(id)__INIntentResponseCodableDescriptionMinimumValueKey;
-(id)__INTypeCodableDescriptionMinimumValueKey;
-(id)__INIntentResponseCodableDescriptionMaximumValueKey;
-(id)__INTypeCodableDescriptionMaximumValueKey;
-(id)__INIntentResponseCodableDescriptionDefaultUnitKey;
-(id)__INTypeCodableDescriptionDefaultUnitKey;
-(id)__INIntentResponseCodableDescriptionMinimumUnitKey;
-(id)__INTypeCodableDescriptionMinimumUnitKey;
-(id)__INTypeCodableDescriptionDefaultValueKey;
-(NSNumber *)minimumValue;
-(void)setMaximumValue:(NSNumber *)arg1 ;
-(id)__INCodableDescriptionDefaultValueKey;
-(long long)defaultUnit;
@end

