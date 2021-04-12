/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NUSchema.h>

@interface NUSourceSchema : NUSchema
+(id)identifier;
+(id)requiredAttributes;
+(id)supportedAttributes;
-(id)init;
-(long long)type;
-(id)identifier;
-(id)copy:(id)arg1 ;
-(BOOL)validate:(id)arg1 error:(out id*)arg2 ;
-(id)serialize:(id)arg1 error:(out id*)arg2 ;
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

