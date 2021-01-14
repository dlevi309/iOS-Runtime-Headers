/*
* Generated on Thursday, January 14, 2021 at 2:29:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/SiriSpeechSynthesis
*/

#import <SiriSpeechSynthesis/SiriSpeechSynthesis-Structs.h>
#import <libobjc.A.dylib/FLTBFBufferAccessor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSData, NSString;

@interface OPTTSWordTimingInfo : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const WordTimingInfo* _root;

}

@property (nonatomic,readonly) NSString * word; 
@property (nonatomic,readonly) unsigned sample_idx; 
@property (nonatomic,readonly) unsigned offset; 
@property (nonatomic,readonly) unsigned length; 
@property (nonatomic,readonly) float timestamp; 
+(id)vs_wordTimingInfos:(id)arg1 withText:(id)arg2 ;
-(NSString *)word;
-(float)timestamp;
-(unsigned)length;
-(unsigned)offset;
-(id)initWithFlatbuffData:(id)arg1 root:(const WordTimingInfo*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::schema_fb::WordTimingInfo>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const WordTimingInfo*)arg2 ;
-(unsigned)sample_idx;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

