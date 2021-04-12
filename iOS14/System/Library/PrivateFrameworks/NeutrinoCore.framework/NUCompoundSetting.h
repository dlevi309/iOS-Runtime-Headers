/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NUSetting.h>

@class NSDictionary;

@interface NUCompoundSetting : NUSetting {

	NSDictionary* _properties;

}

@property (readonly) NSDictionary * properties;              //@synthesize properties=_properties - In the implementation block
+(id)deserializeFromDictionary:(id)arg1 error:(out id*)arg2 ;
+(id)supportedAttributes;
-(id)copy:(id)arg1 ;
-(NSDictionary *)properties;
-(BOOL)validate:(id)arg1 error:(out id*)arg2 ;
-(id)init;
-(id)initWithAttributes:(id)arg1 ;
-(id)description;
-(BOOL)isValid:(out id*)arg1 ;
-(id)serialize:(id)arg1 error:(out id*)arg2 ;
-(void)enumerateProperties:(/*^block*/id)arg1 ;
-(id)modelForProperty:(id)arg1 ;
-(BOOL)serializeIntoDictionary:(id)arg1 error:(out id*)arg2 ;
-(id)deserialize:(id)arg1 error:(out id*)arg2 ;
-(id)makeJSValue:(id)arg1 context:(id)arg2 error:(out id*)arg3 ;
-(BOOL)validateAttribute:(id)arg1 value:(id)arg2 error:(out id*)arg3 ;
-(id)initWithProperties:(id)arg1 attributes:(id)arg2 ;
@end

