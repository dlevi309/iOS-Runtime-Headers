/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <libobjc.A.dylib/FLTBFBufferAccessor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSData, NSArray;

@interface FTTTSPhonemeSequence : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const TTSPhonemeSequence* _root;

}

@property (nonatomic,readonly) NSArray * word_phonemes; 
-(id)initWithFlatbuffData:(id)arg1 root:(const TTSPhonemeSequence*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::schema_fb::TTSPhonemeSequence>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const TTSPhonemeSequence*)arg2 ;
-(NSArray *)word_phonemes;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

