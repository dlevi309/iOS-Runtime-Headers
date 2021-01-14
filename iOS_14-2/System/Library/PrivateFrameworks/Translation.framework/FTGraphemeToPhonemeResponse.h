/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <libobjc.A.dylib/FLTBFBufferAccessor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSData, NSString, NSArray;

@interface FTGraphemeToPhonemeResponse : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const GraphemeToPhonemeResponse* _root;

}

@property (nonatomic,readonly) NSString * session_id; 
@property (nonatomic,readonly) int return_code; 
@property (nonatomic,readonly) NSString * return_str; 
@property (nonatomic,readonly) NSArray * phonemes; 
@property (nonatomic,readonly) BOOL is_pron_guessed; 
@property (nonatomic,readonly) NSString * g2p_version; 
@property (nonatomic,readonly) NSString * g2p_model_version; 
@property (nonatomic,readonly) NSString * phoneset_version; 
@property (nonatomic,readonly) NSArray * aot_token_prons; 
@property (nonatomic,readonly) NSArray * jit_token_prons; 
-(BOOL)is_pron_guessed;
-(NSString *)g2p_version;
-(NSString *)g2p_model_version;
-(NSString *)phoneset_version;
-(NSArray *)aot_token_prons;
-(NSArray *)jit_token_prons;
-(int)return_code;
-(NSString *)return_str;
-(NSString *)session_id;
-(id)initWithFlatbuffData:(id)arg1 root:(const GraphemeToPhonemeResponse*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::schema_fb::GraphemeToPhonemeResponse>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const GraphemeToPhonemeResponse*)arg2 ;
-(NSArray *)phonemes;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

