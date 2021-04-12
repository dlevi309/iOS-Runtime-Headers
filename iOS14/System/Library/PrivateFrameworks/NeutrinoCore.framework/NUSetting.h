/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NUModel.h>

@interface NUSetting : NUModel

@property (readonly) id defaultValue; 
@property (nonatomic,readonly) BOOL isRequired; 
+(id)deserializeFromDictionary:(id)arg1 error:(out id*)arg2 ;
+(id)supportedAttributes;
+(id)deserializeAttributesFromDictionary:(id)arg1 error:(out id*)arg2 ;
+(id)deserializeSettingsFromDictionary:(id)arg1 key:(id)arg2 error:(out id*)arg3 ;
-(id)copy:(id)arg1 ;
-(BOOL)isRequired;
-(id)defaultValue;
-(id)description;
-(id)serialize:(id)arg1 error:(out id*)arg2 ;
-(id)deserialize:(id)arg1 error:(out id*)arg2 ;
-(id)makeJSValue:(id)arg1 context:(id)arg2 error:(out id*)arg3 ;
-(BOOL)validateAttribute:(id)arg1 value:(id)arg2 error:(out id*)arg3 ;
-(BOOL)serializeAttributesIntoDictionary:(id)arg1 error:(out id*)arg2 ;
@end

