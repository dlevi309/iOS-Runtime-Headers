/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <libobjc.A.dylib/FLTBFBufferAccessor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSData, FTRecognitionSausage, NSArray, NSString;

@interface FTSiriTranslationInfo : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const SiriTranslationInfo* _root;

}

@property (nonatomic,readonly) FTRecognitionSausage * raw_sausage; 
@property (nonatomic,readonly) NSArray * raw_nbest_choices; 
@property (nonatomic,readonly) NSArray * post_itn_tokens; 
@property (nonatomic,readonly) NSString * post_itn_recognition; 
@property (nonatomic,readonly) NSArray * itn_alignments; 
@property (nonatomic,readonly) NSArray * translation_phrase; 
-(FTRecognitionSausage *)raw_sausage;
-(NSArray *)raw_nbest_choices;
-(NSArray *)post_itn_tokens;
-(NSString *)post_itn_recognition;
-(NSArray *)itn_alignments;
-(NSArray *)translation_phrase;
-(id)initWithFlatbuffData:(id)arg1 root:(const SiriTranslationInfo*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::schema_fb::SiriTranslationInfo>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const SiriTranslationInfo*)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

