/*
* Generated on Thursday, January 14, 2021 at 2:21:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/INCodableCoding.h>

@class NSString, INCodableAttribute, INCodableDescription, INCodableLocalizationTable;

@interface INCodableAttributeMetadata : NSObject <NSSecureCoding, INCodableCoding> {

	NSString* _name;
	NSString* _placeholder;
	NSString* _placeholderID;
	INCodableAttribute* _codableAttribute;

}

@property (nonatomic,__weak,readonly) INCodableAttribute * codableAttribute;                      //@synthesize codableAttribute=_codableAttribute - In the implementation block
@property (nonatomic,__weak,readonly) INCodableDescription * _codableDescription; 
@property (nonatomic,copy,readonly) INCodableLocalizationTable * _localizationTable; 
@property (nonatomic,copy,readonly) NSString * name;                                              //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * placeholder;                                                //@synthesize placeholder=_placeholder - In the implementation block
@property (nonatomic,copy) NSString * placeholderID;                                              //@synthesize placeholderID=_placeholderID - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedPlaceholder; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(INCodableAttribute *)codableAttribute;
-(id)dictionaryRepresentationWithLocalizer:(id)arg1 ;
-(id)dictionaryRepresentation;
-(INCodableDescription *)_codableDescription;
-(void)updateWithDictionary:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_localizedDialogTokensWithLocalizer:(id)arg1 ;
-(NSString *)name;
-(NSString *)description;
-(void)setPlaceholder:(NSString *)arg1 ;
-(INCodableLocalizationTable *)_localizationTable;
-(NSString *)placeholder;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)placeholderID;
-(NSString *)localizedPlaceholder;
-(id)initWithName:(id)arg1 codableAttribute:(id)arg2 ;
-(id)localizedPlaceholderWithLocalizer:(id)arg1 ;
-(void)setPlaceholderID:(NSString *)arg1 ;
-(id)__INCodableDescriptionPlaceholderIDKey;
-(id)__INCodableDescriptionPlaceholderKey;
-(id)__INIntentResponseCodableDescriptionPlaceholderKey;
-(id)__INTypeCodableDescriptionPlaceholderKey;
-(id)__INIntentResponseCodableDescriptionPlaceholderIDKey;
-(id)__INTypeCodableDescriptionPlaceholderIDKey;
@end

