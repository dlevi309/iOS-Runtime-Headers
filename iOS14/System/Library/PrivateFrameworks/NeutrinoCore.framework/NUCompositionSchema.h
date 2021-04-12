/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NUSchema.h>

@class NSSet, NSDictionary;

@interface NUCompositionSchema : NUSchema {

	NSSet* _requiredContents;
	NSDictionary* _contents;

}

@property (nonatomic,readonly) NSDictionary * contents;               //@synthesize contents=_contents - In the implementation block
@property (nonatomic,readonly) NSSet * requiredContents; 
+(id)deserializeFromDictionary:(id)arg1 error:(out id*)arg2 ;
+(id)supportedAttributes;
-(id)copy:(id)arg1 ;
-(NSDictionary *)contents;
-(BOOL)validate:(id)arg1 error:(out id*)arg2 ;
-(long long)type;
-(BOOL)isValid:(out id*)arg1 ;
-(id)serialize:(id)arg1 error:(out id*)arg2 ;
-(BOOL)validateComposition:(id)arg1 error:(out id*)arg2 ;
-(id)modelForProperty:(id)arg1 ;
-(BOOL)serializeIntoDictionary:(id)arg1 error:(out id*)arg2 ;
-(id)deserialize:(id)arg1 error:(out id*)arg2 ;
-(id)makeJSValue:(id)arg1 context:(id)arg2 error:(out id*)arg3 ;
-(BOOL)validateAttribute:(id)arg1 value:(id)arg2 error:(out id*)arg3 ;
-(id)initWithIdentifier:(id)arg1 attributes:(id)arg2 ;
-(id)schemaDependencies;
-(id)initWithIdentifier:(id)arg1 contents:(id)arg2 attributes:(id)arg3 ;
-(NSSet *)requiredContents;
-(BOOL)validatePropertyArray:(id)arg1 error:(out id*)arg2 ;
-(BOOL)validateContents:(out id*)arg1 ;
-(BOOL)validateContents:(id)arg1 error:(out id*)arg2 ;
-(id)copyComposition:(id)arg1 ;
-(id)serializeComposition:(id)arg1 error:(out id*)arg2 ;
-(id)deserializeComposition:(id)arg1 error:(out id*)arg2 ;
-(BOOL)serializeContents:(id)arg1 intoDictionary:(id)arg2 error:(out id*)arg3 ;
-(BOOL)deserializeContents:(id)arg1 fromDictionary:(id)arg2 error:(out id*)arg3 ;
@end

