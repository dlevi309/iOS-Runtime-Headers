/*
* Generated on Thursday, January 14, 2021 at 2:28:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
*/

#import <NanoMediaRemote/NanoMediaRemote-Structs.h>
#import <libobjc.A.dylib/NMRMediaRemoteProtobufCodable.h>

@class _NMRPlaybackQueueResponseProtobuf, NSString;

@interface NMRPlaybackQueueResponse : NSObject <NMRMediaRemoteProtobufCodable> {

	_NMRPlaybackQueueResponseProtobuf* _protobuf;

}

@property (nonatomic,readonly) void* playbackQueue; 
@property (nonatomic,readonly) CFErrorRef error; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProtobufData:(id)arg1 ;
-(void*)playbackQueue;
-(CFErrorRef)error;
-(id)protobufData;
-(id)initWithPlaybackQueue:(void*)arg1 error:(CFErrorRef)arg2 ;
-(void)invokeCompletion:(/*^block*/id)arg1 ;
@end

