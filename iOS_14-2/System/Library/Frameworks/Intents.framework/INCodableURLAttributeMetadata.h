/*
* Generated on Thursday, January 14, 2021 at 2:21:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INCodableAttributeMetadata.h>
#import <libobjc.A.dylib/INCodableAttributeDefaultValueProviding.h>

@class NSURL, NSString;

@interface INCodableURLAttributeMetadata : INCodableAttributeMetadata <INCodableAttributeDefaultValueProviding> {

	NSURL* _defaultValue;

}

@property (nonatomic,copy) NSURL * defaultValue;                    //@synthesize defaultValue=_defaultValue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)dictionaryRepresentationWithLocalizer:(id)arg1 ;
-(void)updateWithDictionary:(id)arg1 ;
-(void)setDefaultValue:(NSURL *)arg1 ;
-(NSURL *)defaultValue;
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

