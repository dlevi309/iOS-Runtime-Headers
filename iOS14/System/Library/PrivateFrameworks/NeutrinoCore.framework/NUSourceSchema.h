/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NUSchema.h>

@interface NUSourceSchema : NUSchema
+(id)requiredAttributes;
+(id)identifier;
+(id)supportedAttributes;
-(id)copy:(id)arg1 ;
-(BOOL)validate:(id)arg1 error:(out id*)arg2 ;
-(id)init;
-(long long)type;
-(id)serialize:(id)arg1 error:(out id*)arg2 ;
-(id)identifier;
-(BOOL)serializeIntoDictionary:(id)arg1 error:(out id*)arg2 ;
-(id)deserialize:(id)arg1 error:(out id*)arg2 ;
-(id)makeJSValue:(id)arg1 context:(id)arg2 error:(out id*)arg3 ;
-(id)schemaDependencies;
-(BOOL)validateSource:(id)arg1 error:(out id*)arg2 ;
-(id)serializeSource:(id)arg1 error:(out id*)arg2 ;
-(id)deserializeSource:(id)arg1 error:(out id*)arg2 ;
-(BOOL)serializeAssetIdentifier:(id)arg1 intoDictionary:(id)arg2 error:(out id*)arg3 ;
-(id)deserializeAssetIdentifierFromDictionary:(id)arg1 error:(out id*)arg2 ;
@end

