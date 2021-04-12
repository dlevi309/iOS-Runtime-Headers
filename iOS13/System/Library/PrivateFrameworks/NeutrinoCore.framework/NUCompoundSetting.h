/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)description;
-(NSDictionary *)properties;
-(id)copy:(id)arg1 ;
-(id)initWithAttributes:(id)arg1 ;
-(BOOL)validate:(id)arg1 error:(out id*)arg2 ;
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

