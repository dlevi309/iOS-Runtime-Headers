/*
* Generated on Thursday, January 14, 2021 at 2:21:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INCodableAttributeMetadata.h>
#import <libobjc.A.dylib/INCodableAttributeDefaultValueProviding.h>

@class NSString;

@interface INCodableStringAttributeMetadata : INCodableAttributeMetadata <INCodableAttributeDefaultValueProviding> {

	BOOL _multiline;
	BOOL _disableAutocorrect;
	BOOL _disableSmartDashes;
	BOOL _disableSmartQuotes;
	NSString* _defaultValue;
	NSString* _defaultValueID;
	long long _capitalization;

}

@property (assign,getter=isMultiline,nonatomic) BOOL multiline;                    //@synthesize multiline=_multiline - In the implementation block
@property (assign,nonatomic) BOOL disableAutocorrect;                              //@synthesize disableAutocorrect=_disableAutocorrect - In the implementation block
@property (assign,nonatomic) BOOL disableSmartDashes;                              //@synthesize disableSmartDashes=_disableSmartDashes - In the implementation block
@property (assign,nonatomic) BOOL disableSmartQuotes;                              //@synthesize disableSmartQuotes=_disableSmartQuotes - In the implementation block
@property (nonatomic,copy) NSString * defaultValue;                                //@synthesize defaultValue=_defaultValue - In the implementation block
@property (nonatomic,copy) NSString * defaultValueID;                              //@synthesize defaultValueID=_defaultValueID - In the implementation block
@property (assign,nonatomic) long long capitalization;                             //@synthesize capitalization=_capitalization - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedDefaultValue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)dictionaryRepresentationWithLocalizer:(id)arg1 ;
-(void)updateWithDictionary:(id)arg1 ;
-(id)__INCodableDescriptionDisableAutocorrectKey;
-(id)__INTypeCodableDescriptionDisableSmartQuotesKey;
-(void)setDefaultValue:(NSString *)arg1 ;
-(NSString *)localizedDefaultValue;
-(NSString *)defaultValueID;
-(id)__INCodableDescriptionDefaultValueIDKey;
-(void)setDisableSmartQuotes:(BOOL)arg1 ;
-(id)__INTypeCodableDescriptionCapitalizationKey;
-(NSString *)defaultValue;
-(id)__INIntentResponseCodableDescriptionDisableSmartQuotesKey;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)capitalization;
-(id)__INCodableDescriptionCapitalizationKey;
-(id)__INIntentResponseCodableDescriptionDisableAutocorrectKey;
-(id)__INTypeCodableDescriptionDisableSmartDashesKey;
-(BOOL)disableAutocorrect;
-(id)__INCodableDescriptionDisableSmartDashesKey;
-(id)__INCodableDescriptionDisableSmartQuotesKey;
-(void)setCapitalization:(long long)arg1 ;
-(void)setMultiline:(BOOL)arg1 ;
-(id)__INIntentResponseCodableDescriptionCapitalizationKey;
-(id)__INTypeCodableDescriptionDefaultValueIDKey;
-(id)__INIntentResponseCodableDescriptionDefaultValueKey;
-(id)__INIntentResponseCodableDescriptionMultilineKey;
-(BOOL)disableSmartDashes;
-(id)initWithCoder:(id)arg1 ;
-(void)setDisableAutocorrect:(BOOL)arg1 ;
-(id)defaultValueForIntentDefaultValueProvider;
-(id)__INIntentResponseCodableDescriptionDefaultValueIDKey;
-(void)setDisableSmartDashes:(BOOL)arg1 ;
-(id)__INTypeCodableDescriptionMultilineKey;
-(id)__INTypeCodableDescriptionDefaultValueKey;
-(BOOL)isMultiline;
-(id)__INTypeCodableDescriptionDisableAutocorrectKey;
-(id)__INIntentResponseCodableDescriptionDisableSmartDashesKey;
-(id)__INCodableDescriptionDefaultValueKey;
-(void)setDefaultValueID:(NSString *)arg1 ;
-(id)localizedDefaultValueWithLocalizer:(id)arg1 ;
-(BOOL)disableSmartQuotes;
-(id)__INCodableDescriptionMultilineKey;
@end

