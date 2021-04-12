/*
* Generated on Thursday, January 14, 2021 at 2:23:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <libobjc.A.dylib/FLTBFBufferAccessor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSData, FTStartPronGuessRequest, FTAudioPacket, FTFinishAudio, FTCancelRequest;

@interface FTPronGuessStreamingRequest : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const PronGuessStreamingRequest* _root;

}

@property (nonatomic,readonly) long long content_type; 
@property (nonatomic,readonly) FTStartPronGuessRequest * contentAsFTStartPronGuessRequest; 
@property (nonatomic,readonly) FTAudioPacket * contentAsFTAudioPacket; 
@property (nonatomic,readonly) FTFinishAudio * contentAsFTFinishAudio; 
@property (nonatomic,readonly) FTCancelRequest * contentAsFTCancelRequest; 
-(long long)content_type;
-(id)initWithFlatbuffData:(id)arg1 root:(const PronGuessStreamingRequest*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::qss_fb::PronGuessStreamingRequest>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const PronGuessStreamingRequest*)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(FTStartPronGuessRequest *)contentAsFTStartPronGuessRequest;
-(FTAudioPacket *)contentAsFTAudioPacket;
-(FTFinishAudio *)contentAsFTFinishAudio;
-(FTCancelRequest *)contentAsFTCancelRequest;
@end

