/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NUModel.h>

@class NUIdentifier;

@interface NUSchema : NUModel {

	NUIdentifier* _identifier;

}

@property (nonatomic,readonly) long long type; 
@property (nonatomic,readonly) NUIdentifier * identifier;              //@synthesize identifier=_identifier - In the implementation block
+(id)deserializeFromDictionary:(id)arg1 error:(out id*)arg2 ;
+(id)reservedPropertyNames;
+(id)deserializeIdentifierFromDictionary:(id)arg1 error:(out id*)arg2 ;
+(BOOL)validateSchemaIdentifier:(id)arg1 type:(long long)arg2 error:(out id*)arg3 ;
+(BOOL)validateSchemaType:(id)arg1 error:(out id*)arg2 ;
+(long long)schemaTypeFromString:(id)arg1 error:(out id*)arg2 ;
+(BOOL)validateIdentifiable:(id)arg1 error:(out id*)arg2 ;
+(BOOL)validateIdentifiable:(id)arg1 type:(long long)arg2 error:(out id*)arg3 ;
+(id)copyIdentifiableItem:(id)arg1 ;
+(id)copyItem:(id)arg1 schemaIdentifier:(id)arg2 ;
+(long long)deserializeMediaTypeFromDictionary:(id)arg1 ;
+(BOOL)serializeMediaType:(long long)arg1 intoDictionary:(id)arg2 error:(out id*)arg3 ;
+(id)deserializeContentsFromDictionary:(id)arg1 error:(out id*)arg2 ;
+(id)makeJSValueForIdentifiableItem:(id)arg1 context:(id)arg2 error:(out id*)arg3 ;
+(id)serializeIdentifiableItem:(id)arg1 error:(out id*)arg2 ;
+(id)deserializeIdentifiableItem:(id)arg1 error:(out id*)arg2 ;
+(id)serializeItem:(id)arg1 schemaIdentifier:(id)arg2 error:(out id*)arg3 ;
+(id)deserializeItem:(id)arg1 schemaIdentifier:(id)arg2 error:(out id*)arg3 ;
+(id)deserializeSchemaFromArray:(id)arg1 error:(out id*)arg2 ;
-(id)description;
-(long long)type;
-(NUIdentifier *)identifier;
-(id)initWithAttributes:(id)arg1 ;
-(BOOL)isValid:(out id*)arg1 ;
-(BOOL)validateIdentifier:(id)arg1 error:(out id*)arg2 ;
-(BOOL)serializeIntoDictionary:(id)arg1 error:(out id*)arg2 ;
-(id)initWithIdentifier:(id)arg1 attributes:(id)arg2 ;
-(BOOL)serializeIdentifier:(id)arg1 intoDictionary:(id)arg2 error:(out id*)arg3 ;
-(BOOL)deserializeIdentifierFromDictionary:(id)arg1 error:(out id*)arg2 ;
-(id)schemaDependencies;
@end

