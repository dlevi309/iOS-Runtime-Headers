/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NUSchema.h>

@class NSDictionary;

@interface NUAdjustmentSchema : NUSchema {

	NSDictionary* _settings;

}

@property (nonatomic,readonly) NSDictionary * settings;              //@synthesize settings=_settings - In the implementation block
+(id)deserializeFromDictionary:(id)arg1 error:(out id*)arg2 ;
-(id)copy:(id)arg1 ;
-(BOOL)validate:(id)arg1 error:(out id*)arg2 ;
-(NSDictionary *)settings;
-(long long)type;
-(BOOL)isValid:(out id*)arg1 ;
-(id)serialize:(id)arg1 error:(out id*)arg2 ;
-(void)enumerateProperties:(/*^block*/id)arg1 ;
-(id)modelForProperty:(id)arg1 ;
-(BOOL)serializeIntoDictionary:(id)arg1 error:(out id*)arg2 ;
-(id)deserialize:(id)arg1 error:(out id*)arg2 ;
-(id)makeJSValue:(id)arg1 context:(id)arg2 error:(out id*)arg3 ;
-(id)initWithIdentifier:(id)arg1 attributes:(id)arg2 ;
-(id)schemaDependencies;
-(id)initWithIdentifier:(id)arg1 settings:(id)arg2 attributes:(id)arg3 ;
-(BOOL)validateSettings:(out id*)arg1 ;
-(BOOL)validateAdjustment:(id)arg1 error:(out id*)arg2 ;
-(BOOL)validateSettings:(id)arg1 error:(out id*)arg2 ;
-(id)copyAdjustment:(id)arg1 ;
-(id)serializeAdjustment:(id)arg1 error:(out id*)arg2 ;
-(id)deserializeAdjustment:(id)arg1 error:(out id*)arg2 ;
-(BOOL)serializeSettings:(id)arg1 intoDictionary:(id)arg2 error:(out id*)arg3 ;
-(BOOL)deserializeSettings:(id)arg1 fromDictionary:(id)arg2 error:(out id*)arg3 ;
@end

