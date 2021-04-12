/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NUSchema.h>

@class NSDictionary;

@interface NUAdjustmentSchema : NUSchema {

	NSDictionary* _settings;

}

@property (nonatomic,readonly) NSDictionary * settings;              //@synthesize settings=_settings - In the implementation block
+(id)deserializeFromDictionary:(id)arg1 error:(out id*)arg2 ;
-(long long)type;
-(NSDictionary *)settings;
-(id)copy:(id)arg1 ;
-(BOOL)validate:(id)arg1 error:(out id*)arg2 ;
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

