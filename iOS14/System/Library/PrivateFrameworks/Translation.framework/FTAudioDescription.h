/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <libobjc.A.dylib/FLTBFBufferAccessor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSData;

@interface FTAudioDescription : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const AudioDescription* _root;

}

@property (nonatomic,readonly) double sample_rate; 
@property (nonatomic,readonly) unsigned format_id; 
@property (nonatomic,readonly) unsigned format_flags; 
@property (nonatomic,readonly) unsigned bytes_per_packet; 
@property (nonatomic,readonly) unsigned frames_per_packet; 
@property (nonatomic,readonly) unsigned bytes_per_frame; 
@property (nonatomic,readonly) unsigned channels_per_frame; 
@property (nonatomic,readonly) unsigned bits_per_channel; 
@property (nonatomic,readonly) unsigned reserved; 
-(unsigned)reserved;
-(AudioStreamBasicDescription)audioStreamBasicDescription;
-(id)initWithFlatbuffData:(id)arg1 root:(const AudioDescription*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::schema_fb::AudioDescription>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const AudioDescription*)arg2 ;
-(unsigned)format_id;
-(double)sample_rate;
-(unsigned)format_flags;
-(unsigned)bytes_per_packet;
-(unsigned)frames_per_packet;
-(unsigned)bytes_per_frame;
-(unsigned)channels_per_frame;
-(unsigned)bits_per_channel;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

