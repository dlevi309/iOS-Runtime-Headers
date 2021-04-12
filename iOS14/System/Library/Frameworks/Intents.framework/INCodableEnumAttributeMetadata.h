/*
* Generated on Thursday, January 14, 2021 at 2:21:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INCodableAttributeMetadata.h>
#import <libobjc.A.dylib/INCodableAttributeDefaultValueProviding.h>

@class INCodableEnumValue, NSString;

@interface INCodableEnumAttributeMetadata : INCodableAttributeMetadata <INCodableAttributeDefaultValueProviding> {

	INCodableEnumValue* _defaultValue;

}

@property (nonatomic,retain) INCodableEnumValue * defaultValue;              //@synthesize defaultValue=_defaultValue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)dictionaryRepresentationWithLocalizer:(id)arg1 ;
-(void)updateWithDictionary:(id)arg1 ;
-(void)setDefaultValue:(INCodableEnumValue *)arg1 ;
-(INCodableEnumValue *)defaultValue;
-(void)encodeWithCoder:(id)arg1 ;
-(id)__INCodableDescriptionKey;
-(id)__INIntentResponseCodableDescriptionKey;
-(id)__INTypeCodableDescriptionKey;
-(id)__INIntentResponseCodableDescriptionDefaultValueKey;
-(id)initWithCoder:(id)arg1 ;
-(id)defaultValueForIntentDefaultValueProvider;
-(id)__INTypeCodableDescriptionDefaultValueKey;
-(id)__INCodableDescriptionDefaultValueKey;
@end

