/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <libobjc.A.dylib/FLTBFBufferAccessor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSData, NSString;

@interface FTEndPointCandidate : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const EndPointCandidate* _root;

}

@property (nonatomic,readonly) NSString * speech_id; 
@property (nonatomic,readonly) NSString * session_id; 
@property (nonatomic,readonly) int return_code; 
@property (nonatomic,readonly) NSString * return_str; 
@property (nonatomic,readonly) int end_point_likelihood; 
@property (nonatomic,readonly) int processed_audio_duration_ms; 
-(int)return_code;
-(NSString *)return_str;
-(NSString *)speech_id;
-(int)end_point_likelihood;
-(NSString *)session_id;
-(id)initWithFlatbuffData:(id)arg1 root:(const EndPointCandidate*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::schema_fb::EndPointCandidate>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const EndPointCandidate*)arg2 ;
-(int)processed_audio_duration_ms;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

