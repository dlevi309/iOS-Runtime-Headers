/*
* Generated on Thursday, January 14, 2021 at 2:21:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INCodableAttributeMetadata.h>
#import <libobjc.A.dylib/INCodableAttributeDefaultValueProviding.h>

@class NSNumber, NSString;

@interface INCodableNumberAttributeMetadata : INCodableAttributeMetadata <INCodableAttributeDefaultValueProviding> {

	long long _type;
	NSNumber* _defaultValue;
	NSNumber* _minimumValue;
	NSNumber* _maximumValue;

}

@property (assign,nonatomic) long long type;                              //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSNumber * defaultValue;                     //@synthesize defaultValue=_defaultValue - In the implementation block
@property (nonatomic,retain) NSNumber * minimumValue;                     //@synthesize minimumValue=_minimumValue - In the implementation block
@property (nonatomic,retain) NSNumber * maximumValue;                     //@synthesize maximumValue=_maximumValue - In the implementation block
@property (nonatomic,readonly) BOOL supportsNegativeNumbers; 
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
-(BOOL)supportsNegativeNumbers;
-(id)__INCodableDescriptionSupportsNegativeNumbersKey;
-(id)__INIntentResponseCodableDescriptionSupportsNegativeNumbersKey;
-(id)__INTypeCodableDescriptionSupportsNegativeNumbersKey;
-(id)__INIntentResponseCodableDescriptionTypeKey;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_localizedDialogTokensWithLocalizer:(id)arg1 ;
-(void)setType:(long long)arg1 ;
-(id)__INCodableDescriptionTypeKey;
-(id)__INIntentResponseCodableDescriptionDefaultValueKey;
-(long long)type;
-(id)initWithCoder:(id)arg1 ;
-(id)defaultValueForIntentDefaultValueProvider;
-(id)__INTypeCodableDescriptionTypeKey;
-(id)__INCodableDescriptionMaximumValueKey;
-(id)__INCodableDescriptionMinimumValueKey;
-(id)__INIntentResponseCodableDescriptionMinimumValueKey;
-(id)__INTypeCodableDescriptionMinimumValueKey;
-(id)__INIntentResponseCodableDescriptionMaximumValueKey;
-(id)__INTypeCodableDescriptionMaximumValueKey;
-(id)__INTypeCodableDescriptionDefaultValueKey;
-(NSNumber *)minimumValue;
-(void)setMaximumValue:(NSNumber *)arg1 ;
-(id)__INCodableDescriptionDefaultValueKey;
@end

