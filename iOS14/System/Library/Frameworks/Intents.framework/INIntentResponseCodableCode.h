/*
* Generated on Thursday, January 14, 2021 at 2:21:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/INCodableCoding.h>

@class NSString, INIntentResponseCodableDescription, NSArray;

@interface INIntentResponseCodableCode : NSObject <NSSecureCoding, INCodableCoding> {

	BOOL _success;
	long long _value;
	NSString* _name;
	NSString* _formatString;
	NSString* _formatStringLocID;
	NSString* _conciseFormatString;
	NSString* _conciseFormatStringLocID;
	INIntentResponseCodableDescription* __codableDescription;

}

@property (assign,setter=_setCodableDescription:,nonatomic,__weak) INIntentResponseCodableDescription * _codableDescription;              //@synthesize _codableDescription=__codableDescription - In the implementation block
@property (assign,nonatomic) long long value;                                                                                             //@synthesize value=_value - In the implementation block
@property (nonatomic,copy) NSString * name;                                                                                               //@synthesize name=_name - In the implementation block
@property (assign,getter=isSuccess,nonatomic) BOOL success;                                                                               //@synthesize success=_success - In the implementation block
@property (nonatomic,copy) NSString * formatString;                                                                                       //@synthesize formatString=_formatString - In the implementation block
@property (nonatomic,copy) NSString * formatStringLocID;                                                                                  //@synthesize formatStringLocID=_formatStringLocID - In the implementation block
@property (nonatomic,copy) NSString * conciseFormatString;                                                                                //@synthesize conciseFormatString=_conciseFormatString - In the implementation block
@property (nonatomic,copy) NSString * conciseFormatStringLocID;                                                                           //@synthesize conciseFormatStringLocID=_conciseFormatStringLocID - In the implementation block
@property (nonatomic,readonly) NSArray * parameterNames; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)setFormatString:(NSString *)arg1 ;
-(id)dictionaryRepresentationWithLocalizer:(id)arg1 ;
-(id)dictionaryRepresentation;
-(INIntentResponseCodableDescription *)_codableDescription;
-(void)setSuccess:(BOOL)arg1 ;
-(void)updateWithDictionary:(id)arg1 ;
-(NSString *)formatString;
-(id)__INCodableDescriptionFormatStringLanguageCodeKey;
-(id)__INCodableDescriptionFormatStringKey;
-(void)setConciseFormatString:(NSString *)arg1 ;
-(id)__INCodableDescriptionSuccessKey;
-(BOOL)isSuccess;
-(NSString *)conciseFormatStringLocID;
-(id)__INCodableDescriptionConciseFormatStringLanguageCodeKey;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)conciseFormatString;
-(id)__INCodableDescriptionConciseFormatStringDictionaryLanguageCodeKey;
-(void)setConciseFormatStringLocID:(NSString *)arg1 ;
-(NSString *)name;
-(void)setValue:(long long)arg1 ;
-(void)_setCodableDescription:(id)arg1 ;
-(id)_parameterNamesFromString:(id)arg1 ;
-(void)setFormatStringLocID:(NSString *)arg1 ;
-(id)__INCodableDescriptionFormatStringDictionaryLanguageCodeKey;
-(id)initWithCoder:(id)arg1 ;
-(id)__INCodableDescriptionConciseFormatStringKey;
-(NSString *)formatStringLocID;
-(void)setName:(NSString *)arg1 ;
-(id)__INCodableDescriptionNameKey;
-(id)__INCodableDescriptionConciseFormatStringIDKey;
-(id)__INCodableDescriptionConciseFormatStringDictionaryKey;
-(NSArray *)parameterNames;
-(id)__INCodableDescriptionFormatStringIDKey;
-(long long)value;
-(id)__INCodableDescriptionFormatStringDictionaryKey;
@end

