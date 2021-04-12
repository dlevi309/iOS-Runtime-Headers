/*
* Generated on Thursday, January 14, 2021 at 2:23:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <libobjc.A.dylib/FLTBFBufferAccessor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSData, FTStartSpeechRequest, NSArray;

@interface FTStartMultilingualSpeechRequest : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const StartMultilingualSpeechRequest* _root;

}

@property (nonatomic,readonly) FTStartSpeechRequest * start_speech_request; 
@property (nonatomic,readonly) NSArray * language_parameters_by_id; 
-(FTStartSpeechRequest *)start_speech_request;
-(id)initWithFlatbuffData:(id)arg1 root:(const StartMultilingualSpeechRequest*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::schema_fb::StartMultilingualSpeechRequest>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const StartMultilingualSpeechRequest*)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)language_parameters_by_id;
@end

