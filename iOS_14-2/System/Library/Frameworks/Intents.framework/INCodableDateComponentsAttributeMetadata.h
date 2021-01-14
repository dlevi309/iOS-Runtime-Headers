/*
* Generated on Thursday, January 14, 2021 at 2:21:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INCodableAttributeMetadata.h>

@class NSString;

@interface INCodableDateComponentsAttributeMetadata : INCodableAttributeMetadata {

	long long _type;
	long long _format;
	unsigned long long _dateStyle;
	unsigned long long _timeStyle;
	NSString* _formatString;
	NSString* _formatStringID;

}

@property (nonatomic,readonly) long long type;                              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) long long format;                            //@synthesize format=_format - In the implementation block
@property (nonatomic,readonly) unsigned long long dateStyle;                //@synthesize dateStyle=_dateStyle - In the implementation block
@property (nonatomic,readonly) unsigned long long timeStyle;                //@synthesize timeStyle=_timeStyle - In the implementation block
@property (nonatomic,copy,readonly) NSString * formatString;                //@synthesize formatString=_formatString - In the implementation block
@property (nonatomic,copy,readonly) NSString * formatStringID;              //@synthesize formatStringID=_formatStringID - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)dictionaryRepresentationWithLocalizer:(id)arg1 ;
-(void)updateWithDictionary:(id)arg1 ;
-(NSString *)formatStringID;
-(NSString *)formatString;
-(long long)format;
-(unsigned long long)dateStyle;
-(unsigned long long)timeStyle;
-(id)__INIntentResponseCodableDescriptionTypeKey;
-(id)localizedFormatStringWithLocalizer:(id)arg1 ;
-(id)__INCodableDescriptionTemplateIDKey;
-(id)__INCodableDescriptionTemplateKey;
-(id)__INCodableDescriptionFormatKey;
-(id)__INCodableDescriptionTimeStyleKey;
-(id)__INCodableDescriptionDateStyleKey;
-(id)__INTypeCodableDescriptionTemplateKey;
-(id)__INIntentResponseCodableDescriptionTemplateIDKey;
-(id)__INTypeCodableDescriptionTemplateIDKey;
-(id)__INIntentResponseCodableDescriptionFormatKey;
-(id)__INTypeCodableDescriptionFormatKey;
-(id)__INIntentResponseCodableDescriptionDateStyleKey;
-(id)__INTypeCodableDescriptionDateStyleKey;
-(id)__INIntentResponseCodableDescriptionTimeStyleKey;
-(id)__INTypeCodableDescriptionTimeStyleKey;
-(id)__INIntentResponseCodableDescriptionTemplateKey;
-(void)encodeWithCoder:(id)arg1 ;
-(id)__INCodableDescriptionTypeKey;
-(id)localizedFormatString;
-(long long)type;
-(id)initWithCoder:(id)arg1 ;
-(id)__INTypeCodableDescriptionTypeKey;
@end

