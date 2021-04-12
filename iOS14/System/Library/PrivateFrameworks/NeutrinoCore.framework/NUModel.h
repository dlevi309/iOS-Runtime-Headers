/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/


@class NSDictionary;

@interface NUModel : NSObject {

	NSDictionary* _attributes;

}

@property (nonatomic,readonly) NSDictionary * attributes;              //@synthesize attributes=_attributes - In the implementation block
+(id)requiredAttributes;
+(BOOL)validateIdentifier:(id)arg1 error:(out id*)arg2 ;
+(id)deserializeFromDictionary:(id)arg1 error:(out id*)arg2 ;
+(id)supportedAttributes;
+(BOOL)validateBool:(id)arg1 error:(out id*)arg2 ;
+(BOOL)validateNumber:(id)arg1 error:(out id*)arg2 ;
+(BOOL)validateString:(id)arg1 error:(out id*)arg2 ;
+(BOOL)validateArray:(id)arg1 error:(out id*)arg2 ;
+(BOOL)validateStringArray:(id)arg1 error:(out id*)arg2 ;
+(BOOL)validateName:(id)arg1 error:(out id*)arg2 ;
+(BOOL)validatePattern:(id)arg1 error:(out id*)arg2 ;
+(BOOL)validatePropertyName:(id)arg1 error:(out id*)arg2 ;
+(id)reservedPropertyNames;
+(id)_deserializeObjectOfClass:(Class)arg1 fromDictionary:(id)arg2 key:(id)arg3 error:(out id*)arg4 ;
+(id)deserializeStringFromDictionary:(id)arg1 key:(id)arg2 error:(out id*)arg3 ;
+(id)deserializeArrayFromDictionary:(id)arg1 key:(id)arg2 error:(out id*)arg3 ;
+(id)deserializeDictionaryFromDictionary:(id)arg1 key:(id)arg2 error:(out id*)arg3 ;
+(id)deserializeAttribute:(id)arg1 value:(id)arg2 error:(out id*)arg3 ;
-(id)copy:(id)arg1 ;
-(BOOL)validate:(id)arg1 error:(out id*)arg2 ;
-(id)init;
-(id)initWithAttributes:(id)arg1 ;
-(NSDictionary *)attributes;
-(BOOL)isValid:(out id*)arg1 ;
-(id)serialize:(id)arg1 error:(out id*)arg2 ;
-(void)enumerateProperties:(/*^block*/id)arg1 ;
-(id)modelForProperty:(id)arg1 ;
-(id)serializeAsDictionary:(out id*)arg1 ;
-(BOOL)serializeIntoDictionary:(id)arg1 error:(out id*)arg2 ;
-(id)deserialize:(id)arg1 error:(out id*)arg2 ;
-(id)makeJSValue:(id)arg1 context:(id)arg2 error:(out id*)arg3 ;
-(BOOL)validateAttributes:(out id*)arg1 ;
-(BOOL)validateAttribute:(id)arg1 value:(id)arg2 error:(out id*)arg3 ;
-(BOOL)serializeAttribute:(id)arg1 value:(id)arg2 intoDictionary:(id)arg3 error:(out id*)arg4 ;
@end

