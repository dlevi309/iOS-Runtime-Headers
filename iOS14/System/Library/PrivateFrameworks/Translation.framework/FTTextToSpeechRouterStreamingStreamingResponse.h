/*
* Generated on Thursday, January 14, 2021 at 2:23:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <libobjc.A.dylib/FLTBFBufferAccessor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSData, FTBeginTextToSpeechStreamingResponse, FTPartialTextToSpeechStreamingResponse, FTFinalTextToSpeechStreamingResponse;

@interface FTTextToSpeechRouterStreamingStreamingResponse : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const TextToSpeechRouterStreamingStreamingResponse* _root;

}

@property (nonatomic,readonly) long long content_type; 
@property (nonatomic,readonly) FTBeginTextToSpeechStreamingResponse * contentAsFTBeginTextToSpeechStreamingResponse; 
@property (nonatomic,readonly) FTPartialTextToSpeechStreamingResponse * contentAsFTPartialTextToSpeechStreamingResponse; 
@property (nonatomic,readonly) FTFinalTextToSpeechStreamingResponse * contentAsFTFinalTextToSpeechStreamingResponse; 
-(FTBeginTextToSpeechStreamingResponse *)contentAsFTBeginTextToSpeechStreamingResponse;
-(FTPartialTextToSpeechStreamingResponse *)contentAsFTPartialTextToSpeechStreamingResponse;
-(FTFinalTextToSpeechStreamingResponse *)contentAsFTFinalTextToSpeechStreamingResponse;
-(long long)content_type;
-(id)initWithFlatbuffData:(id)arg1 root:(const TextToSpeechRouterStreamingStreamingResponse*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::qss_fb::TextToSpeechRouterStreamingStreamingResponse>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const TextToSpeechRouterStreamingStreamingResponse*)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

