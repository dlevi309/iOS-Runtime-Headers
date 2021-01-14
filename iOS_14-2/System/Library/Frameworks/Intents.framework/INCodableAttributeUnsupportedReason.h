/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <Intents/INCodableAttributeDialog.h>

@class NSString;

@interface INCodableAttributeUnsupportedReason : INCodableAttributeDialog {

	NSString* _code;

}

@property (nonatomic,copy) NSString * code;                                  //@synthesize code=_code - In the implementation block
@property (nonatomic,copy,readonly) NSString * predicateFormat; 
+(BOOL)supportsSecureCoding;
-(NSString *)predicateFormat;
-(id)dictionaryRepresentationWithLocalizer:(id)arg1 ;
-(void)updateWithDictionary:(id)arg1 ;
-(id)__INCodableDescriptionFormatStringLanguageCodeKey;
-(id)__INCodableDescriptionFormatStringKey;
-(void)encodeWithCoder:(id)arg1 ;
-(id)__INCodableDescriptionKey;
-(id)__INIntentResponseCodableDescriptionKey;
-(void)setCode:(NSString *)arg1 ;
-(id)__INTypeCodableDescriptionKey;
-(id)__INCodableDescriptionFormatStringDictionaryLanguageCodeKey;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)__INIntentResponseCodableDescriptionCodeKey;
-(NSString *)code;
-(id)__INCodableDescriptionCodeKey;
-(id)__INTypeCodableDescriptionCodeKey;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)__INCodableDescriptionFormatStringIDKey;
-(BOOL)isEqual:(id)arg1 ;
-(id)__INCodableDescriptionFormatStringDictionaryKey;
@end

