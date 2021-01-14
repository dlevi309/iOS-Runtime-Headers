/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NUSetting.h>

@class NUSetting;

@interface NUArraySetting : NUSetting {

	NUSetting* _content;

}

@property (readonly) NUSetting * content;              //@synthesize content=_content - In the implementation block
+(id)deserializeFromDictionary:(id)arg1 error:(out id*)arg2 ;
+(id)supportedAttributes;
-(id)copy:(id)arg1 ;
-(NUSetting *)content;
-(BOOL)validate:(id)arg1 error:(out id*)arg2 ;
-(id)init;
-(id)initWithAttributes:(id)arg1 ;
-(id)description;
-(BOOL)isValid:(out id*)arg1 ;
-(id)serialize:(id)arg1 error:(out id*)arg2 ;
-(BOOL)serializeIntoDictionary:(id)arg1 error:(out id*)arg2 ;
-(id)deserialize:(id)arg1 error:(out id*)arg2 ;
-(id)makeJSValue:(id)arg1 context:(id)arg2 error:(out id*)arg3 ;
-(BOOL)validateAttribute:(id)arg1 value:(id)arg2 error:(out id*)arg3 ;
-(id)copyArray:(id)arg1 ;
-(id)initWithContent:(id)arg1 attributes:(id)arg2 ;
@end

