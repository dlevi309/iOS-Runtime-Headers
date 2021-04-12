/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <libobjc.A.dylib/FLTBFBufferAccessor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSData, NSArray;

@interface FTTextToSpeechFeature : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const TextToSpeechFeature* _root;

}

@property (nonatomic,readonly) NSArray * normalized_text; 
@property (nonatomic,readonly) NSArray * phoneme_sequence; 
@property (nonatomic,readonly) NSArray * prompts; 
@property (nonatomic,readonly) NSArray * replacement; 
-(NSArray *)prompts;
-(NSArray *)replacement;
-(id)initWithFlatbuffData:(id)arg1 root:(const TextToSpeechFeature*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::schema_fb::TextToSpeechFeature>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const TextToSpeechFeature*)arg2 ;
-(NSArray *)normalized_text;
-(NSArray *)phoneme_sequence;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

