/*
* Generated on Thursday, January 14, 2021 at 2:29:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/SiriSpeechSynthesis
*/

#import <SiriSpeechSynthesis/SiriSpeechSynthesis-Structs.h>
#import <libobjc.A.dylib/FLTBFBufferAccessor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSData, NSString;

@interface OPTTSStartTextToSpeechStreamingRequest_ContextInfoEntry : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const ContextInfoEntry* _root;

}

@property (nonatomic,readonly) NSString * key; 
@property (nonatomic,readonly) NSString * value; 
-(NSString *)key;
-(id)initWithFlatbuffData:(id)arg1 root:(const ContextInfoEntry*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::schema_fb::StartTextToSpeechStreamingRequest_::ContextInfoEntry>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const ContextInfoEntry*)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)value;
@end

